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
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_10;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_3;
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
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QRadioButton *degrees;
    QRadioButton *radians;
    QGridLayout *gridLayout;
    QPushButton *seven;
    QPushButton *eight;
    QPushButton *nine;
    QPushButton *four;
    QPushButton *five;
    QPushButton *six;
    QPushButton *one;
    QPushButton *two;
    QPushButton *three;
    QPushButton *piConstant;
    QPushButton *zero;
    QPushButton *dot;
    QPushButton *calculate;
    QGridLayout *gridLayout_2;
    QPushButton *back;
    QPushButton *closeBracket;
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
    QPushButton *advancedMode;
    QLineEdit *output;
    QTextEdit *history;
    QSlider *horizontalSlider;
    QWidget *page_2;
    QGridLayout *gridLayout_9;
    QPushButton *openBracket_prog;
    QGridLayout *gridLayout_8;
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
    QPushButton *left_shift_prog;
    QGridLayout *gridLayout_17;
    QPushButton *and_prog;
    QPushButton *or_prog;
    QPushButton *not_prog;
    QPushButton *nand_prog;
    QPushButton *nor_prog;
    QPushButton *exor_prog;
    QGridLayout *gridLayout_15;
    QPushButton *divide_prog;
    QPushButton *add_prog;
    QPushButton *clear_prog;
    QPushButton *minus_prog;
    QPushButton *back_prog;
    QPushButton *multiply_prog;
    QGridLayout *gridLayout_16;
    QPushButton *d_prog;
    QPushButton *e_prog;
    QPushButton *b_prog;
    QPushButton *f_prog;
    QPushButton *a_prog;
    QPushButton *c_prog;
    QPushButton *right_shift_prog;
    QPushButton *closeBracket_prog;
    QPushButton *calculate_prog;
    QLineEdit *output_prog;
    QGridLayout *gridLayout_19;
    QLineEdit *hexEdit;
    QLabel *label_2;
    QLineEdit *octEdit;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *decEdit;
    QLineEdit *binEdit;
    QLabel *label_3;
    QSlider *horizontalSlider_2;
    QComboBox *comboBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(460, 567);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Gill Sans MT Condensed"));
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8(".QMainWindow\n"
"{\n"
"background-color : #6f6f6f;\n"
"border-radius : 10px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_11 = new QGridLayout(centralwidget);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("#page {\n"
" background-color:#6f6f6f;  \n"
"border-radius: 15px;\n"
"}\n"
"#page_2 {\n"
" background-color:#6f6f6f;  \n"
"border-radius: 15px;\n"
"}"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_7 = new QGridLayout(page);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        openBracket = new QPushButton(page);
        openBracket->setObjectName(QString::fromUtf8("openBracket"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(openBracket->sizePolicy().hasHeightForWidth());
        openBracket->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Gill Sans MT Condensed"));
        font1.setPointSize(22);
        openBracket->setFont(font1);
        openBracket->setStyleSheet(QString::fromUtf8("QPushButton#openBracket\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#openBracket:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_3->addWidget(openBracket, 0, 0, 1, 1);

        clear = new QPushButton(page);
        clear->setObjectName(QString::fromUtf8("clear"));
        sizePolicy1.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy1);
        clear->setFont(font1);
        clear->setStyleSheet(QString::fromUtf8("QPushButton#clear\n"
"{  \n"
"color:white;  \n"
"background-color:#ff4561;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius:10px;\n"
"}  \n"
"\n"
"QPushButton#clear:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_3->addWidget(clear, 0, 1, 1, 1);

        sin = new QPushButton(page);
        sin->setObjectName(QString::fromUtf8("sin"));
        sizePolicy1.setHeightForWidth(sin->sizePolicy().hasHeightForWidth());
        sin->setSizePolicy(sizePolicy1);
        sin->setFont(font1);
        sin->setStyleSheet(QString::fromUtf8("QPushButton#sin\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#sin:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_3->addWidget(sin, 1, 0, 1, 1);

        power = new QPushButton(page);
        power->setObjectName(QString::fromUtf8("power"));
        sizePolicy1.setHeightForWidth(power->sizePolicy().hasHeightForWidth());
        power->setSizePolicy(sizePolicy1);
        power->setFont(font1);
        power->setStyleSheet(QString::fromUtf8("QPushButton#power\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#power:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_3->addWidget(power, 1, 1, 1, 1);

        cos = new QPushButton(page);
        cos->setObjectName(QString::fromUtf8("cos"));
        sizePolicy1.setHeightForWidth(cos->sizePolicy().hasHeightForWidth());
        cos->setSizePolicy(sizePolicy1);
        cos->setFont(font1);
        cos->setStyleSheet(QString::fromUtf8("QPushButton#cos\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#cos:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_3->addWidget(cos, 2, 0, 1, 1);

        reciprocal = new QPushButton(page);
        reciprocal->setObjectName(QString::fromUtf8("reciprocal"));
        sizePolicy1.setHeightForWidth(reciprocal->sizePolicy().hasHeightForWidth());
        reciprocal->setSizePolicy(sizePolicy1);
        reciprocal->setFont(font1);
        reciprocal->setStyleSheet(QString::fromUtf8("QPushButton#reciprocal\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#reciprocal:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_3->addWidget(reciprocal, 2, 1, 1, 1);

        tan = new QPushButton(page);
        tan->setObjectName(QString::fromUtf8("tan"));
        sizePolicy1.setHeightForWidth(tan->sizePolicy().hasHeightForWidth());
        tan->setSizePolicy(sizePolicy1);
        tan->setFont(font1);
        tan->setStyleSheet(QString::fromUtf8("QPushButton#tan\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#tan:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_3->addWidget(tan, 3, 0, 1, 1);

        square = new QPushButton(page);
        square->setObjectName(QString::fromUtf8("square"));
        sizePolicy1.setHeightForWidth(square->sizePolicy().hasHeightForWidth());
        square->setSizePolicy(sizePolicy1);
        square->setFont(font1);
        square->setStyleSheet(QString::fromUtf8("QPushButton#square\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#square:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_3->addWidget(square, 3, 1, 1, 1);

        log = new QPushButton(page);
        log->setObjectName(QString::fromUtf8("log"));
        sizePolicy1.setHeightForWidth(log->sizePolicy().hasHeightForWidth());
        log->setSizePolicy(sizePolicy1);
        log->setFont(font1);
        log->setStyleSheet(QString::fromUtf8("QPushButton#log\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#log:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_3->addWidget(log, 4, 0, 1, 1);

        root = new QPushButton(page);
        root->setObjectName(QString::fromUtf8("root"));
        sizePolicy1.setHeightForWidth(root->sizePolicy().hasHeightForWidth());
        root->setSizePolicy(sizePolicy1);
        root->setFont(font1);
        root->setStyleSheet(QString::fromUtf8("QPushButton#root\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#root:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_3->addWidget(root, 4, 1, 1, 1);

        factorial = new QPushButton(page);
        factorial->setObjectName(QString::fromUtf8("factorial"));
        sizePolicy1.setHeightForWidth(factorial->sizePolicy().hasHeightForWidth());
        factorial->setSizePolicy(sizePolicy1);
        factorial->setFont(font1);
        factorial->setStyleSheet(QString::fromUtf8("QPushButton#factorial\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#factorial:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_3->addWidget(factorial, 5, 0, 1, 1);

        eConstant = new QPushButton(page);
        eConstant->setObjectName(QString::fromUtf8("eConstant"));
        sizePolicy1.setHeightForWidth(eConstant->sizePolicy().hasHeightForWidth());
        eConstant->setSizePolicy(sizePolicy1);
        eConstant->setFont(font1);
        eConstant->setStyleSheet(QString::fromUtf8("QPushButton#eConstant\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#eConstant:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_3->addWidget(eConstant, 5, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        degrees = new QRadioButton(page);
        degrees->setObjectName(QString::fromUtf8("degrees"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Gill Sans MT Condensed"));
        font2.setPointSize(16);
        degrees->setFont(font2);
        degrees->setChecked(true);

        gridLayout_4->addWidget(degrees, 0, 0, 1, 1);

        radians = new QRadioButton(page);
        radians->setObjectName(QString::fromUtf8("radians"));
        radians->setFont(font2);

        gridLayout_4->addWidget(radians, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        seven = new QPushButton(page);
        seven->setObjectName(QString::fromUtf8("seven"));
        sizePolicy1.setHeightForWidth(seven->sizePolicy().hasHeightForWidth());
        seven->setSizePolicy(sizePolicy1);
        seven->setFont(font1);
        seven->setStyleSheet(QString::fromUtf8("QPushButton#seven\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#seven:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout->addWidget(seven, 1, 0, 1, 1);

        eight = new QPushButton(page);
        eight->setObjectName(QString::fromUtf8("eight"));
        sizePolicy1.setHeightForWidth(eight->sizePolicy().hasHeightForWidth());
        eight->setSizePolicy(sizePolicy1);
        eight->setFont(font1);
        eight->setStyleSheet(QString::fromUtf8("QPushButton#eight\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#eight:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout->addWidget(eight, 1, 1, 1, 1);

        nine = new QPushButton(page);
        nine->setObjectName(QString::fromUtf8("nine"));
        nine->setEnabled(true);
        sizePolicy1.setHeightForWidth(nine->sizePolicy().hasHeightForWidth());
        nine->setSizePolicy(sizePolicy1);
        nine->setFont(font1);
        nine->setStyleSheet(QString::fromUtf8("QPushButton#nine\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#nine:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout->addWidget(nine, 1, 2, 1, 1);

        four = new QPushButton(page);
        four->setObjectName(QString::fromUtf8("four"));
        sizePolicy1.setHeightForWidth(four->sizePolicy().hasHeightForWidth());
        four->setSizePolicy(sizePolicy1);
        four->setFont(font1);
        four->setStyleSheet(QString::fromUtf8("QPushButton#four\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#four:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout->addWidget(four, 2, 0, 1, 1);

        five = new QPushButton(page);
        five->setObjectName(QString::fromUtf8("five"));
        sizePolicy1.setHeightForWidth(five->sizePolicy().hasHeightForWidth());
        five->setSizePolicy(sizePolicy1);
        five->setFont(font1);
        five->setStyleSheet(QString::fromUtf8("QPushButton#five\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#five:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout->addWidget(five, 2, 1, 1, 1);

        six = new QPushButton(page);
        six->setObjectName(QString::fromUtf8("six"));
        sizePolicy1.setHeightForWidth(six->sizePolicy().hasHeightForWidth());
        six->setSizePolicy(sizePolicy1);
        six->setFont(font1);
        six->setStyleSheet(QString::fromUtf8("QPushButton#six\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#six:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout->addWidget(six, 2, 2, 1, 1);

        one = new QPushButton(page);
        one->setObjectName(QString::fromUtf8("one"));
        sizePolicy1.setHeightForWidth(one->sizePolicy().hasHeightForWidth());
        one->setSizePolicy(sizePolicy1);
        one->setFont(font1);
        one->setStyleSheet(QString::fromUtf8("QPushButton#one\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#one:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout->addWidget(one, 3, 0, 1, 1);

        two = new QPushButton(page);
        two->setObjectName(QString::fromUtf8("two"));
        sizePolicy1.setHeightForWidth(two->sizePolicy().hasHeightForWidth());
        two->setSizePolicy(sizePolicy1);
        two->setFont(font1);
        two->setStyleSheet(QString::fromUtf8("QPushButton#two\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#two:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout->addWidget(two, 3, 1, 1, 1);

        three = new QPushButton(page);
        three->setObjectName(QString::fromUtf8("three"));
        sizePolicy1.setHeightForWidth(three->sizePolicy().hasHeightForWidth());
        three->setSizePolicy(sizePolicy1);
        three->setFont(font1);
        three->setStyleSheet(QString::fromUtf8("QPushButton#three\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#three:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout->addWidget(three, 3, 2, 1, 1);

        piConstant = new QPushButton(page);
        piConstant->setObjectName(QString::fromUtf8("piConstant"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(piConstant->sizePolicy().hasHeightForWidth());
        piConstant->setSizePolicy(sizePolicy2);
        piConstant->setFont(font1);
        piConstant->setStyleSheet(QString::fromUtf8("QPushButton#piConstant\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#piConstant:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout->addWidget(piConstant, 4, 0, 1, 1);

        zero = new QPushButton(page);
        zero->setObjectName(QString::fromUtf8("zero"));
        sizePolicy1.setHeightForWidth(zero->sizePolicy().hasHeightForWidth());
        zero->setSizePolicy(sizePolicy1);
        zero->setFont(font1);
        zero->setStyleSheet(QString::fromUtf8("QPushButton#zero\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#zero:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout->addWidget(zero, 4, 1, 1, 1);

        dot = new QPushButton(page);
        dot->setObjectName(QString::fromUtf8("dot"));
        sizePolicy1.setHeightForWidth(dot->sizePolicy().hasHeightForWidth());
        dot->setSizePolicy(sizePolicy1);
        dot->setFont(font1);
        dot->setStyleSheet(QString::fromUtf8("QPushButton#dot\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#dot:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout->addWidget(dot, 4, 2, 1, 1);

        calculate = new QPushButton(page);
        calculate->setObjectName(QString::fromUtf8("calculate"));
        sizePolicy1.setHeightForWidth(calculate->sizePolicy().hasHeightForWidth());
        calculate->setSizePolicy(sizePolicy1);
        calculate->setFont(font1);
        calculate->setStyleSheet(QString::fromUtf8("QPushButton#calculate\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#calculate:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout->addWidget(calculate, 0, 0, 1, 3);


        gridLayout_5->addLayout(gridLayout, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        back = new QPushButton(page);
        back->setObjectName(QString::fromUtf8("back"));
        sizePolicy1.setHeightForWidth(back->sizePolicy().hasHeightForWidth());
        back->setSizePolicy(sizePolicy1);
        back->setFont(font1);
        back->setStyleSheet(QString::fromUtf8("QPushButton#back\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#back:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_2->addWidget(back, 0, 0, 1, 1);

        closeBracket = new QPushButton(page);
        closeBracket->setObjectName(QString::fromUtf8("closeBracket"));
        sizePolicy1.setHeightForWidth(closeBracket->sizePolicy().hasHeightForWidth());
        closeBracket->setSizePolicy(sizePolicy1);
        closeBracket->setFont(font1);
        closeBracket->setStyleSheet(QString::fromUtf8("QPushButton#closeBracket\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#closeBracket:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_2->addWidget(closeBracket, 0, 1, 1, 1);

        add = new QPushButton(page);
        add->setObjectName(QString::fromUtf8("add"));
        sizePolicy1.setHeightForWidth(add->sizePolicy().hasHeightForWidth());
        add->setSizePolicy(sizePolicy1);
        add->setFont(font1);
        add->setStyleSheet(QString::fromUtf8("QPushButton#add\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"}  \n"
"\n"
"QPushButton#add:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"}  "));

        gridLayout_2->addWidget(add, 1, 0, 1, 1);

        asin = new QPushButton(page);
        asin->setObjectName(QString::fromUtf8("asin"));
        sizePolicy1.setHeightForWidth(asin->sizePolicy().hasHeightForWidth());
        asin->setSizePolicy(sizePolicy1);
        asin->setFont(font1);
        asin->setStyleSheet(QString::fromUtf8("QPushButton#asin\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#asin:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_2->addWidget(asin, 1, 1, 1, 1);

        minus = new QPushButton(page);
        minus->setObjectName(QString::fromUtf8("minus"));
        sizePolicy1.setHeightForWidth(minus->sizePolicy().hasHeightForWidth());
        minus->setSizePolicy(sizePolicy1);
        minus->setFont(font1);
        minus->setStyleSheet(QString::fromUtf8("QPushButton#minus\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"}  \n"
"\n"
"QPushButton#minus:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"}  "));

        gridLayout_2->addWidget(minus, 2, 0, 1, 1);

        acos = new QPushButton(page);
        acos->setObjectName(QString::fromUtf8("acos"));
        sizePolicy1.setHeightForWidth(acos->sizePolicy().hasHeightForWidth());
        acos->setSizePolicy(sizePolicy1);
        acos->setFont(font1);
        acos->setStyleSheet(QString::fromUtf8("QPushButton#acos\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#acos:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_2->addWidget(acos, 2, 1, 1, 1);

        multiply = new QPushButton(page);
        multiply->setObjectName(QString::fromUtf8("multiply"));
        sizePolicy1.setHeightForWidth(multiply->sizePolicy().hasHeightForWidth());
        multiply->setSizePolicy(sizePolicy1);
        multiply->setFont(font1);
        multiply->setStyleSheet(QString::fromUtf8("QPushButton#multiply\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#multiply:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"}  "));

        gridLayout_2->addWidget(multiply, 3, 0, 1, 1);

        atan = new QPushButton(page);
        atan->setObjectName(QString::fromUtf8("atan"));
        sizePolicy1.setHeightForWidth(atan->sizePolicy().hasHeightForWidth());
        atan->setSizePolicy(sizePolicy1);
        atan->setFont(font1);
        atan->setStyleSheet(QString::fromUtf8("QPushButton#atan\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#atan:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_2->addWidget(atan, 3, 1, 1, 1);

        divide = new QPushButton(page);
        divide->setObjectName(QString::fromUtf8("divide"));
        sizePolicy1.setHeightForWidth(divide->sizePolicy().hasHeightForWidth());
        divide->setSizePolicy(sizePolicy1);
        divide->setFont(font1);
        divide->setStyleSheet(QString::fromUtf8("QPushButton#divide\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#divide:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_2->addWidget(divide, 4, 0, 1, 1);

        ln = new QPushButton(page);
        ln->setObjectName(QString::fromUtf8("ln"));
        sizePolicy1.setHeightForWidth(ln->sizePolicy().hasHeightForWidth());
        ln->setSizePolicy(sizePolicy1);
        ln->setFont(font1);
        ln->setStyleSheet(QString::fromUtf8("QPushButton#ln\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#ln:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_2->addWidget(ln, 4, 1, 1, 1);

        percentage = new QPushButton(page);
        percentage->setObjectName(QString::fromUtf8("percentage"));
        sizePolicy1.setHeightForWidth(percentage->sizePolicy().hasHeightForWidth());
        percentage->setSizePolicy(sizePolicy1);
        percentage->setFont(font1);
        percentage->setStyleSheet(QString::fromUtf8("QPushButton#percentage\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#percentage:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_2->addWidget(percentage, 5, 0, 1, 1);

        mod = new QPushButton(page);
        mod->setObjectName(QString::fromUtf8("mod"));
        sizePolicy1.setHeightForWidth(mod->sizePolicy().hasHeightForWidth());
        mod->setSizePolicy(sizePolicy1);
        mod->setFont(font1);
        mod->setStyleSheet(QString::fromUtf8("QPushButton#mod\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#mod:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_2->addWidget(mod, 5, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 0, 2, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 5, 0, 1, 1);

        advancedMode = new QPushButton(page);
        advancedMode->setObjectName(QString::fromUtf8("advancedMode"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(advancedMode->sizePolicy().hasHeightForWidth());
        advancedMode->setSizePolicy(sizePolicy3);
        advancedMode->setFont(font1);
        advancedMode->setStyleSheet(QString::fromUtf8("QPushButton#advancedMode{\n"
"color:black;\n"
"background-color:#d1d4d4;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton#advancedMode:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_7->addWidget(advancedMode, 2, 0, 1, 1);

        output = new QLineEdit(page);
        output->setObjectName(QString::fromUtf8("output"));
        sizePolicy3.setHeightForWidth(output->sizePolicy().hasHeightForWidth());
        output->setSizePolicy(sizePolicy3);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Gill Sans MT Condensed"));
        font3.setPointSize(22);
        font3.setBold(true);
        font3.setWeight(75);
        output->setFont(font3);
        output->setStyleSheet(QString::fromUtf8("QLineEdit#output\n"
"{\n"
"	color:black;  \n"
"	background-color:#ffffff;  \n"
"    border-radius:5px;\n"
"}"));

        gridLayout_7->addWidget(output, 4, 0, 1, 1);

        history = new QTextEdit(page);
        history->setObjectName(QString::fromUtf8("history"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Courier"));
        font4.setPointSize(12);
        font4.setStrikeOut(false);
        history->setFont(font4);
        history->setStyleSheet(QString::fromUtf8("QTextEdit#history{\n"
"color:black;\n"
"background-color: #d5ffff;\n"
"background-image: linear-gradient(white, c0f5f5);\n"
"border-radius:5px;\n"
"}"));
        history->setFrameShape(QFrame::StyledPanel);
        history->setFrameShadow(QFrame::Sunken);
        history->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        history->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        history->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        history->setReadOnly(true);
        history->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout_7->addWidget(history, 3, 0, 1, 1);

        horizontalSlider = new QSlider(page);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setEnabled(true);
        horizontalSlider->setMouseTracking(true);
        horizontalSlider->setMinimum(15);
        horizontalSlider->setValue(99);
        horizontalSlider->setSliderPosition(99);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(true);

        gridLayout_7->addWidget(horizontalSlider, 6, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_9 = new QGridLayout(page_2);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        openBracket_prog = new QPushButton(page_2);
        openBracket_prog->setObjectName(QString::fromUtf8("openBracket_prog"));
        sizePolicy1.setHeightForWidth(openBracket_prog->sizePolicy().hasHeightForWidth());
        openBracket_prog->setSizePolicy(sizePolicy1);
        openBracket_prog->setFont(font1);
        openBracket_prog->setFocusPolicy(Qt::NoFocus);
        openBracket_prog->setStyleSheet(QString::fromUtf8("QPushButton#openBracket_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#openBracket_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_9->addWidget(openBracket_prog, 4, 1, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        seven_prog = new QPushButton(page_2);
        seven_prog->setObjectName(QString::fromUtf8("seven_prog"));
        sizePolicy1.setHeightForWidth(seven_prog->sizePolicy().hasHeightForWidth());
        seven_prog->setSizePolicy(sizePolicy1);
        seven_prog->setFont(font1);
        seven_prog->setFocusPolicy(Qt::NoFocus);
        seven_prog->setStyleSheet(QString::fromUtf8("QPushButton#seven_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#seven_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_8->addWidget(seven_prog, 0, 0, 1, 1);

        eight_prog = new QPushButton(page_2);
        eight_prog->setObjectName(QString::fromUtf8("eight_prog"));
        sizePolicy1.setHeightForWidth(eight_prog->sizePolicy().hasHeightForWidth());
        eight_prog->setSizePolicy(sizePolicy1);
        eight_prog->setFont(font1);
        eight_prog->setFocusPolicy(Qt::NoFocus);
        eight_prog->setStyleSheet(QString::fromUtf8("QPushButton#eight_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#eight_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_8->addWidget(eight_prog, 0, 1, 1, 1);

        nine_prog = new QPushButton(page_2);
        nine_prog->setObjectName(QString::fromUtf8("nine_prog"));
        sizePolicy1.setHeightForWidth(nine_prog->sizePolicy().hasHeightForWidth());
        nine_prog->setSizePolicy(sizePolicy1);
        nine_prog->setFont(font1);
        nine_prog->setFocusPolicy(Qt::NoFocus);
        nine_prog->setStyleSheet(QString::fromUtf8("QPushButton#nine_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#nine_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_8->addWidget(nine_prog, 0, 2, 1, 1);

        four_prog = new QPushButton(page_2);
        four_prog->setObjectName(QString::fromUtf8("four_prog"));
        sizePolicy1.setHeightForWidth(four_prog->sizePolicy().hasHeightForWidth());
        four_prog->setSizePolicy(sizePolicy1);
        four_prog->setFont(font1);
        four_prog->setFocusPolicy(Qt::NoFocus);
        four_prog->setStyleSheet(QString::fromUtf8("QPushButton#four_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#four_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_8->addWidget(four_prog, 1, 0, 1, 1);

        five_prog = new QPushButton(page_2);
        five_prog->setObjectName(QString::fromUtf8("five_prog"));
        sizePolicy1.setHeightForWidth(five_prog->sizePolicy().hasHeightForWidth());
        five_prog->setSizePolicy(sizePolicy1);
        five_prog->setFont(font1);
        five_prog->setFocusPolicy(Qt::NoFocus);
        five_prog->setStyleSheet(QString::fromUtf8("QPushButton#five_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#five_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_8->addWidget(five_prog, 1, 1, 1, 1);

        six_prog = new QPushButton(page_2);
        six_prog->setObjectName(QString::fromUtf8("six_prog"));
        sizePolicy1.setHeightForWidth(six_prog->sizePolicy().hasHeightForWidth());
        six_prog->setSizePolicy(sizePolicy1);
        six_prog->setFont(font1);
        six_prog->setFocusPolicy(Qt::NoFocus);
        six_prog->setStyleSheet(QString::fromUtf8("QPushButton#six_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#six_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_8->addWidget(six_prog, 1, 2, 1, 1);

        one_prog = new QPushButton(page_2);
        one_prog->setObjectName(QString::fromUtf8("one_prog"));
        sizePolicy1.setHeightForWidth(one_prog->sizePolicy().hasHeightForWidth());
        one_prog->setSizePolicy(sizePolicy1);
        one_prog->setFont(font1);
        one_prog->setFocusPolicy(Qt::NoFocus);
        one_prog->setStyleSheet(QString::fromUtf8("QPushButton#one_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#one_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_8->addWidget(one_prog, 2, 0, 1, 1);

        two_prog = new QPushButton(page_2);
        two_prog->setObjectName(QString::fromUtf8("two_prog"));
        sizePolicy1.setHeightForWidth(two_prog->sizePolicy().hasHeightForWidth());
        two_prog->setSizePolicy(sizePolicy1);
        two_prog->setFont(font1);
        two_prog->setFocusPolicy(Qt::NoFocus);
        two_prog->setStyleSheet(QString::fromUtf8("QPushButton#two_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#two_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_8->addWidget(two_prog, 2, 1, 1, 1);

        three_prog = new QPushButton(page_2);
        three_prog->setObjectName(QString::fromUtf8("three_prog"));
        sizePolicy1.setHeightForWidth(three_prog->sizePolicy().hasHeightForWidth());
        three_prog->setSizePolicy(sizePolicy1);
        three_prog->setFont(font1);
        three_prog->setFocusPolicy(Qt::NoFocus);
        three_prog->setStyleSheet(QString::fromUtf8("QPushButton#three_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#three_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_8->addWidget(three_prog, 2, 2, 1, 1);

        n_complement = new QPushButton(page_2);
        n_complement->setObjectName(QString::fromUtf8("n_complement"));
        sizePolicy1.setHeightForWidth(n_complement->sizePolicy().hasHeightForWidth());
        n_complement->setSizePolicy(sizePolicy1);
        n_complement->setFont(font1);
        n_complement->setFocusPolicy(Qt::NoFocus);
        n_complement->setStyleSheet(QString::fromUtf8("QPushButton#n_complement\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#n_complement:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_8->addWidget(n_complement, 3, 0, 1, 1);

        zero_prog = new QPushButton(page_2);
        zero_prog->setObjectName(QString::fromUtf8("zero_prog"));
        sizePolicy1.setHeightForWidth(zero_prog->sizePolicy().hasHeightForWidth());
        zero_prog->setSizePolicy(sizePolicy1);
        zero_prog->setFont(font1);
        zero_prog->setFocusPolicy(Qt::NoFocus);
        zero_prog->setStyleSheet(QString::fromUtf8("QPushButton#zero_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#zero_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_8->addWidget(zero_prog, 3, 1, 1, 1);

        n_complement_2 = new QPushButton(page_2);
        n_complement_2->setObjectName(QString::fromUtf8("n_complement_2"));
        sizePolicy1.setHeightForWidth(n_complement_2->sizePolicy().hasHeightForWidth());
        n_complement_2->setSizePolicy(sizePolicy1);
        n_complement_2->setFont(font1);
        n_complement_2->setFocusPolicy(Qt::NoFocus);
        n_complement_2->setStyleSheet(QString::fromUtf8("QPushButton#n_complement_2\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#n_complement_2:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_8->addWidget(n_complement_2, 3, 2, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 6, 1, 1, 2);

        left_shift_prog = new QPushButton(page_2);
        left_shift_prog->setObjectName(QString::fromUtf8("left_shift_prog"));
        sizePolicy1.setHeightForWidth(left_shift_prog->sizePolicy().hasHeightForWidth());
        left_shift_prog->setSizePolicy(sizePolicy1);
        left_shift_prog->setFont(font1);
        left_shift_prog->setFocusPolicy(Qt::NoFocus);
        left_shift_prog->setStyleSheet(QString::fromUtf8("QPushButton#left_shift_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#left_shift_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_9->addWidget(left_shift_prog, 5, 1, 1, 1);

        gridLayout_17 = new QGridLayout();
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        and_prog = new QPushButton(page_2);
        and_prog->setObjectName(QString::fromUtf8("and_prog"));
        sizePolicy1.setHeightForWidth(and_prog->sizePolicy().hasHeightForWidth());
        and_prog->setSizePolicy(sizePolicy1);
        and_prog->setFont(font1);
        and_prog->setFocusPolicy(Qt::NoFocus);
        and_prog->setStyleSheet(QString::fromUtf8("QPushButton#and_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#and_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_17->addWidget(and_prog, 0, 0, 1, 1);

        or_prog = new QPushButton(page_2);
        or_prog->setObjectName(QString::fromUtf8("or_prog"));
        sizePolicy1.setHeightForWidth(or_prog->sizePolicy().hasHeightForWidth());
        or_prog->setSizePolicy(sizePolicy1);
        or_prog->setFont(font1);
        or_prog->setFocusPolicy(Qt::NoFocus);
        or_prog->setStyleSheet(QString::fromUtf8("QPushButton#or_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#or_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_17->addWidget(or_prog, 0, 1, 1, 1);

        not_prog = new QPushButton(page_2);
        not_prog->setObjectName(QString::fromUtf8("not_prog"));
        sizePolicy1.setHeightForWidth(not_prog->sizePolicy().hasHeightForWidth());
        not_prog->setSizePolicy(sizePolicy1);
        not_prog->setFont(font1);
        not_prog->setFocusPolicy(Qt::NoFocus);
        not_prog->setStyleSheet(QString::fromUtf8("QPushButton#not_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#three_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_17->addWidget(not_prog, 0, 2, 1, 1);

        nand_prog = new QPushButton(page_2);
        nand_prog->setObjectName(QString::fromUtf8("nand_prog"));
        sizePolicy1.setHeightForWidth(nand_prog->sizePolicy().hasHeightForWidth());
        nand_prog->setSizePolicy(sizePolicy1);
        nand_prog->setFont(font1);
        nand_prog->setFocusPolicy(Qt::NoFocus);
        nand_prog->setStyleSheet(QString::fromUtf8("QPushButton#nand_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#nand_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_17->addWidget(nand_prog, 0, 3, 1, 1);

        nor_prog = new QPushButton(page_2);
        nor_prog->setObjectName(QString::fromUtf8("nor_prog"));
        sizePolicy1.setHeightForWidth(nor_prog->sizePolicy().hasHeightForWidth());
        nor_prog->setSizePolicy(sizePolicy1);
        nor_prog->setFont(font1);
        nor_prog->setFocusPolicy(Qt::NoFocus);
        nor_prog->setStyleSheet(QString::fromUtf8("QPushButton#nor_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#nor_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_17->addWidget(nor_prog, 0, 4, 1, 1);

        exor_prog = new QPushButton(page_2);
        exor_prog->setObjectName(QString::fromUtf8("exor_prog"));
        sizePolicy1.setHeightForWidth(exor_prog->sizePolicy().hasHeightForWidth());
        exor_prog->setSizePolicy(sizePolicy1);
        exor_prog->setFont(font1);
        exor_prog->setFocusPolicy(Qt::NoFocus);
        exor_prog->setStyleSheet(QString::fromUtf8("QPushButton#exor_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#exor_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_17->addWidget(exor_prog, 0, 5, 1, 1);


        gridLayout_9->addLayout(gridLayout_17, 2, 0, 1, 4);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        divide_prog = new QPushButton(page_2);
        divide_prog->setObjectName(QString::fromUtf8("divide_prog"));
        sizePolicy1.setHeightForWidth(divide_prog->sizePolicy().hasHeightForWidth());
        divide_prog->setSizePolicy(sizePolicy1);
        divide_prog->setFont(font1);
        divide_prog->setFocusPolicy(Qt::NoFocus);
        divide_prog->setStyleSheet(QString::fromUtf8("QPushButton#divide_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#divide_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_15->addWidget(divide_prog, 5, 0, 1, 1);

        add_prog = new QPushButton(page_2);
        add_prog->setObjectName(QString::fromUtf8("add_prog"));
        sizePolicy1.setHeightForWidth(add_prog->sizePolicy().hasHeightForWidth());
        add_prog->setSizePolicy(sizePolicy1);
        add_prog->setFont(font1);
        add_prog->setFocusPolicy(Qt::NoFocus);
        add_prog->setStyleSheet(QString::fromUtf8("QPushButton#add_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#add_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_15->addWidget(add_prog, 2, 0, 1, 1);

        clear_prog = new QPushButton(page_2);
        clear_prog->setObjectName(QString::fromUtf8("clear_prog"));
        sizePolicy1.setHeightForWidth(clear_prog->sizePolicy().hasHeightForWidth());
        clear_prog->setSizePolicy(sizePolicy1);
        clear_prog->setFont(font1);
        clear_prog->setFocusPolicy(Qt::NoFocus);
        clear_prog->setStyleSheet(QString::fromUtf8("QPushButton#clear_prog\n"
"{  \n"
"color:white;  \n"
"background-color:#ff4561;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"}  \n"
"\n"
"QPushButton#clear_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_15->addWidget(clear_prog, 0, 0, 1, 1);

        minus_prog = new QPushButton(page_2);
        minus_prog->setObjectName(QString::fromUtf8("minus_prog"));
        sizePolicy1.setHeightForWidth(minus_prog->sizePolicy().hasHeightForWidth());
        minus_prog->setSizePolicy(sizePolicy1);
        minus_prog->setFont(font1);
        minus_prog->setFocusPolicy(Qt::NoFocus);
        minus_prog->setStyleSheet(QString::fromUtf8("QPushButton#minus_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#minus_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_15->addWidget(minus_prog, 3, 0, 1, 1);

        back_prog = new QPushButton(page_2);
        back_prog->setObjectName(QString::fromUtf8("back_prog"));
        sizePolicy1.setHeightForWidth(back_prog->sizePolicy().hasHeightForWidth());
        back_prog->setSizePolicy(sizePolicy1);
        back_prog->setFont(font1);
        back_prog->setFocusPolicy(Qt::NoFocus);
        back_prog->setStyleSheet(QString::fromUtf8("QPushButton#back_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#back_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_15->addWidget(back_prog, 1, 0, 1, 1);

        multiply_prog = new QPushButton(page_2);
        multiply_prog->setObjectName(QString::fromUtf8("multiply_prog"));
        sizePolicy1.setHeightForWidth(multiply_prog->sizePolicy().hasHeightForWidth());
        multiply_prog->setSizePolicy(sizePolicy1);
        multiply_prog->setFont(font1);
        multiply_prog->setFocusPolicy(Qt::NoFocus);
        multiply_prog->setStyleSheet(QString::fromUtf8("QPushButton#multiply_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#multiply_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_15->addWidget(multiply_prog, 4, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_15, 3, 3, 4, 1);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        d_prog = new QPushButton(page_2);
        d_prog->setObjectName(QString::fromUtf8("d_prog"));
        sizePolicy1.setHeightForWidth(d_prog->sizePolicy().hasHeightForWidth());
        d_prog->setSizePolicy(sizePolicy1);
        d_prog->setFont(font1);
        d_prog->setFocusPolicy(Qt::NoFocus);
        d_prog->setStyleSheet(QString::fromUtf8("QPushButton#d_prog\n"
"{  \n"
"color:#ff4561;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#d_prog:hover:!pressed\n"
"{  \n"
"color:#ff4561;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_16->addWidget(d_prog, 3, 0, 1, 1);

        e_prog = new QPushButton(page_2);
        e_prog->setObjectName(QString::fromUtf8("e_prog"));
        sizePolicy1.setHeightForWidth(e_prog->sizePolicy().hasHeightForWidth());
        e_prog->setSizePolicy(sizePolicy1);
        e_prog->setFont(font1);
        e_prog->setFocusPolicy(Qt::NoFocus);
        e_prog->setStyleSheet(QString::fromUtf8("QPushButton#e_prog\n"
"{  \n"
"color:#ff4561;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#e_prog:hover:!pressed\n"
"{  \n"
"color:#ff4561;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_16->addWidget(e_prog, 4, 0, 1, 1);

        b_prog = new QPushButton(page_2);
        b_prog->setObjectName(QString::fromUtf8("b_prog"));
        sizePolicy1.setHeightForWidth(b_prog->sizePolicy().hasHeightForWidth());
        b_prog->setSizePolicy(sizePolicy1);
        b_prog->setFont(font1);
        b_prog->setFocusPolicy(Qt::NoFocus);
        b_prog->setStyleSheet(QString::fromUtf8("QPushButton#b_prog\n"
"{  \n"
"color:#ff4561;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#b_prog:hover:!pressed\n"
"{  \n"
"color:#ff4561;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_16->addWidget(b_prog, 1, 0, 1, 1);

        f_prog = new QPushButton(page_2);
        f_prog->setObjectName(QString::fromUtf8("f_prog"));
        sizePolicy1.setHeightForWidth(f_prog->sizePolicy().hasHeightForWidth());
        f_prog->setSizePolicy(sizePolicy1);
        f_prog->setFont(font1);
        f_prog->setFocusPolicy(Qt::NoFocus);
        f_prog->setStyleSheet(QString::fromUtf8("QPushButton#f_prog\n"
"{  \n"
"color:#ff4561;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#f_prog:hover:!pressed\n"
"{  \n"
"color:#ff4561;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_16->addWidget(f_prog, 5, 0, 1, 1);

        a_prog = new QPushButton(page_2);
        a_prog->setObjectName(QString::fromUtf8("a_prog"));
        sizePolicy1.setHeightForWidth(a_prog->sizePolicy().hasHeightForWidth());
        a_prog->setSizePolicy(sizePolicy1);
        a_prog->setFont(font1);
        a_prog->setFocusPolicy(Qt::NoFocus);
        a_prog->setStyleSheet(QString::fromUtf8("QPushButton#a_prog\n"
"{  \n"
"color:#ff4561;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#a_prog:hover:!pressed\n"
"{  \n"
"color:#ff4561;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_16->addWidget(a_prog, 0, 0, 1, 1);

        c_prog = new QPushButton(page_2);
        c_prog->setObjectName(QString::fromUtf8("c_prog"));
        sizePolicy1.setHeightForWidth(c_prog->sizePolicy().hasHeightForWidth());
        c_prog->setSizePolicy(sizePolicy1);
        c_prog->setFont(font1);
        c_prog->setFocusPolicy(Qt::NoFocus);
        c_prog->setStyleSheet(QString::fromUtf8("QPushButton#c_prog\n"
"{  \n"
"color:#ff4561;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#c_prog:hover:!pressed\n"
"{  \n"
"color:#ff4561;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_16->addWidget(c_prog, 2, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_16, 3, 0, 4, 1);

        right_shift_prog = new QPushButton(page_2);
        right_shift_prog->setObjectName(QString::fromUtf8("right_shift_prog"));
        sizePolicy1.setHeightForWidth(right_shift_prog->sizePolicy().hasHeightForWidth());
        right_shift_prog->setSizePolicy(sizePolicy1);
        right_shift_prog->setFont(font1);
        right_shift_prog->setFocusPolicy(Qt::NoFocus);
        right_shift_prog->setStyleSheet(QString::fromUtf8("QPushButton#right_shift_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#right_shift_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_9->addWidget(right_shift_prog, 5, 2, 1, 1);

        closeBracket_prog = new QPushButton(page_2);
        closeBracket_prog->setObjectName(QString::fromUtf8("closeBracket_prog"));
        sizePolicy1.setHeightForWidth(closeBracket_prog->sizePolicy().hasHeightForWidth());
        closeBracket_prog->setSizePolicy(sizePolicy1);
        closeBracket_prog->setFont(font1);
        closeBracket_prog->setFocusPolicy(Qt::NoFocus);
        closeBracket_prog->setStyleSheet(QString::fromUtf8("QPushButton#closeBracket_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#closeBracket_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_9->addWidget(closeBracket_prog, 4, 2, 1, 1);

        calculate_prog = new QPushButton(page_2);
        calculate_prog->setObjectName(QString::fromUtf8("calculate_prog"));
        sizePolicy1.setHeightForWidth(calculate_prog->sizePolicy().hasHeightForWidth());
        calculate_prog->setSizePolicy(sizePolicy1);
        calculate_prog->setFont(font1);
        calculate_prog->setFocusPolicy(Qt::NoFocus);
        calculate_prog->setStyleSheet(QString::fromUtf8("QPushButton#calculate_prog\n"
"{  \n"
"color:white;  \n"
"background-color : rgb(41, 52, 58) ; \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px 303030 solid; \n"
"border-radius: 10px;\n"
"text-align:center; \n"
"}  \n"
"\n"
"QPushButton#calculate_prog:hover:!pressed\n"
"{  \n"
"color:white;  \n"
"background-color:#5bd7fd ;  \n"
"border-bottom:black 2px solid;  \n"
"border-top:2px #6f6f6f solid;  \n"
"border-radius: 10px;\n"
"text-align: center;\n"
"} "));

        gridLayout_9->addWidget(calculate_prog, 3, 1, 1, 2);

        output_prog = new QLineEdit(page_2);
        output_prog->setObjectName(QString::fromUtf8("output_prog"));
        output_prog->setFont(font1);
        output_prog->setFocusPolicy(Qt::NoFocus);

        gridLayout_9->addWidget(output_prog, 0, 0, 1, 4);

        gridLayout_19 = new QGridLayout();
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        hexEdit = new QLineEdit(page_2);
        hexEdit->setObjectName(QString::fromUtf8("hexEdit"));
        hexEdit->setFont(font1);

        gridLayout_19->addWidget(hexEdit, 0, 1, 1, 1);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        gridLayout_19->addWidget(label_2, 1, 0, 1, 1);

        octEdit = new QLineEdit(page_2);
        octEdit->setObjectName(QString::fromUtf8("octEdit"));
        octEdit->setFont(font1);

        gridLayout_19->addWidget(octEdit, 2, 1, 1, 1);

        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        gridLayout_19->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout_19->addWidget(label_4, 3, 0, 1, 1);

        decEdit = new QLineEdit(page_2);
        decEdit->setObjectName(QString::fromUtf8("decEdit"));
        decEdit->setFont(font1);

        gridLayout_19->addWidget(decEdit, 1, 1, 1, 1);

        binEdit = new QLineEdit(page_2);
        binEdit->setObjectName(QString::fromUtf8("binEdit"));
        binEdit->setFont(font1);

        gridLayout_19->addWidget(binEdit, 3, 1, 1, 1);

        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        gridLayout_19->addWidget(label_3, 2, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_19, 1, 0, 1, 4);

        horizontalSlider_2 = new QSlider(page_2);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setMinimum(15);
        horizontalSlider_2->setValue(99);
        horizontalSlider_2->setSliderPosition(99);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_2->setInvertedAppearance(true);
        horizontalSlider_2->setInvertedControls(false);

        gridLayout_9->addWidget(horizontalSlider_2, 7, 0, 1, 4);

        stackedWidget->addWidget(page_2);

        gridLayout_10->addWidget(stackedWidget, 1, 0, 1, 1);

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        comboBox->setFont(font2);
        comboBox->setLayoutDirection(Qt::LeftToRight);
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox#comboBox{\n"
"color:white;\n"
"background-color:#6f6f6f;  \n"
"border-radius:10px;\n"
"}"));

        gridLayout_10->addWidget(comboBox, 0, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_10, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Calculator", nullptr));
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
        degrees->setText(QApplication::translate("MainWindow", "Deg", nullptr));
        radians->setText(QApplication::translate("MainWindow", "Radians", nullptr));
        seven->setText(QApplication::translate("MainWindow", "7", nullptr));
        eight->setText(QApplication::translate("MainWindow", "8", nullptr));
        nine->setText(QApplication::translate("MainWindow", "9", nullptr));
        four->setText(QApplication::translate("MainWindow", "4", nullptr));
        five->setText(QApplication::translate("MainWindow", "5", nullptr));
        six->setText(QApplication::translate("MainWindow", "6", nullptr));
        one->setText(QApplication::translate("MainWindow", "1", nullptr));
        two->setText(QApplication::translate("MainWindow", "2", nullptr));
        three->setText(QApplication::translate("MainWindow", "3", nullptr));
        piConstant->setText(QApplication::translate("MainWindow", "\317\200", nullptr));
        zero->setText(QApplication::translate("MainWindow", "0", nullptr));
        dot->setText(QApplication::translate("MainWindow", ".", nullptr));
        calculate->setText(QApplication::translate("MainWindow", "=", nullptr));
        back->setText(QApplication::translate("MainWindow", "\342\206\220", nullptr));
        closeBracket->setText(QApplication::translate("MainWindow", ")", nullptr));
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
        advancedMode->setText(QApplication::translate("MainWindow", "Advanced Mode", nullptr));
        history->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Courier'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'OCR A Extended';\"><br /></p></body></html>", nullptr));
        history->setPlaceholderText(QApplication::translate("MainWindow", "HISTORY", nullptr));
        openBracket_prog->setText(QApplication::translate("MainWindow", "(", nullptr));
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
        left_shift_prog->setText(QApplication::translate("MainWindow", "<<", nullptr));
        and_prog->setText(QApplication::translate("MainWindow", "AND", nullptr));
        or_prog->setText(QApplication::translate("MainWindow", "OR", nullptr));
        not_prog->setText(QApplication::translate("MainWindow", "NOT", nullptr));
        nand_prog->setText(QApplication::translate("MainWindow", "NAND", nullptr));
        nor_prog->setText(QApplication::translate("MainWindow", "NOR", nullptr));
        exor_prog->setText(QApplication::translate("MainWindow", "EXOR", nullptr));
        divide_prog->setText(QApplication::translate("MainWindow", "/", nullptr));
        add_prog->setText(QApplication::translate("MainWindow", "+", nullptr));
        clear_prog->setText(QApplication::translate("MainWindow", "AC", nullptr));
        minus_prog->setText(QApplication::translate("MainWindow", "-", nullptr));
        back_prog->setText(QApplication::translate("MainWindow", "\342\206\220", nullptr));
        multiply_prog->setText(QApplication::translate("MainWindow", "*", nullptr));
        d_prog->setText(QApplication::translate("MainWindow", "D", nullptr));
        e_prog->setText(QApplication::translate("MainWindow", "E", nullptr));
        b_prog->setText(QApplication::translate("MainWindow", "B", nullptr));
        f_prog->setText(QApplication::translate("MainWindow", "F", nullptr));
        a_prog->setText(QApplication::translate("MainWindow", "A", nullptr));
        c_prog->setText(QApplication::translate("MainWindow", "C", nullptr));
        right_shift_prog->setText(QApplication::translate("MainWindow", ">>", nullptr));
        closeBracket_prog->setText(QApplication::translate("MainWindow", ")", nullptr));
        calculate_prog->setText(QApplication::translate("MainWindow", "=", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "DEC", nullptr));
        label->setText(QApplication::translate("MainWindow", "HEX", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "BIN", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "OCT", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "Arithmetic Calculator", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "Programming Calculator", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
