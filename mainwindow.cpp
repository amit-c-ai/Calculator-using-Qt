#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->openBracket->hide();
    ui->sin->hide();
    ui->cos->hide();
    ui->tan->hide();
    ui->log->hide();
    ui->square->hide();
    ui->closeBracket->hide();
    ui->asin->hide();
    ui->acos->hide();
    ui->atan->hide();
    ui->ln->hide();
    ui->mod->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString toString(const double myLongDouble)
{
  std::stringstream ss;
  ss << myLongDouble;

  return QString::fromStdString(ss.str());
}

int MainWindow::precedence(QChar op)
{

//    if(op=='(' || op==')'){
//        return 4;
//    }
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

QStack<QString> MainWindow::infix_To_postfix(QStringList tokens)
{
    QStack<QChar> Operator;
    QStack<QString> postfix;
    for(int i=0; i<tokens.length(); i++){
        if(!isBOperator(tokens[i]))
            postfix.push(tokens[i]);
        else{
            if(Operator.isEmpty() || tokens[i]=="(")
                Operator.push(tokens[i].at(0));
            else if(tokens[i]==")"){
                    while(Operator.last()!="(")
                        postfix.push(Operator.pop());
                   Operator.pop();
                }
            else if(precedence(tokens[i].at(0)) > precedence(Operator.last()) || Operator.last()=="(")
                Operator.push(tokens[i].at(0));
            else if(precedence(tokens[i].at(0)) <= precedence(Operator.last())){
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
    if(op=="sin" || op=="cos" || op=="tan" || op=="log" || op=="ln" || op=="asin" || op=="acos" || op=="atan")
        return true;
    return false;
}

QStringList MainWindow::seperateTokens(QString input)//2*-1
{
    QStringList tokens;
    QString temp;
    for(int i=0; i<input.length(); i++){
        if((input[i]>='0' && input[i]<='9') || (i==0 && (input[i]=='+' || input[i]=='-')) || input[i]=='.' || input[i]=='e' || input[i]=="π"){
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

    tokens.removeAll("");

    if(tokens.contains("(")){
        for(int i=1; i<tokens.length(); i++){
            if((tokens[i]=="(" && !isBOperator(tokens[i-1])) || (tokens[i]=="(" && tokens[i-1]==")")){
                tokens.insert(i,"*");
            }
        }
    }

    while(tokens.contains("π"))
        tokens.replace(tokens.indexOf("π"),QString::number(M_PI));
    while(tokens.contains("e"))
        tokens.replace(tokens.indexOf("e"),QString::number(M_E));

    return tokens;
}

void MainWindow::calculate(QString screen)
{
    QStringList tokens = seperateTokens(screen);
    qDebug()<<tokens;
    QStack<QString> postfix = infix_To_postfix(tokens);
    qDebug()<<postfix;
    double answer = evaluate(postfix);
    qDebug()<<answer;
    ui->output->setText(QString::number(answer,'g',10));
}

double MainWindow::evaluate(QStack<QString> postfix)
{
    QStack<double> evalStack;
    for(int i=0; i<postfix.length(); i++){
        if(!isBOperator(postfix[i])){
            evalStack.push(postfix[i].toDouble());
        }
        else{
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
    }

    return evalStack.pop();
}


void MainWindow::on_calculate_clicked()
{
    screen = ui->output->text();
    calculate(screen);
}

void MainWindow::on_add_clicked()
{
    QString temp;
    temp= ui->output->text() + "+";
    ui->output->setText(temp);
}

void MainWindow::on_one_clicked()
{
    QString temp;
    temp= ui->output->text() + "1";
    ui->output->setText(temp);

}

void MainWindow::on_two_clicked()
{
    QString temp;
    temp= ui->output->text() + "2";
    ui->output->setText(temp);
}

void MainWindow::on_three_clicked()
{
    QString temp;
    temp= ui->output->text() + "3";
    ui->output->setText(temp);
}

void MainWindow::on_four_clicked()
{
    QString temp;
    temp= ui->output->text() + "4";
    ui->output->setText(temp);
}

void MainWindow::on_five_clicked()
{
    QString temp;
    temp= ui->output->text() + "5";
    ui->output->setText(temp);
}

void MainWindow::on_six_clicked()
{
    QString temp;
    temp= ui->output->text() + "6";
    ui->output->setText(temp);
}

void MainWindow::on_seven_clicked()
{
    QString temp;
    temp= ui->output->text() + "7";
    ui->output->setText(temp);
}

void MainWindow::on_eight_clicked()
{
    QString temp;
    temp= ui->output->text() + "8";
    ui->output->setText(temp);
}

void MainWindow::on_nine_clicked()
{
    QString temp;
    temp= ui->output->text() + "9";
    ui->output->setText(temp);
}

void MainWindow::on_zero_clicked()
{
    QString temp;
    temp= ui->output->text() + "0";
    ui->output->setText(temp);
}

void MainWindow::on_dot_clicked()
{
    QString temp;
    temp= ui->output->text() + ".";
    ui->output->setText(temp);
}

void MainWindow::on_multiply_clicked()
{
    QString temp;
    temp= ui->output->text() + "*";
    ui->output->setText(temp);
}

void MainWindow::on_minus_clicked()
{
    QString temp;
    temp= ui->output->text() + "-";
    ui->output->setText(temp);
}

void MainWindow::on_divide_clicked()
{
    QString temp;
    temp= ui->output->text() + "/";
    ui->output->setText(temp);
}

void MainWindow::on_percentage_clicked()
{
    QString temp;
    temp= ui->output->text() + "%";
    ui->output->setText(temp);
}

void MainWindow::on_openBracket_clicked()
{
    QString temp;
    temp= ui->output->text() + "(";
    ui->output->setText(temp);
}
void MainWindow::on_closeBracket_clicked()
{
    QString temp;
    temp= ui->output->text() + ")";
    ui->output->setText(temp);
}

void MainWindow::on_clear_clicked()
{
    screen = ui->output->text();
    screen = screen.remove(0,screen.length());
    ui->output->setText(screen);
}

void MainWindow::on_back_clicked()
{
    screen=ui->output->text();
    screen = screen.remove(screen.length()-1,1);
    ui->output->setText(screen);
}



void MainWindow::on_power_clicked()
{
    QString temp;
    temp= ui->output->text() + "^";
    ui->output->setText(temp);
}

void MainWindow::on_piConstant_clicked()
{
    QString temp;
    temp= ui->output->text() + "π";
    ui->output->setText(temp);
}
#include<math.h>
void MainWindow::on_eConstant_clicked()
{
    QString temp;
    temp= ui->output->text() + "e";
    ui->output->setText(temp);
}

void MainWindow::on_reciprocal_clicked()
{
    QString temp;
    temp= ui->output->text() + "^(-1)";
    ui->output->setText(temp);
}

void MainWindow::on_root_clicked()
{
    QString temp;
    temp= ui->output->text() + "^(0.5)";
    ui->output->setText(temp);
}

void MainWindow::on_output_returnPressed()
{
    on_calculate_clicked();
}

void MainWindow::on_advancedMode_clicked()
{
    if(ui->advancedMode->text() == "Basic Mode"){
        ui->advancedMode->setText("Advanced Mode");
                ui->openBracket->hide();
                ui->sin->hide();
                ui->cos->hide();
                ui->tan->hide();
                ui->log->hide();
                ui->square->hide();
                ui->closeBracket->hide();
                ui->asin->hide();
                ui->acos->hide();
                ui->atan->hide();
                ui->ln->hide();
                ui->mod->hide();
    }
    else if(ui->advancedMode->text() =="Advanced Mode"){
        ui->advancedMode->setText("Basic Mode");
        ui->openBracket->show();
        ui->sin->show();
        ui->cos->show();
        ui->tan->show();
        ui->log->show();
        ui->square->show();
        ui->closeBracket->show();
        ui->asin->show();
        ui->acos->show();
        ui->atan->show();
        ui->ln->show();
        ui->mod->show();
    }
}





