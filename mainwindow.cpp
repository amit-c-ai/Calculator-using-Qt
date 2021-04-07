#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->history->setTextColor(QColor(113,113,113));
    ui->openBracket->hide();
    ui->sin->hide();
    ui->cos->hide();
    ui->tan->hide();
    ui->log->hide();
    ui->factorial->hide();
    ui->closeBracket->hide();
    ui->asin->hide();
    ui->acos->hide();
    ui->atan->hide();
    ui->ln->hide();
    ui->mod->hide();

    sound=new QMediaPlayer;
    sound->setMedia(QMediaContent(QUrl("qrc:/soft.mp3")));
}

MainWindow::~MainWindow()
{
    delete ui;
}

long MainWindow::factorial(int n)
{
    if (n == 0)
      return 1;
    else
      return(n * factorial(n-1));
}


int MainWindow::precedence(QString op)
{

//    if(op=='(' || op==')'){
//        return 4;
//    }
    if(isUOperator(op))
        return 5;

    if(op=='^' ){
        return 3;
    }
    if(op=='*' || op=='/'){
        return 2;
    }

    if(op=='+' || op=='-'){
        return 1;
    }
    else
        return -1;
}

void MainWindow::tokenReplacer(QStringList *original)
{
    original->removeAll("");

    if(original->contains("%")){
        for(int i=1; i<original->length(); i++){
            if(original->at(i)=="%"){
                original->insert(i,"(");
                original->replace(i+1, "0.01");
                original->insert(i+2,")");
            }
        }
    }

    if(original->contains("(")){
        for(int i=1; i<original->length(); i++){
            if((original->at(i)=="(" && !isBOperator(original->at(i-1)) && !isUOperator(original->at(i-1))) || (original->at(i)=="(" && original->at(i-1)==")"))
                original->insert(i,"*");

            else if(isUOperator(original->at(i)) && (!isBOperator(original->at(i-1)) && !isUOperator(original->at(i-1))))
                original->insert(i,"*");

            else if((i!=(original->length()-1) && (original->at(i)==")" && !isBOperator(original->at(i+1)) && !isUOperator(original->at(i+1)))) || ((i!=(original->length()-1)) && (original->at(i)==")" && original->at(i+1)=="(")))
                original->insert(i+1,"*");
        }
    }

    while(original->contains("π"))
        original->replace(original->indexOf("π"),QString::number(M_PI));
    while(original->contains("e"))
        original->replace(original->indexOf("e"),QString::number(M_E));

}

QStack<QString> MainWindow::infix_To_postfix(QStringList tokens)
{
    QStack<QString> Operator;
    QStack<QString> postfix;
    for(int i=0; i<tokens.length(); i++){
        if(!isBOperator(tokens[i]) && !isUOperator(tokens[i]))
            postfix.push(tokens[i]);
        else{
            if(Operator.isEmpty() || tokens[i]=="(" || isUOperator(tokens[i]))
                Operator.push(tokens[i]);
            else if(tokens[i]==")"){
                    while(Operator.last()!="(")
                        postfix.push(Operator.pop());
                   Operator.pop();
                }
            else if(precedence(tokens[i]) > precedence(Operator.last()) || Operator.last()=="(")
                Operator.push(tokens[i]);
            else if(precedence(tokens[i]) <= precedence(Operator.last())){
                postfix.push(Operator.pop());
                i--;
               }
            }
        }
    while(!Operator.isEmpty()){
        postfix.push(Operator.pop());
    }
    return postfix;
}

bool MainWindow::isBOperator(QString op){

    if(op=='+' || op=='-' || op=='*' || op=='/' || op=='^' || op=='%' || op=='(' || op==')')
        return true;
    return false;
}

bool MainWindow::isUOperator(QString op)
{
    if(op=="sin" || op=="cos" || op=="tan" || op=="log" || op=="ln" || op=="asin" || op=="acos" || op=="atan" || op=="fact" || op=="sqrt")
        return true;
    return false;
}

