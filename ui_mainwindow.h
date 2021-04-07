/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_7;
    QComboBox *comboBox;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_4;
    QTextEdit *history;
    QSlider *horizontalSlider;
    QPushButton *advancedMode;
    QLineEdit *output;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout;
    QPushButton *openBracket;
    QPushButton *clear;
    QPushButton *sin;
    QPushButton *power;
    QPushButton *cos;
    QPushButton *reciprocal;
    QPushButton *tan;
    QPushButton *square;
    QPushButton *log;
    QPushButton *root;
    QPushButton *factorial;
    QPushButton *eConstant;
    QGridLayout *gridLayout_3;
    QPushButton *six;
    QPushButton *eight;
    QPushButton *zero;
    QPushButton *three;
    QPushButton *five;
    QPushButton *one;
    QRadioButton *degrees;
    QPushButton *seven;
    QPushButton *nine;
    QPushButton *dot;
    QPushButton *four;
    QPushButton *calculate;
    QPushButton *two;
    QPushButton *piConstant;
    QRadioButton *radians;
    QGridLayout *gridLayout_2;
    QPushButton *add;
    QPushButton *asin;
    QPushButton *minus;
    QPushButton *acos;
    QPushButton *multiply;
    QPushButton *atan;
    QPushButton *divide;
    QPushButton *ln;
    QPushButton *percentage;
    QPushButton *mod;
    QPushButton *back;
    QPushButton *closeBracket;
    QWidget *page_2;
    QGridLayout *gridLayout_20;
    QGridLayout *gridLayout_18;
    QGridLayout *gridLayout_17;
    QPushButton *and_prog;
    QPushButton *or_prog;
    QPushButton *not_prog;
    QPushButton *nand_prog;
    QPushButton *nor_prog;
    QPushButton *exor_prog;
    QGridLayout *gridLayout_14;
    QPushButton *openBracket_prog;
    QPushButton *calculate_prog;
    QPushButton *closeBracket_prog;
    QPushButton *left_shift_prog;
    QPushButton *right_shift_prog;
    QPushButton *seven_prog;
    QPushButton *eight_prog;
    QPushButton *nine_prog;
    QPushButton *four_prog;
    QPushButton *five_prog;
    QPushButton *six_prog;
    QPushButton *one_prog;
    QPushButton *two_prog;
    QPushButton *three_prog;
    QPushButton *n_complement;
    QPushButton *zero_prog;
    QPushButton *n_complement_2;
    QGridLayout *gridLayout_15;
    QPushButton *divide_prog;
    QPushButton *add_prog;
    QPushButton *clear_prog;
    QPushButton *minus_prog;
    QPushButton *back_prog;
    QPushButton *multiply_prog;
    QGridLayout *gridLayout_16;
    QPushButton *f_prog;
    QPushButton *d_prog;
    QPushButton *a_prog;
    QPushButton *c_prog;
    QPushButton *b_prog;
    QPushButton *e_prog;
    QGridLayout *gridLayout_19;
    QLineEdit *hexEdit;
    QLabel *label_4;
    QLineEdit *octEdit;
    QLineEdit *binEdit;
    QLabel *label_3;
    QLineEdit *decEdit;
    QLabel *label;
    QLabel *label_2;
    QRadioButton *hexRadioButton;
    QRadioButton *decRadioButton;
    QRadioButton *octRadioButton;
    QRadioButton *binRadioButton;
    QLineEdit *output_prog;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(607, 673);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Gill Sans MT Condensed"));
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_7 = new QGridLayout(centralwidget);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Gill Sans MT Condensed"));
        font1.setPointSize(16);
        comboBox->setFont(font1);
        comboBox->setLayoutDirection(Qt::LeftToRight);

        gridLayout_7->addWidget(comboBox, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_6 = new QGridLayout(page);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        history = new QTextEdit(page);
        history->setObjectName(QString::fromUtf8("history"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Courier"));
        font2.setPointSize(12);
        font2.setStrikeOut(false);
        history->setFont(font2);
        history->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:0.432, x2:1, y2:1, stop:0 rgba(226, 226, 226, 255), stop:1 rgba(255, 255, 255, 255));"));
        history->setFrameShape(QFrame::StyledPanel);
        history->setFrameShadow(QFrame::Sunken);
        history->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        history->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        history->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        history->setReadOnly(true);
        history->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout_4->addWidget(history, 3, 0, 1, 1);

        horizontalSlider = new QSlider(page);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setEnabled(true);
        horizontalSlider->setMouseTracking(true);
        horizontalSlider->setMinimum(15);
        horizontalSlider->setSliderPosition(85);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(true);

        gridLayout_4->addWidget(horizontalSlider, 6, 0, 1, 1);

        advancedMode = new QPushButton(page);
        advancedMode->setObjectName(QString::fromUtf8("advancedMode"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(advancedMode->sizePolicy().hasHeightForWidth());
        advancedMode->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Gill Sans MT Condensed"));
        font3.setPointSize(22);
        advancedMode->setFont(font3);

        gridLayout_4->addWidget(advancedMode, 2, 0, 1, 1);

        output = new QLineEdit(page);
        output->setObjectName(QString::fromUtf8("output"));
        sizePolicy1.setHeightForWidth(output->sizePolicy().hasHeightForWidth());
        output->setSizePolicy(sizePolicy1);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Gill Sans MT Condensed"));
        font4.setPointSize(22);
        font4.setBold(true);
        font4.setWeight(75);
        output->setFont(font4);

        gridLayout_4->addWidget(output, 4, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        openBracket = new QPushButton(page);
        openBracket->setObjectName(QString::fromUtf8("openBracket"));
        sizePolicy.setHeightForWidth(openBracket->sizePolicy().hasHeightForWidth());
        openBracket->setSizePolicy(sizePolicy);
        openBracket->setFont(font3);

        gridLayout->addWidget(openBracket, 0, 0, 1, 1);

        clear = new QPushButton(page);
        clear->setObjectName(QString::fromUtf8("clear"));
        sizePolicy.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy);
        clear->setFont(font3);

        gridLayout->addWidget(clear, 0, 1, 1, 1);

        sin = new QPushButton(page);
        sin->setObjectName(QString::fromUtf8("sin"));
        sizePolicy.setHeightForWidth(sin->sizePolicy().hasHeightForWidth());
        sin->setSizePolicy(sizePolicy);
        sin->setFont(font3);

        gridLayout->addWidget(sin, 1, 0, 1, 1);

        power = new QPushButton(page);
        power->setObjectName(QString::fromUtf8("power"));
        sizePolicy.setHeightForWidth(power->sizePolicy().hasHeightForWidth());
        power->setSizePolicy(sizePolicy);
        power->setFont(font3);

        gridLayout->addWidget(power, 1, 1, 1, 1);

        cos = new QPushButton(page);
        cos->setObjectName(QString::fromUtf8("cos"));
        sizePolicy.setHeightForWidth(cos->sizePolicy().hasHeightForWidth());
        cos->setSizePolicy(sizePolicy);
        cos->setFont(font3);

        gridLayout->addWidget(cos, 2, 0, 1, 1);

        reciprocal = new QPushButton(page);
        reciprocal->setObjectName(QString::fromUtf8("reciprocal"));
        sizePolicy.setHeightForWidth(reciprocal->sizePolicy().hasHeightForWidth());
        reciprocal->setSizePolicy(sizePolicy);
        reciprocal->setFont(font3);

        gridLayout->addWidget(reciprocal, 2, 1, 1, 1);

        tan = new QPushButton(page);
        tan->setObjectName(QString::fromUtf8("tan"));
        sizePolicy.setHeightForWidth(tan->sizePolicy().hasHeightForWidth());
        tan->setSizePolicy(sizePolicy);
        tan->setFont(font3);

        gridLayout->addWidget(tan, 3, 0, 1, 1);

        square = new QPushButton(page);
        square->setObjectName(QString::fromUtf8("square"));
        sizePolicy.setHeightForWidth(square->sizePolicy().hasHeightForWidth());
        square->setSizePolicy(sizePolicy);
        square->setFont(font3);

        gridLayout->addWidget(square, 3, 1, 1, 1);

        log = new QPushButton(page);
        log->setObjectName(QString::fromUtf8("log"));
        sizePolicy.setHeightForWidth(log->sizePolicy().hasHeightForWidth());
        log->setSizePolicy(sizePolicy);
        log->setFont(font3);

        gridLayout->addWidget(log, 4, 0, 1, 1);

        root = new QPushButton(page);
        root->setObjectName(QString::fromUtf8("root"));
        sizePolicy.setHeightForWidth(root->sizePolicy().hasHeightForWidth());
        root->setSizePolicy(sizePolicy);
        root->setFont(font3);

        gridLayout->addWidget(root, 4, 1, 1, 1);

        factorial = new QPushButton(page);
        factorial->setObjectName(QString::fromUtf8("factorial"));
        sizePolicy.setHeightForWidth(factorial->sizePolicy().hasHeightForWidth());
        factorial->setSizePolicy(sizePolicy);
        factorial->setFont(font3);

        gridLayout->addWidget(factorial, 5, 0, 1, 1);

        eConstant = new QPushButton(page);
        eConstant->setObjectName(QString::fromUtf8("eConstant"));
        sizePolicy.setHeightForWidth(eConstant->sizePolicy().hasHeightForWidth());
        eConstant->setSizePolicy(sizePolicy);
        eConstant->setFont(font3);

        gridLayout->addWidget(eConstant, 5, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        six = new QPushButton(page);
        six->setObjectName(QString::fromUtf8("six"));
        sizePolicy.setHeightForWidth(six->sizePolicy().hasHeightForWidth());
        six->setSizePolicy(sizePolicy);
        six->setFont(font3);

        gridLayout_3->addWidget(six, 5, 2, 1, 1);

        eight = new QPushButton(page);
        eight->setObjectName(QString::fromUtf8("eight"));
        sizePolicy.setHeightForWidth(eight->sizePolicy().hasHeightForWidth());
        eight->setSizePolicy(sizePolicy);
        eight->setFont(font3);

        gridLayout_3->addWidget(eight, 4, 1, 1, 1);

        zero = new QPushButton(page);
        zero->setObjectName(QString::fromUtf8("zero"));
        sizePolicy.setHeightForWidth(zero->sizePolicy().hasHeightForWidth());
        zero->setSizePolicy(sizePolicy);
        zero->setFont(font3);

        gridLayout_3->addWidget(zero, 7, 1, 1, 1);

        three = new QPushButton(page);
        three->setObjectName(QString::fromUtf8("three"));
        sizePolicy.setHeightForWidth(three->sizePolicy().hasHeightForWidth());
        three->setSizePolicy(sizePolicy);
        three->setFont(font3);

        gridLayout_3->addWidget(three, 6, 2, 1, 1);

        five = new QPushButton(page);
        five->setObjectName(QString::fromUtf8("five"));
        sizePolicy.setHeightForWidth(five->sizePolicy().hasHeightForWidth());
        five->setSizePolicy(sizePolicy);
        five->setFont(font3);

        gridLayout_3->addWidget(five, 5, 1, 1, 1);

        one = new QPushButton(page);
        one->setObjectName(QString::fromUtf8("one"));
        sizePolicy.setHeightForWidth(one->sizePolicy().hasHeightForWidth());
        one->setSizePolicy(sizePolicy);
        one->setFont(font3);
        one->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(one, 6, 0, 1, 1);

        degrees = new QRadioButton(page);
        degrees->setObjectName(QString::fromUtf8("degrees"));
        degrees->setFont(font1);
        degrees->setChecked(true);

        gridLayout_3->addWidget(degrees, 0, 0, 1, 1);

        seven = new QPushButton(page);
        seven->setObjectName(QString::fromUtf8("seven"));
        sizePolicy.setHeightForWidth(seven->sizePolicy().hasHeightForWidth());
        seven->setSizePolicy(sizePolicy);
        seven->setFont(font3);

        gridLayout_3->addWidget(seven, 4, 0, 1, 1);

        nine = new QPushButton(page);
        nine->setObjectName(QString::fromUtf8("nine"));
        sizePolicy.setHeightForWidth(nine->sizePolicy().hasHeightForWidth());
        nine->setSizePolicy(sizePolicy);
        nine->setFont(font3);

        gridLayout_3->addWidget(nine, 4, 2, 1, 1);

        dot = new QPushButton(page);
        dot->setObjectName(QString::fromUtf8("dot"));
        sizePolicy.setHeightForWidth(dot->sizePolicy().hasHeightForWidth());
        dot->setSizePolicy(sizePolicy);
        dot->setFont(font3);

        gridLayout_3->addWidget(dot, 7, 2, 1, 1);

        four = new QPushButton(page);
        four->setObjectName(QString::fromUtf8("four"));
        sizePolicy.setHeightForWidth(four->sizePolicy().hasHeightForWidth());
        four->setSizePolicy(sizePolicy);
        four->setFont(font3);

        gridLayout_3->addWidget(four, 5, 0, 1, 1);

        calculate = new QPushButton(page);
        calculate->setObjectName(QString::fromUtf8("calculate"));
        sizePolicy.setHeightForWidth(calculate->sizePolicy().hasHeightForWidth());
        calculate->setSizePolicy(sizePolicy);
        calculate->setFont(font3);

        gridLayout_3->addWidget(calculate, 1, 0, 1, 3);

        two = new QPushButton(page);
        two->setObjectName(QString::fromUtf8("two"));
        sizePolicy.setHeightForWidth(two->sizePolicy().hasHeightForWidth());
        two->setSizePolicy(sizePolicy);
        two->setFont(font3);

        gridLayout_3->addWidget(two, 6, 1, 1, 1);

        piConstant = new QPushButton(page);
        piConstant->setObjectName(QString::fromUtf8("piConstant"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(piConstant->sizePolicy().hasHeightForWidth());
        piConstant->setSizePolicy(sizePolicy2);
        piConstant->setFont(font3);

        gridLayout_3->addWidget(piConstant, 7, 0, 1, 1);

        radians = new QRadioButton(page);
        radians->setObjectName(QString::fromUtf8("radians"));
        radians->setFont(font1);

        gridLayout_3->addWidget(radians, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        add = new QPushButton(page);
        add->setObjectName(QString::fromUtf8("add"));
        sizePolicy.setHeightForWidth(add->sizePolicy().hasHeightForWidth());
        add->setSizePolicy(sizePolicy);
        add->setFont(font3);

        gridLayout_2->addWidget(add, 1, 0, 1, 1);

        asin = new QPushButton(page);
        asin->setObjectName(QString::fromUtf8("asin"));
        sizePolicy.setHeightForWidth(asin->sizePolicy().hasHeightForWidth());
        asin->setSizePolicy(sizePolicy);
        asin->setFont(font3);

        gridLayout_2->addWidget(asin, 1, 1, 1, 1);

        minus = new QPushButton(page);
        minus->setObjectName(QString::fromUtf8("minus"));
        sizePolicy.setHeightForWidth(minus->sizePolicy().hasHeightForWidth());
        minus->setSizePolicy(sizePolicy);
        minus->setFont(font3);

        gridLayout_2->addWidget(minus, 2, 0, 1, 1);

        acos = new QPushButton(page);
        acos->setObjectName(QString::fromUtf8("acos"));
        sizePolicy.setHeightForWidth(acos->sizePolicy().hasHeightForWidth());
        acos->setSizePolicy(sizePolicy);
        acos->setFont(font3);

        gridLayout_2->addWidget(acos, 2, 1, 1, 1);

        multiply = new QPushButton(page);
        multiply->setObjectName(QString::fromUtf8("multiply"));
        sizePolicy.setHeightForWidth(multiply->sizePolicy().hasHeightForWidth());
        multiply->setSizePolicy(sizePolicy);
        multiply->setFont(font3);

        gridLayout_2->addWidget(multiply, 3, 0, 1, 1);

        atan = new QPushButton(page);
        atan->setObjectName(QString::fromUtf8("atan"));
        sizePolicy.setHeightForWidth(atan->sizePolicy().hasHeightForWidth());
        atan->setSizePolicy(sizePolicy);
        atan->setFont(font3);

        gridLayout_2->addWidget(atan, 3, 1, 1, 1);

        divide = new QPushButton(page);
        divide->setObjectName(QString::fromUtf8("divide"));
        sizePolicy.setHeightForWidth(divide->sizePolicy().hasHeightForWidth());
        divide->setSizePolicy(sizePolicy);
        divide->setFont(font3);

        gridLayout_2->addWidget(divide, 4, 0, 1, 1);

        ln = new QPushButton(page);
        ln->setObjectName(QString::fromUtf8("ln"));
        sizePolicy.setHeightForWidth(ln->sizePolicy().hasHeightForWidth());
        ln->setSizePolicy(sizePolicy);
        ln->setFont(font3);

        gridLayout_2->addWidget(ln, 4, 1, 1, 1);

        percentage = new QPushButton(page);
        percentage->setObjectName(QString::fromUtf8("percentage"));
        sizePolicy.setHeightForWidth(percentage->sizePolicy().hasHeightForWidth());
        percentage->setSizePolicy(sizePolicy);
        percentage->setFont(font3);

        gridLayout_2->addWidget(percentage, 5, 0, 1, 1);

        mod = new QPushButton(page);
        mod->setObjectName(QString::fromUtf8("mod"));
        sizePolicy.setHeightForWidth(mod->sizePolicy().hasHeightForWidth());
        mod->setSizePolicy(sizePolicy);
        mod->setFont(font3);

        gridLayout_2->addWidget(mod, 5, 1, 1, 1);

        back = new QPushButton(page);
        back->setObjectName(QString::fromUtf8("back"));
        sizePolicy.setHeightForWidth(back->sizePolicy().hasHeightForWidth());
        back->setSizePolicy(sizePolicy);
        back->setFont(font3);

        gridLayout_2->addWidget(back, 0, 0, 1, 1);

        closeBracket = new QPushButton(page);
        closeBracket->setObjectName(QString::fromUtf8("closeBracket"));
        sizePolicy.setHeightForWidth(closeBracket->sizePolicy().hasHeightForWidth());
        closeBracket->setSizePolicy(sizePolicy);
        closeBracket->setFont(font3);

        gridLayout_2->addWidget(closeBracket, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_5, 5, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_20 = new QGridLayout(page_2);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        gridLayout_18 = new QGridLayout();
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_17 = new QGridLayout();
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        and_prog = new QPushButton(page_2);
        and_prog->setObjectName(QString::fromUtf8("and_prog"));
        sizePolicy.setHeightForWidth(and_prog->sizePolicy().hasHeightForWidth());
        and_prog->setSizePolicy(sizePolicy);
        and_prog->setFont(font3);

        gridLayout_17->addWidget(and_prog, 0, 0, 1, 1);

        or_prog = new QPushButton(page_2);
        or_prog->setObjectName(QString::fromUtf8("or_prog"));
        sizePolicy.setHeightForWidth(or_prog->sizePolicy().hasHeightForWidth());
        or_prog->setSizePolicy(sizePolicy);
        or_prog->setFont(font3);

        gridLayout_17->addWidget(or_prog, 0, 1, 1, 1);

        not_prog = new QPushButton(page_2);
        not_prog->setObjectName(QString::fromUtf8("not_prog"));
        sizePolicy.setHeightForWidth(not_prog->sizePolicy().hasHeightForWidth());
        not_prog->setSizePolicy(sizePolicy);
        not_prog->setFont(font3);

        gridLayout_17->addWidget(not_prog, 0, 2, 1, 1);

        nand_prog = new QPushButton(page_2);
        nand_prog->setObjectName(QString::fromUtf8("nand_prog"));
        sizePolicy.setHeightForWidth(nand_prog->sizePolicy().hasHeightForWidth());
        nand_prog->setSizePolicy(sizePolicy);
        nand_prog->setFont(font3);

        gridLayout_17->addWidget(nand_prog, 0, 3, 1, 1);

        nor_prog = new QPushButton(page_2);
        nor_prog->setObjectName(QString::fromUtf8("nor_prog"));
        sizePolicy.setHeightForWidth(nor_prog->sizePolicy().hasHeightForWidth());
        nor_prog->setSizePolicy(sizePolicy);
        nor_prog->setFont(font3);

        gridLayout_17->addWidget(nor_prog, 0, 4, 1, 1);

        exor_prog = new QPushButton(page_2);
        exor_prog->setObjectName(QString::fromUtf8("exor_prog"));
        sizePolicy.setHeightForWidth(exor_prog->sizePolicy().hasHeightForWidth());
        exor_prog->setSizePolicy(sizePolicy);
        exor_prog->setFont(font3);

        gridLayout_17->addWidget(exor_prog, 0, 5, 1, 1);


        gridLayout_18->addLayout(gridLayout_17, 0, 0, 1, 3);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        openBracket_prog = new QPushButton(page_2);
        openBracket_prog->setObjectName(QString::fromUtf8("openBracket_prog"));
        sizePolicy.setHeightForWidth(openBracket_prog->sizePolicy().hasHeightForWidth());
        openBracket_prog->setSizePolicy(sizePolicy);
        openBracket_prog->setFont(font3);

        gridLayout_14->addWidget(openBracket_prog, 0, 0, 1, 1);

        calculate_prog = new QPushButton(page_2);
        calculate_prog->setObjectName(QString::fromUtf8("calculate_prog"));
        sizePolicy.setHeightForWidth(calculate_prog->sizePolicy().hasHeightForWidth());
        calculate_prog->setSizePolicy(sizePolicy);
        calculate_prog->setFont(font3);

        gridLayout_14->addWidget(calculate_prog, 0, 1, 2, 1);

        closeBracket_prog = new QPushButton(page_2);
        closeBracket_prog->setObjectName(QString::fromUtf8("closeBracket_prog"));
        sizePolicy.setHeightForWidth(closeBracket_prog->sizePolicy().hasHeightForWidth());
        closeBracket_prog->setSizePolicy(sizePolicy);
        closeBracket_prog->setFont(font3);

        gridLayout_14->addWidget(closeBracket_prog, 0, 2, 1, 1);

        left_shift_prog = new QPushButton(page_2);
        left_shift_prog->setObjectName(QString::fromUtf8("left_shift_prog"));
        sizePolicy.setHeightForWidth(left_shift_prog->sizePolicy().hasHeightForWidth());
        left_shift_prog->setSizePolicy(sizePolicy);
        left_shift_prog->setFont(font3);

        gridLayout_14->addWidget(left_shift_prog, 1, 0, 1, 1);

        right_shift_prog = new QPushButton(page_2);
        right_shift_prog->setObjectName(QString::fromUtf8("right_shift_prog"));
        sizePolicy.setHeightForWidth(right_shift_prog->sizePolicy().hasHeightForWidth());
        right_shift_prog->setSizePolicy(sizePolicy);
        right_shift_prog->setFont(font3);

        gridLayout_14->addWidget(right_shift_prog, 1, 2, 1, 1);

        seven_prog = new QPushButton(page_2);
        seven_prog->setObjectName(QString::fromUtf8("seven_prog"));
        sizePolicy.setHeightForWidth(seven_prog->sizePolicy().hasHeightForWidth());
        seven_prog->setSizePolicy(sizePolicy);
        seven_prog->setFont(font3);

        gridLayout_14->addWidget(seven_prog, 2, 0, 1, 1);

        eight_prog = new QPushButton(page_2);
        eight_prog->setObjectName(QString::fromUtf8("eight_prog"));
        sizePolicy.setHeightForWidth(eight_prog->sizePolicy().hasHeightForWidth());
        eight_prog->setSizePolicy(sizePolicy);
        eight_prog->setFont(font3);

        gridLayout_14->addWidget(eight_prog, 2, 1, 1, 1);

        nine_prog = new QPushButton(page_2);
        nine_prog->setObjectName(QString::fromUtf8("nine_prog"));
        sizePolicy.setHeightForWidth(nine_prog->sizePolicy().hasHeightForWidth());
        nine_prog->setSizePolicy(sizePolicy);
        nine_prog->setFont(font3);

        gridLayout_14->addWidget(nine_prog, 2, 2, 1, 1);

        four_prog = new QPushButton(page_2);
        four_prog->setObjectName(QString::fromUtf8("four_prog"));
        sizePolicy.setHeightForWidth(four_prog->sizePolicy().hasHeightForWidth());
        four_prog->setSizePolicy(sizePolicy);
        four_prog->setFont(font3);

        gridLayout_14->addWidget(four_prog, 3, 0, 1, 1);

        five_prog = new QPushButton(page_2);
        five_prog->setObjectName(QString::fromUtf8("five_prog"));
        sizePolicy.setHeightForWidth(five_prog->sizePolicy().hasHeightForWidth());
        five_prog->setSizePolicy(sizePolicy);
        five_prog->setFont(font3);

        gridLayout_14->addWidget(five_prog, 3, 1, 1, 1);

        six_prog = new QPushButton(page_2);
        six_prog->setObjectName(QString::fromUtf8("six_prog"));
        sizePolicy.setHeightForWidth(six_prog->sizePolicy().hasHeightForWidth());
        six_prog->setSizePolicy(sizePolicy);
        six_prog->setFont(font3);

        gridLayout_14->addWidget(six_prog, 3, 2, 1, 1);

        one_prog = new QPushButton(page_2);
        one_prog->setObjectName(QString::fromUtf8("one_prog"));
        sizePolicy.setHeightForWidth(one_prog->sizePolicy().hasHeightForWidth());
        one_prog->setSizePolicy(sizePolicy);
        one_prog->setFont(font3);
        one_prog->setStyleSheet(QString::fromUtf8(""));

        gridLayout_14->addWidget(one_prog, 4, 0, 1, 1);

        two_prog = new QPushButton(page_2);
        two_prog->setObjectName(QString::fromUtf8("two_prog"));
        sizePolicy.setHeightForWidth(two_prog->sizePolicy().hasHeightForWidth());
        two_prog->setSizePolicy(sizePolicy);
        two_prog->setFont(font3);

        gridLayout_14->addWidget(two_prog, 4, 1, 1, 1);

        three_prog = new QPushButton(page_2);
        three_prog->setObjectName(QString::fromUtf8("three_prog"));
        sizePolicy.setHeightForWidth(three_prog->sizePolicy().hasHeightForWidth());
        three_prog->setSizePolicy(sizePolicy);
        three_prog->setFont(font3);

        gridLayout_14->addWidget(three_prog, 4, 2, 1, 1);

        n_complement = new QPushButton(page_2);
        n_complement->setObjectName(QString::fromUtf8("n_complement"));
        sizePolicy.setHeightForWidth(n_complement->sizePolicy().hasHeightForWidth());
        n_complement->setSizePolicy(sizePolicy);
        n_complement->setFont(font3);

        gridLayout_14->addWidget(n_complement, 5, 0, 1, 1);

        zero_prog = new QPushButton(page_2);
        zero_prog->setObjectName(QString::fromUtf8("zero_prog"));
        sizePolicy.setHeightForWidth(zero_prog->sizePolicy().hasHeightForWidth());
        zero_prog->setSizePolicy(sizePolicy);
        zero_prog->setFont(font3);

        gridLayout_14->addWidget(zero_prog, 5, 1, 1, 1);

        n_complement_2 = new QPushButton(page_2);
        n_complement_2->setObjectName(QString::fromUtf8("n_complement_2"));
        sizePolicy.setHeightForWidth(n_complement_2->sizePolicy().hasHeightForWidth());
        n_complement_2->setSizePolicy(sizePolicy);
        n_complement_2->setFont(font3);

        gridLayout_14->addWidget(n_complement_2, 5, 2, 1, 1);


        gridLayout_18->addLayout(gridLayout_14, 2, 1, 1, 1);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        divide_prog = new QPushButton(page_2);
        divide_prog->setObjectName(QString::fromUtf8("divide_prog"));
        sizePolicy.setHeightForWidth(divide_prog->sizePolicy().hasHeightForWidth());
        divide_prog->setSizePolicy(sizePolicy);
        divide_prog->setFont(font3);

        gridLayout_15->addWidget(divide_prog, 5, 0, 1, 1);

        add_prog = new QPushButton(page_2);
        add_prog->setObjectName(QString::fromUtf8("add_prog"));
        sizePolicy.setHeightForWidth(add_prog->sizePolicy().hasHeightForWidth());
        add_prog->setSizePolicy(sizePolicy);
        add_prog->setFont(font3);

        gridLayout_15->addWidget(add_prog, 2, 0, 1, 1);

        clear_prog = new QPushButton(page_2);
        clear_prog->setObjectName(QString::fromUtf8("clear_prog"));
        sizePolicy.setHeightForWidth(clear_prog->sizePolicy().hasHeightForWidth());
        clear_prog->setSizePolicy(sizePolicy);
        clear_prog->setFont(font3);

        gridLayout_15->addWidget(clear_prog, 0, 0, 1, 1);

        minus_prog = new QPushButton(page_2);
        minus_prog->setObjectName(QString::fromUtf8("minus_prog"));
        sizePolicy.setHeightForWidth(minus_prog->sizePolicy().hasHeightForWidth());
        minus_prog->setSizePolicy(sizePolicy);
        minus_prog->setFont(font3);

        gridLayout_15->addWidget(minus_prog, 3, 0, 1, 1);

        back_prog = new QPushButton(page_2);
        back_prog->setObjectName(QString::fromUtf8("back_prog"));
        sizePolicy.setHeightForWidth(back_prog->sizePolicy().hasHeightForWidth());
        back_prog->setSizePolicy(sizePolicy);
        back_prog->setFont(font3);

        gridLayout_15->addWidget(back_prog, 1, 0, 1, 1);

        multiply_prog = new QPushButton(page_2);
        multiply_prog->setObjectName(QString::fromUtf8("multiply_prog"));
        sizePolicy.setHeightForWidth(multiply_prog->sizePolicy().hasHeightForWidth());
        multiply_prog->setSizePolicy(sizePolicy);
        multiply_prog->setFont(font3);

        gridLayout_15->addWidget(multiply_prog, 4, 0, 1, 1);


        gridLayout_18->addLayout(gridLayout_15, 1, 2, 2, 1);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        f_prog = new QPushButton(page_2);
        f_prog->setObjectName(QString::fromUtf8("f_prog"));
        sizePolicy.setHeightForWidth(f_prog->sizePolicy().hasHeightForWidth());
        f_prog->setSizePolicy(sizePolicy);
        f_prog->setFont(font3);
        f_prog->setStyleSheet(QString::fromUtf8(""));

        gridLayout_16->addWidget(f_prog, 5, 0, 1, 1);

        d_prog = new QPushButton(page_2);
        d_prog->setObjectName(QString::fromUtf8("d_prog"));
        sizePolicy.setHeightForWidth(d_prog->sizePolicy().hasHeightForWidth());
        d_prog->setSizePolicy(sizePolicy);
        d_prog->setFont(font3);

        gridLayout_16->addWidget(d_prog, 3, 0, 1, 1);

        a_prog = new QPushButton(page_2);
        a_prog->setObjectName(QString::fromUtf8("a_prog"));
        sizePolicy.setHeightForWidth(a_prog->sizePolicy().hasHeightForWidth());
        a_prog->setSizePolicy(sizePolicy);
        a_prog->setFont(font3);

        gridLayout_16->addWidget(a_prog, 0, 0, 1, 1);

        c_prog = new QPushButton(page_2);
        c_prog->setObjectName(QString::fromUtf8("c_prog"));
        sizePolicy.setHeightForWidth(c_prog->sizePolicy().hasHeightForWidth());
        c_prog->setSizePolicy(sizePolicy);
        c_prog->setFont(font3);
        c_prog->setStyleSheet(QString::fromUtf8(""));

        gridLayout_16->addWidget(c_prog, 2, 0, 1, 1);

        b_prog = new QPushButton(page_2);
        b_prog->setObjectName(QString::fromUtf8("b_prog"));
        sizePolicy.setHeightForWidth(b_prog->sizePolicy().hasHeightForWidth());
        b_prog->setSizePolicy(sizePolicy);
        b_prog->setFont(font3);

        gridLayout_16->addWidget(b_prog, 1, 0, 1, 1);

        e_prog = new QPushButton(page_2);
        e_prog->setObjectName(QString::fromUtf8("e_prog"));
        sizePolicy.setHeightForWidth(e_prog->sizePolicy().hasHeightForWidth());
        e_prog->setSizePolicy(sizePolicy);
        e_prog->setFont(font3);

        gridLayout_16->addWidget(e_prog, 4, 0, 1, 1);


        gridLayout_18->addLayout(gridLayout_16, 1, 0, 2, 1);


        gridLayout_20->addLayout(gridLayout_18, 2, 0, 1, 1);

        gridLayout_19 = new QGridLayout();
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        hexEdit = new QLineEdit(page_2);
        hexEdit->setObjectName(QString::fromUtf8("hexEdit"));
        hexEdit->setFont(font3);

        gridLayout_19->addWidget(hexEdit, 0, 2, 1, 1);

        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font3);

        gridLayout_19->addWidget(label_4, 3, 0, 1, 1);

        octEdit = new QLineEdit(page_2);
        octEdit->setObjectName(QString::fromUtf8("octEdit"));
        octEdit->setFont(font3);

        gridLayout_19->addWidget(octEdit, 2, 2, 1, 1);

        binEdit = new QLineEdit(page_2);
        binEdit->setObjectName(QString::fromUtf8("binEdit"));
        binEdit->setFont(font3);

        gridLayout_19->addWidget(binEdit, 3, 2, 1, 1);

        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font3);

        gridLayout_19->addWidget(label_3, 2, 0, 1, 1);

        decEdit = new QLineEdit(page_2);
        decEdit->setObjectName(QString::fromUtf8("decEdit"));
        decEdit->setFont(font3);

        gridLayout_19->addWidget(decEdit, 1, 2, 1, 1);

        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font3);

        gridLayout_19->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font3);

        gridLayout_19->addWidget(label_2, 1, 0, 1, 1);

        hexRadioButton = new QRadioButton(page_2);
        hexRadioButton->setObjectName(QString::fromUtf8("hexRadioButton"));

        gridLayout_19->addWidget(hexRadioButton, 0, 1, 1, 1);

        decRadioButton = new QRadioButton(page_2);
        decRadioButton->setObjectName(QString::fromUtf8("decRadioButton"));

        gridLayout_19->addWidget(decRadioButton, 1, 1, 1, 1);

        octRadioButton = new QRadioButton(page_2);
        octRadioButton->setObjectName(QString::fromUtf8("octRadioButton"));

        gridLayout_19->addWidget(octRadioButton, 2, 1, 1, 1);

        binRadioButton = new QRadioButton(page_2);
        binRadioButton->setObjectName(QString::fromUtf8("binRadioButton"));

        gridLayout_19->addWidget(binRadioButton, 3, 1, 1, 1);


        gridLayout_20->addLayout(gridLayout_19, 1, 0, 1, 1);

        output_prog = new QLineEdit(page_2);
        output_prog->setObjectName(QString::fromUtf8("output_prog"));
        output_prog->setFont(font3);

        gridLayout_20->addWidget(output_prog, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout_7->addWidget(stackedWidget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Calculator", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "Arithmetic Calculator", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "Programming Calculator", nullptr));

        history->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Courier'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'OCR A Extended';\"><br /></p></body></html>", nullptr));
        history->setPlaceholderText(QApplication::translate("MainWindow", "HISTORY", nullptr));
        advancedMode->setText(QApplication::translate("MainWindow", "Advanced Mode", nullptr));
        openBracket->setText(QApplication::translate("MainWindow", "(", nullptr));
        clear->setText(QApplication::translate("MainWindow", "AC", nullptr));
        sin->setText(QApplication::translate("MainWindow", "sin", nullptr));
        power->setText(QApplication::translate("MainWindow", "x\342\201\277", nullptr));
        cos->setText(QApplication::translate("MainWindow", "cos", nullptr));
        reciprocal->setText(QApplication::translate("MainWindow", "1/x", nullptr));
        tan->setText(QApplication::translate("MainWindow", "tan", nullptr));
        square->setText(QApplication::translate("MainWindow", "x\302\262", nullptr));
        log->setText(QApplication::translate("MainWindow", "log", nullptr));
        root->setText(QApplication::translate("MainWindow", "\342\210\232x", nullptr));
        factorial->setText(QApplication::translate("MainWindow", "x!", nullptr));
        eConstant->setText(QApplication::translate("MainWindow", "e", nullptr));
        six->setText(QApplication::translate("MainWindow", "6", nullptr));
        eight->setText(QApplication::translate("MainWindow", "8", nullptr));
        zero->setText(QApplication::translate("MainWindow", "0", nullptr));
        three->setText(QApplication::translate("MainWindow", "3", nullptr));
        five->setText(QApplication::translate("MainWindow", "5", nullptr));
        one->setText(QApplication::translate("MainWindow", "1", nullptr));
        degrees->setText(QApplication::translate("MainWindow", "Deg", nullptr));
        seven->setText(QApplication::translate("MainWindow", "7", nullptr));
        nine->setText(QApplication::translate("MainWindow", "9", nullptr));
        dot->setText(QApplication::translate("MainWindow", ".", nullptr));
        four->setText(QApplication::translate("MainWindow", "4", nullptr));
        calculate->setText(QApplication::translate("MainWindow", "=", nullptr));
        two->setText(QApplication::translate("MainWindow", "2", nullptr));
        piConstant->setText(QApplication::translate("MainWindow", "\317\200", nullptr));
        radians->setText(QApplication::translate("MainWindow", "Radians", nullptr));
        add->setText(QApplication::translate("MainWindow", "+", nullptr));
        asin->setText(QApplication::translate("MainWindow", "asin", nullptr));
        minus->setText(QApplication::translate("MainWindow", "-", nullptr));
        acos->setText(QApplication::translate("MainWindow", "acos", nullptr));
        multiply->setText(QApplication::translate("MainWindow", "*", nullptr));
        atan->setText(QApplication::translate("MainWindow", "atan", nullptr));
        divide->setText(QApplication::translate("MainWindow", "/", nullptr));
        ln->setText(QApplication::translate("MainWindow", "ln", nullptr));
        percentage->setText(QApplication::translate("MainWindow", "%", nullptr));
        mod->setText(QApplication::translate("MainWindow", "mod", nullptr));
        back->setText(QApplication::translate("MainWindow", "\342\206\220", nullptr));
        closeBracket->setText(QApplication::translate("MainWindow", ")", nullptr));
        and_prog->setText(QApplication::translate("MainWindow", "AND", nullptr));
        or_prog->setText(QApplication::translate("MainWindow", "OR", nullptr));
        not_prog->setText(QApplication::translate("MainWindow", "NOT", nullptr));
        nand_prog->setText(QApplication::translate("MainWindow", "NAND", nullptr));
        nor_prog->setText(QApplication::translate("MainWindow", "NOR", nullptr));
        exor_prog->setText(QApplication::translate("MainWindow", "EXOR", nullptr));
        openBracket_prog->setText(QApplication::translate("MainWindow", "(", nullptr));
        calculate_prog->setText(QApplication::translate("MainWindow", "=", nullptr));
        closeBracket_prog->setText(QApplication::translate("MainWindow", ")", nullptr));
        left_shift_prog->setText(QApplication::translate("MainWindow", "<<", nullptr));
        right_shift_prog->setText(QApplication::translate("MainWindow", ">>", nullptr));
        seven_prog->setText(QApplication::translate("MainWindow", "7", nullptr));
        eight_prog->setText(QApplication::translate("MainWindow", "8", nullptr));
        nine_prog->setText(QApplication::translate("MainWindow", "9", nullptr));
        four_prog->setText(QApplication::translate("MainWindow", "4", nullptr));
        five_prog->setText(QApplication::translate("MainWindow", "5", nullptr));
        six_prog->setText(QApplication::translate("MainWindow", "6", nullptr));
        one_prog->setText(QApplication::translate("MainWindow", "1", nullptr));
        two_prog->setText(QApplication::translate("MainWindow", "2", nullptr));
        three_prog->setText(QApplication::translate("MainWindow", "3", nullptr));
        n_complement->setText(QApplication::translate("MainWindow", "N's com", nullptr));
        zero_prog->setText(QApplication::translate("MainWindow", "0", nullptr));
        n_complement_2->setText(QApplication::translate("MainWindow", "N-1'S C", nullptr));
        divide_prog->setText(QApplication::translate("MainWindow", "/", nullptr));
        add_prog->setText(QApplication::translate("MainWindow", "+", nullptr));
        clear_prog->setText(QApplication::translate("MainWindow", "AC", nullptr));
        minus_prog->setText(QApplication::translate("MainWindow", "-", nullptr));
        back_prog->setText(QApplication::translate("MainWindow", "\342\206\220", nullptr));
        multiply_prog->setText(QApplication::translate("MainWindow", "*", nullptr));
        f_prog->setText(QApplication::translate("MainWindow", "F", nullptr));
        d_prog->setText(QApplication::translate("MainWindow", "D", nullptr));
        a_prog->setText(QApplication::translate("MainWindow", "A", nullptr));
        c_prog->setText(QApplication::translate("MainWindow", "C", nullptr));
        b_prog->setText(QApplication::translate("MainWindow", "B", nullptr));
        e_prog->setText(QApplication::translate("MainWindow", "E", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "BIN", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "OCT", nullptr));
        label->setText(QApplication::translate("MainWindow", "HEX", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "DEC", nullptr));
        hexRadioButton->setText(QString());
        decRadioButton->setText(QString());
        octRadioButton->setText(QString());
        binRadioButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