bool MainWindow::isDigit(QChar c)
{
    if(c>='0' && c<='9')
        return true;
    return false;
}

bool MainWindow::isAlphabet(QChar c)
{
    if(c>='a' && c<='z')
        return true;
    return false;
}

QStringList MainWindow::seperateTokens(QString input)//2*-1
{
    QStringList tokens;
    QString temp;
    for(int i=0; i<input.length(); i++){
        if(isDigit(input[i]) || (i==0 && (input[i]=='+' || input[i]=='-')) || input[i]=='.' || input[i]=='e' || input[i]=="π"){
            temp+=input[i];
        }
        else if(isAlphabet(input[i])){
            if(!isAlphabet(input[i-1])){
                tokens.append(temp);
                temp.clear();
            }
            temp+=input[i];
        }
        else if(isBOperator(QString(input[i]))){
            if(isBOperator(QString(input[i-1])) && input[i]!='(' && input[i-1]!=')'){
                temp+=input[i];
                continue;
            }
            tokens.append(temp);
            tokens.append(QString(input[i]));
            temp.clear();
        }

        else if(isUOperator(QString(input[i]))){

        }
    }
    if(!temp.isEmpty())
       tokens.append(temp);

    qDebug()<<tokens;
    tokenReplacer(&tokens);

    return tokens;
}

double MainWindow::calculate(QString screen)
{
    QStringList tokens = seperateTokens(screen);
    qDebug()<<tokens;
    QStack<QString> postfix = infix_To_postfix(tokens);
    qDebug()<<postfix;
    double answer = evaluate(postfix);
    qDebug()<<answer;
    ui->output->setText(QString::number(answer,'g',10));
    return answer;
}

double MainWindow::evaluate(QStack<QString> postfix)
{
    QStack<double> evalStack;
    for(int i=0; i<postfix.length(); i++){
        if(!isBOperator(postfix[i]) && !isUOperator(postfix[i])){
            evalStack.push(postfix[i].toDouble());
        }
        else if(isBOperator(postfix[i])){
            double operand_2 = evalStack.pop();
            double operand_1 = evalStack.pop();
            qDebug()<<operand_1<<operand_2;
            double answer;
            QString op = postfix[i];

            if(op=='+')
                answer = operand_1 + operand_2;
            else if(op=='-')
                answer = operand_1 - operand_2;
            else if(op=='*')
                answer = operand_1 * operand_2;
            else if(op=='/')
                answer = operand_1 / operand_2;
            else if(op=='^')
                answer = pow(operand_1, operand_2);

            evalStack.push(answer);
        }

        else if(isUOperator(postfix[i])){
            double operand_1 = evalStack.pop();
            qDebug()<<operand_1;
            double answer;
            QString op = postfix[i];
            if(op=="sin")
                answer = qSin(isdegrees ? operand_1*M_PI/180.0 : operand_1);
            else if(op=="cos")
                answer = qCos(isdegrees ? operand_1*M_PI/180.0 : operand_1);
            else if(op=="tan")
                answer = qTan(isdegrees ? operand_1*M_PI/180.0 : operand_1);
            else if(op=="asin")
                answer = qAsin(operand_1);
            else if(op=="acos")
                answer = qAcos(operand_1);
            else if(op=="atan")
                answer = qAtan(operand_1);
            else if(op=="log")
                answer = log10(operand_1);
            else if(op=="ln")
                answer = qLn(operand_1);
            else if(op=="sqrt")
                answer = qSqrt(operand_1);
            else if(op=="fact")
                answer = factorial((int)operand_1);//fix 1.5 factorial with error msg

            evalStack.push(answer);
        }
    }

    return evalStack.pop();
}



void MainWindow::on_calculate_clicked()
{
        screen = ui->output->text();
        calculate(screen);
        ui->history->insertPlainText(screen+"="+ui->output->text()+"\n");

        if(sound->media()!=QMediaContent(QUrl("qrc:/soft.mp3")))
            sound->setMedia(QMediaContent(QUrl("qrc:/soft.mp3")));
        sound->play();

}

void MainWindow::setText(QString text, int posIncrement=1)
{
    sound->setPosition(0);
    if(sound->media()!=QMediaContent(QUrl("qrc:/soft.mp3")))
    sound->setMedia(QMediaContent(QUrl("qrc:/soft.mp3")));

    QString temp;
    int cPos = ui->output->cursorPosition();
    temp= ui->output->text();
    temp = temp.mid(0,cPos)+text+temp.mid(cPos,-1);
    ui->output->setText(temp);
    ui->output->setCursorPosition(cPos+posIncrement);
    ui->output->setFocus();
}

void MainWindow::setTextProg(QString text, int posIncrement=1, QString textbox="decEdit")
{
    if(textbox=="hexEdit"){
        sound->setPosition(0);
        if(sound->media()!=QMediaContent(QUrl("qrc:/soft.mp3")))
        sound->setMedia(QMediaContent(QUrl("qrc:/soft.mp3")));

        QString temp;
        int cPos = ui->hexEdit->cursorPosition();
        temp= ui->hexEdit->text();
        temp = temp.mid(0,cPos)+text+temp.mid(cPos,-1);
        ui->hexEdit->setText(temp);
        ui->hexEdit->setCursorPosition(cPos+posIncrement);
        ui->hexEdit->setFocus();
    }
    else if(textbox=="decEdit"){
        sound->setPosition(0);
        if(sound->media()!=QMediaContent(QUrl("qrc:/soft.mp3")))
        sound->setMedia(QMediaContent(QUrl("qrc:/soft.mp3")));

        QString temp;
        int cPos = ui->decEdit->cursorPosition();
        temp= ui->decEdit->text();
        temp = temp.mid(0,cPos)+text+temp.mid(cPos,-1);
        ui->decEdit->setText(temp);
        ui->decEdit->setCursorPosition(cPos+posIncrement);
        ui->decEdit->setFocus();
    }
    else if(textbox=="octEdit"){
        sound->setPosition(0);
        if(sound->media()!=QMediaContent(QUrl("qrc:/soft.mp3")))
        sound->setMedia(QMediaContent(QUrl("qrc:/soft.mp3")));

        QString temp;
        int cPos = ui->octEdit->cursorPosition();
        temp= ui->octEdit->text();
        temp = temp.mid(0,cPos)+text+temp.mid(cPos,-1);
        ui->octEdit->setText(temp);
        ui->octEdit->setCursorPosition(cPos+posIncrement);
        ui->octEdit->setFocus();
    }
    else if(textbox=="binEdit"){
        sound->setPosition(0);
        if(sound->media()!=QMediaContent(QUrl("qrc:/soft.mp3")))
        sound->setMedia(QMediaContent(QUrl("qrc:/soft.mp3")));

        QString temp;
        int cPos = ui->binEdit->cursorPosition();
        temp= ui->binEdit->text();
        temp = temp.mid(0,cPos)+text+temp.mid(cPos,-1);
        ui->binEdit->setText(temp);
        ui->binEdit->setCursorPosition(cPos+posIncrement);
        ui->binEdit->setFocus();
    }

}

void MainWindow::on_add_clicked()
{
    setText("+");sound->play();
}

void MainWindow::on_one_clicked()
{
  setText("1");sound->play();
}

void MainWindow::on_two_clicked()
{
    setText("2");sound->play();
}

void MainWindow::on_three_clicked()
{
    setText("3");sound->play();
}

void MainWindow::on_four_clicked()
{
    setText("4");sound->play();
}

void MainWindow::on_five_clicked()
{
    setText("5");sound->play();
}

void MainWindow::on_six_clicked()
{
    setText("6");sound->play();
}

void MainWindow::on_seven_clicked()
{
    setText("7");sound->play();
}

void MainWindow::on_eight_clicked()
{
    setText("8");sound->play();
}

void MainWindow::on_nine_clicked()
{
    setText("9");sound->play();
}

void MainWindow::on_zero_clicked()
{
    setText("0");sound->play();
}

void MainWindow::on_dot_clicked()
{
    setText(".");sound->play();
}

void MainWindow::on_multiply_clicked()
{
    setText("*");sound->play();
}

void MainWindow::on_minus_clicked()
{
    setText("-");sound->play();
}

void MainWindow::on_divide_clicked()
{
   setText("/");sound->play();
}

void MainWindow::on_percentage_clicked()
{
    setText("%");sound->play();
}

void MainWindow::on_openBracket_clicked()
{
    setText("()");sound->play();
}
void MainWindow::on_closeBracket_clicked()
{
//    QString temp;
//    temp= ui->output->text() + ")";
//    ui->output->setText(temp);
}

void MainWindow::on_clear_clicked()
{
    if(sound->media()!=QMediaContent(QUrl("qrc:/soft.mp3")))
    sound->setMedia(QMediaContent(QUrl("qrc:/soft.mp3")));
    sound->play();
    ui->output->clear();
}

void MainWindow::on_back_clicked()
{
    screen=ui->output->text();
    int cPos = ui->output->cursorPosition();
    screen = screen.remove(cPos-1,1);
    ui->output->setText(screen);
    ui->output->setCursorPosition(cPos-1);
    ui->output->setFocus();
    sound->play();
}

void MainWindow::on_power_clicked()
{
    setText("^");sound->play();
}

void MainWindow::on_piConstant_clicked()
{
    setText("π");sound->play();
}

void MainWindow::on_eConstant_clicked()
{
    setText("e");sound->play();
}

void MainWindow::on_reciprocal_clicked()
{
    setText("^(-1)", 5);sound->play();
}

void MainWindow::on_root_clicked()
{
    setText("sqrt()", 5);sound->play();
}

void MainWindow::on_sin_clicked()
{
    setText("sin()", 4);sound->play();
}

void MainWindow::on_cos_clicked()
{
    setText("cos()", 4);sound->play();
}

void MainWindow::on_tan_clicked()
{
    setText("tan()", 4);sound->play();
}

void MainWindow::on_output_returnPressed()
{
    on_calculate_clicked();sound->play();
}

void MainWindow::on_advancedMode_clicked()
{
    if(ui->advancedMode->text() == "Basic Mode"){
        if(sound->media()!=QMediaContent(QUrl("qrc:/basic.mp3")))
        sound->setMedia(QMediaContent(QUrl("qrc:/basic.mp3")));
        sound->play();
        ui->advancedMode->setText("Advanced Mode");
                ui->openBracket->hide();
                ui->sin->hide();
                ui->cos->hide();
                ui->tan->hide();
                ui->log->hide();
                ui->factorial->hide();
                ui->closeBracket->hide();
                ui->asin->hide();
                ui->acos->hide();
                ui->atan->hide();
                ui->ln->hide();
                ui->mod->hide();
    }
    else if(ui->advancedMode->text() =="Advanced Mode"){
        if(sound->media()!=QMediaContent(QUrl("qrc:/advanced.mp3")))
        sound->setMedia(QMediaContent(QUrl("qrc:/advanced.mp3")));
        sound->play();
        ui->advancedMode->setText("Basic Mode");
        ui->openBracket->show();
        ui->sin->show();
        ui->cos->show();
        ui->tan->show();
        ui->log->show();
        ui->factorial->show();
        ui->closeBracket->show();
        ui->asin->show();
        ui->acos->show();
        ui->atan->show();
        ui->ln->show();
        ui->mod->show();
    }
}

void MainWindow::on_asin_clicked()
{
    setText("asin()", 5);sound->play();
}

void MainWindow::on_acos_clicked()
{
    setText("acos()", 5);sound->play();
}

void MainWindow::on_atan_clicked()
{
   setText("atan()", 5);sound->play();
}

void MainWindow::on_ln_clicked()
{
    setText("ln()", 3);sound->play();
}

void MainWindow::on_log_clicked()
{
    setText("log()", 4);sound->play();
}

void MainWindow::on_factorial_clicked()
{
    setText("fact()", 5);sound->play();
}

void MainWindow::on_square_clicked()
{
    setText("^2", 2);sound->play();
}



void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    setWindowOpacity(value/100.0);
}

void MainWindow::on_degrees_toggled(bool checked)
{
    if(checked)
        isdegrees=1;
}

void MainWindow::on_radians_toggled(bool checked)
{
    if(checked)
        isdegrees=0;
}

void MainWindow::on_comboBox_activated(int index)
{
    ui->stackedWidget->setCurrentIndex(index);
}


//############## Programing Calculator Part ##################

void MainWindow::on_and_prog_clicked()
{
    setTextProg("AND",3);sound->play();
}

void MainWindow::on_or_prog_clicked()
{
    setTextProg("OR",2);sound->play();
}

void MainWindow::on_not_prog_clicked()
{
    setTextProg("NOT",3);sound->play();
}

void MainWindow::on_nand_prog_clicked()
{
    setTextProg("NAND",4);sound->play();
}

void MainWindow::on_nor_prog_clicked()
{
    setTextProg("NOR",3);sound->play();
}

void MainWindow::on_exor_prog_clicked()
{
    setTextProg("XOR",3);sound->play();
}

void MainWindow::on_a_prog_clicked()
{
    setTextProg("A");sound->play();
}

void MainWindow::on_b_prog_clicked()
{
    setTextProg("B");sound->play();
}

void MainWindow::on_c_prog_clicked()
{
    setTextProg("C");sound->play();
}

void MainWindow::on_d_prog_clicked()
{
    setTextProg("D");sound->play();
}

void MainWindow::on_e_prog_clicked()
{
    setTextProg("E");sound->play();
}

void MainWindow::on_f_prog_clicked()
{
   setTextProg("F");sound->play();
}

void MainWindow::on_clear_prog_clicked()
{
    if(sound->media()!=QMediaContent(QUrl("qrc:/soft.mp3")))
    sound->setMedia(QMediaContent(QUrl("qrc:/soft.mp3")));
    sound->play();
    ui->hexEdit->clear();
}

void MainWindow::on_back_prog_clicked()
{
    screen=ui->hexEdit->text();
    int cPos = ui->hexEdit->cursorPosition();
    screen = screen.remove(cPos-1,1);
    ui->hexEdit->setText(screen);
    ui->hexEdit->setCursorPosition(cPos-1);
    ui->hexEdit->setFocus();
    sound->play();
}

void MainWindow::on_add_prog_clicked()
{
    setTextProg("+");sound->play();
}

void MainWindow::on_minus_prog_clicked()
{
    setTextProg("-");sound->play();
}

void MainWindow::on_multiply_prog_clicked()
{
    setTextProg("*");sound->play();
}

void MainWindow::on_divide_prog_clicked()
{
    setTextProg("/");sound->play();
}

void MainWindow::on_openBracket_prog_clicked()
{
    setTextProg("()");sound->play();
}

void MainWindow::on_closeBracket_prog_clicked()
{
    setTextProg(")");sound->play();
}

void MainWindow::on_left_shift_prog_clicked()
{

}

void MainWindow::on_right_shift_prog_clicked()
{

}

void MainWindow::on_one_prog_clicked()
{
    setTextProg("1");sound->play();
}

void MainWindow::on_two_prog_clicked()
{
    setTextProg("2");sound->play();
}

void MainWindow::on_three_prog_clicked()
{
    setTextProg("3");sound->play();
}

void MainWindow::on_four_prog_clicked()
{
    setTextProg("4");sound->play();
}

void MainWindow::on_five_prog_clicked()
{
    setTextProg("5");sound->play();
}

void MainWindow::on_six_prog_clicked()
{
    setTextProg("6");sound->play();
}

void MainWindow::on_seven_prog_clicked()
{
    setTextProg("7");sound->play();
}

void MainWindow::on_eight_prog_clicked()
{
    setTextProg("8");sound->play();
}

void MainWindow::on_nine_prog_clicked()
{
    setTextProg("9");sound->play();
}

void MainWindow::on_zero_prog_clicked()
{
    setTextProg("0");sound->play();
}

void MainWindow::on_n_complement_clicked()
{

}

void MainWindow::on_n_complement_2_clicked()
{

}

void MainWindow::on_calculate_prog_clicked()
{
    QString text=ui->output_prog->text();
//    ui->output_prog->setText(QString::number(text.toInt(),16));
}

void MainWindow::on_hexEdit_textChanged(const QString &arg1)//*****Make function for *(Base n) to Decimal. and use decimal to any base in Qt.
{
    qint64 decimal=hexTodecimal(arg1.toUpper());
    qDebug()<<"decimal: "<<decimal;
    ui->decEdit->setText(QString::number(decimal));
    ui->octEdit->setText(QString::number(decimal,8));
    ui->binEdit->setText(QString::number(decimal,2));
}

void MainWindow::on_decEdit_textChanged(const QString &arg1)
{
    ui->hexEdit->setText(QString::number(arg1.toInt(),16));
    qDebug()<<"hex: "<<QString::number(arg1.toInt(),16);
    ui->octEdit->setText(QString::number(arg1.toInt(),8));
    ui->binEdit->setText(QString::number(arg1.toInt(),2));
}

void MainWindow::on_octEdit_textChanged(const QString &arg1)
{
    qint64 decimal= octalTodecimal(arg1);
    ui->decEdit->setText(QString::number(decimal));
    ui->hexEdit->setText(QString::number(decimal,16));
    ui->binEdit->setText(QString::number(decimal,2));
}

void MainWindow::on_binEdit_textChanged(const QString &arg1)
{
    qint64 decimal= binaryTOdecimal(arg1);
    ui->decEdit->setText(QString::number(decimal));
    ui->octEdit->setText(QString::number(decimal,8));
    ui->hexEdit->setText(QString::number(decimal,16));
}

//void MainWindow::on_output_prog_cursorPositionChanged(int arg1, int arg2)
//{

//}

double MainWindow::binaryTOdecimal(QString value)
{
    double sum=0;
    int len=value.length();
    qint64 num=value.toLongLong();
    for(int i=len-1; i>=0; i--){
        sum = sum + num % 10 * pow(2,(len-1-i));
        num=num/10;
    }
    return sum;
}

qint64 MainWindow::octalTodecimal(QString value)
{
    qint64 sum=0;
    int len=value.length();
    qint64 num=value.toLongLong();
    for(int i=len-1; i>=0; i--){
        sum = sum + num % 10 * pow(8,(len-1-i));
        num=num/10;
    }
    return sum;
}

qint64 MainWindow::hexTodecimal(QString value)
{
    int len=value.length();
    qint64 sum=0;
    for (int i=len-1; i>=0; i--) {
       if (isDigit(value[i])) {
          sum += (value[i].toLatin1() - 48)*pow(16,len-1-i);
       }
       else if (value[i]>='A' && value[i]<='F') {
          sum += (value[i].toLatin1() - 55)*pow(16,len-1-i);
       }
    }
    return sum;
}

void MainWindow::on_hexRadioButton_clicked()
{
    QString textbox = "hexEdit";
    setTextProg(textbox);
}

void MainWindow::on_decRadioButton_clicked()
{
    QString textbox = "decEdit";
    setTextProg(textbox);
}

void MainWindow::on_octRadioButton_clicked()
{
    QString textbox = "octEdit";
    setTextProg(textbox);
}

void MainWindow::on_binRadioButton_clicked()
{
    QString textbox = "binEdit";
    setTextProg(textbox);
}
