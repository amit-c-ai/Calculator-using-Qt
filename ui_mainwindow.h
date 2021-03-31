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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_4;
    QPushButton *advancedMode;
    QSlider *horizontalSlider;
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
    QTextEdit *history;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(589, 523);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Gill Sans MT Condensed"));
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_6 = new QGridLayout(centralwidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        advancedMode = new QPushButton(centralwidget);
        advancedMode->setObjectName(QString::fromUtf8("advancedMode"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(advancedMode->sizePolicy().hasHeightForWidth());
        advancedMode->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Gill Sans MT Condensed"));
        font1.setPointSize(22);
        advancedMode->setFont(font1);

        gridLayout_4->addWidget(advancedMode, 0, 0, 1, 1);

        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMouseTracking(true);
        horizontalSlider->setMinimum(15);
        horizontalSlider->setSliderPosition(85);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(true);

        gridLayout_4->addWidget(horizontalSlider, 4, 0, 1, 1);

        output = new QLineEdit(centralwidget);
        output->setObjectName(QString::fromUtf8("output"));
        sizePolicy.setHeightForWidth(output->sizePolicy().hasHeightForWidth());
        output->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Gill Sans MT Condensed"));
        font2.setPointSize(22);
        font2.setBold(true);
        font2.setWeight(75);
        output->setFont(font2);

        gridLayout_4->addWidget(output, 2, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        openBracket = new QPushButton(centralwidget);
        openBracket->setObjectName(QString::fromUtf8("openBracket"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(openBracket->sizePolicy().hasHeightForWidth());
        openBracket->setSizePolicy(sizePolicy1);
        openBracket->setFont(font1);

        gridLayout->addWidget(openBracket, 0, 0, 1, 1);

        clear = new QPushButton(centralwidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        sizePolicy1.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy1);
        clear->setFont(font1);

        gridLayout->addWidget(clear, 0, 1, 1, 1);

        sin = new QPushButton(centralwidget);
        sin->setObjectName(QString::fromUtf8("sin"));
        sizePolicy1.setHeightForWidth(sin->sizePolicy().hasHeightForWidth());
        sin->setSizePolicy(sizePolicy1);
        sin->setFont(font1);

        gridLayout->addWidget(sin, 1, 0, 1, 1);

        power = new QPushButton(centralwidget);
        power->setObjectName(QString::fromUtf8("power"));
        sizePolicy1.setHeightForWidth(power->sizePolicy().hasHeightForWidth());
        power->setSizePolicy(sizePolicy1);
        power->setFont(font1);

        gridLayout->addWidget(power, 1, 1, 1, 1);

        cos = new QPushButton(centralwidget);
        cos->setObjectName(QString::fromUtf8("cos"));
        sizePolicy1.setHeightForWidth(cos->sizePolicy().hasHeightForWidth());
        cos->setSizePolicy(sizePolicy1);
        cos->setFont(font1);

        gridLayout->addWidget(cos, 2, 0, 1, 1);

        reciprocal = new QPushButton(centralwidget);
        reciprocal->setObjectName(QString::fromUtf8("reciprocal"));
        sizePolicy1.setHeightForWidth(reciprocal->sizePolicy().hasHeightForWidth());
        reciprocal->setSizePolicy(sizePolicy1);
        reciprocal->setFont(font1);

        gridLayout->addWidget(reciprocal, 2, 1, 1, 1);

        tan = new QPushButton(centralwidget);
        tan->setObjectName(QString::fromUtf8("tan"));
        sizePolicy1.setHeightForWidth(tan->sizePolicy().hasHeightForWidth());
        tan->setSizePolicy(sizePolicy1);
        tan->setFont(font1);

        gridLayout->addWidget(tan, 3, 0, 1, 1);

        square = new QPushButton(centralwidget);
        square->setObjectName(QString::fromUtf8("square"));
        sizePolicy1.setHeightForWidth(square->sizePolicy().hasHeightForWidth());
        square->setSizePolicy(sizePolicy1);
        square->setFont(font1);

        gridLayout->addWidget(square, 3, 1, 1, 1);

        log = new QPushButton(centralwidget);
        log->setObjectName(QString::fromUtf8("log"));
        sizePolicy1.setHeightForWidth(log->sizePolicy().hasHeightForWidth());
        log->setSizePolicy(sizePolicy1);
        log->setFont(font1);

        gridLayout->addWidget(log, 4, 0, 1, 1);

        root = new QPushButton(centralwidget);
        root->setObjectName(QString::fromUtf8("root"));
        sizePolicy1.setHeightForWidth(root->sizePolicy().hasHeightForWidth());
        root->setSizePolicy(sizePolicy1);
        root->setFont(font1);

        gridLayout->addWidget(root, 4, 1, 1, 1);

        factorial = new QPushButton(centralwidget);
        factorial->setObjectName(QString::fromUtf8("factorial"));
        sizePolicy1.setHeightForWidth(factorial->sizePolicy().hasHeightForWidth());
        factorial->setSizePolicy(sizePolicy1);
        factorial->setFont(font1);

        gridLayout->addWidget(factorial, 5, 0, 1, 1);

        eConstant = new QPushButton(centralwidget);
        eConstant->setObjectName(QString::fromUtf8("eConstant"));
        sizePolicy1.setHeightForWidth(eConstant->sizePolicy().hasHeightForWidth());
        eConstant->setSizePolicy(sizePolicy1);
        eConstant->setFont(font1);

        gridLayout->addWidget(eConstant, 5, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        six = new QPushButton(centralwidget);
        six->setObjectName(QString::fromUtf8("six"));
        sizePolicy1.setHeightForWidth(six->sizePolicy().hasHeightForWidth());
        six->setSizePolicy(sizePolicy1);
        six->setFont(font1);

        gridLayout_3->addWidget(six, 5, 2, 1, 1);

        eight = new QPushButton(centralwidget);
        eight->setObjectName(QString::fromUtf8("eight"));
        sizePolicy1.setHeightForWidth(eight->sizePolicy().hasHeightForWidth());
        eight->setSizePolicy(sizePolicy1);
        eight->setFont(font1);

        gridLayout_3->addWidget(eight, 4, 1, 1, 1);

        zero = new QPushButton(centralwidget);
        zero->setObjectName(QString::fromUtf8("zero"));
        sizePolicy1.setHeightForWidth(zero->sizePolicy().hasHeightForWidth());
        zero->setSizePolicy(sizePolicy1);
        zero->setFont(font1);

        gridLayout_3->addWidget(zero, 7, 1, 1, 1);

        three = new QPushButton(centralwidget);
        three->setObjectName(QString::fromUtf8("three"));
        sizePolicy1.setHeightForWidth(three->sizePolicy().hasHeightForWidth());
        three->setSizePolicy(sizePolicy1);
        three->setFont(font1);

        gridLayout_3->addWidget(three, 6, 2, 1, 1);

        five = new QPushButton(centralwidget);
        five->setObjectName(QString::fromUtf8("five"));
        sizePolicy1.setHeightForWidth(five->sizePolicy().hasHeightForWidth());
        five->setSizePolicy(sizePolicy1);
        five->setFont(font1);

        gridLayout_3->addWidget(five, 5, 1, 1, 1);

        one = new QPushButton(centralwidget);
        one->setObjectName(QString::fromUtf8("one"));
        sizePolicy1.setHeightForWidth(one->sizePolicy().hasHeightForWidth());
        one->setSizePolicy(sizePolicy1);
        one->setFont(font1);
        one->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(one, 6, 0, 1, 1);

        degrees = new QRadioButton(centralwidget);
        degrees->setObjectName(QString::fromUtf8("degrees"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Gill Sans MT Condensed"));
        font3.setPointSize(16);
        degrees->setFont(font3);
        degrees->setChecked(true);

        gridLayout_3->addWidget(degrees, 0, 0, 1, 1);

        seven = new QPushButton(centralwidget);
        seven->setObjectName(QString::fromUtf8("seven"));
        sizePolicy1.setHeightForWidth(seven->sizePolicy().hasHeightForWidth());
        seven->setSizePolicy(sizePolicy1);
        seven->setFont(font1);

        gridLayout_3->addWidget(seven, 4, 0, 1, 1);

        nine = new QPushButton(centralwidget);
        nine->setObjectName(QString::fromUtf8("nine"));
        sizePolicy1.setHeightForWidth(nine->sizePolicy().hasHeightForWidth());
        nine->setSizePolicy(sizePolicy1);
        nine->setFont(font1);

        gridLayout_3->addWidget(nine, 4, 2, 1, 1);

        dot = new QPushButton(centralwidget);
        dot->setObjectName(QString::fromUtf8("dot"));
        sizePolicy1.setHeightForWidth(dot->sizePolicy().hasHeightForWidth());
        dot->setSizePolicy(sizePolicy1);
        dot->setFont(font1);

        gridLayout_3->addWidget(dot, 7, 2, 1, 1);

        four = new QPushButton(centralwidget);
        four->setObjectName(QString::fromUtf8("four"));
        sizePolicy1.setHeightForWidth(four->sizePolicy().hasHeightForWidth());
        four->setSizePolicy(sizePolicy1);
        four->setFont(font1);

        gridLayout_3->addWidget(four, 5, 0, 1, 1);

        calculate = new QPushButton(centralwidget);
        calculate->setObjectName(QString::fromUtf8("calculate"));
        sizePolicy1.setHeightForWidth(calculate->sizePolicy().hasHeightForWidth());
        calculate->setSizePolicy(sizePolicy1);
        calculate->setFont(font1);

        gridLayout_3->addWidget(calculate, 1, 0, 1, 3);

        two = new QPushButton(centralwidget);
        two->setObjectName(QString::fromUtf8("two"));
        sizePolicy1.setHeightForWidth(two->sizePolicy().hasHeightForWidth());
        two->setSizePolicy(sizePolicy1);
        two->setFont(font1);

        gridLayout_3->addWidget(two, 6, 1, 1, 1);

        piConstant = new QPushButton(centralwidget);
        piConstant->setObjectName(QString::fromUtf8("piConstant"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(piConstant->sizePolicy().hasHeightForWidth());
        piConstant->setSizePolicy(sizePolicy2);
        piConstant->setFont(font1);

        gridLayout_3->addWidget(piConstant, 7, 0, 1, 1);

        radians = new QRadioButton(centralwidget);
        radians->setObjectName(QString::fromUtf8("radians"));
        radians->setFont(font3);

        gridLayout_3->addWidget(radians, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        add = new QPushButton(centralwidget);
        add->setObjectName(QString::fromUtf8("add"));
        sizePolicy1.setHeightForWidth(add->sizePolicy().hasHeightForWidth());
        add->setSizePolicy(sizePolicy1);
        add->setFont(font1);

        gridLayout_2->addWidget(add, 1, 0, 1, 1);

        asin = new QPushButton(centralwidget);
        asin->setObjectName(QString::fromUtf8("asin"));
        sizePolicy1.setHeightForWidth(asin->sizePolicy().hasHeightForWidth());
        asin->setSizePolicy(sizePolicy1);
        asin->setFont(font1);

        gridLayout_2->addWidget(asin, 1, 1, 1, 1);

        minus = new QPushButton(centralwidget);
        minus->setObjectName(QString::fromUtf8("minus"));
        sizePolicy1.setHeightForWidth(minus->sizePolicy().hasHeightForWidth());
        minus->setSizePolicy(sizePolicy1);
        minus->setFont(font1);

        gridLayout_2->addWidget(minus, 2, 0, 1, 1);

        acos = new QPushButton(centralwidget);
        acos->setObjectName(QString::fromUtf8("acos"));
        sizePolicy1.setHeightForWidth(acos->sizePolicy().hasHeightForWidth());
        acos->setSizePolicy(sizePolicy1);
        acos->setFont(font1);

        gridLayout_2->addWidget(acos, 2, 1, 1, 1);

        multiply = new QPushButton(centralwidget);
        multiply->setObjectName(QString::fromUtf8("multiply"));
        sizePolicy1.setHeightForWidth(multiply->sizePolicy().hasHeightForWidth());
        multiply->setSizePolicy(sizePolicy1);
        multiply->setFont(font1);

        gridLayout_2->addWidget(multiply, 3, 0, 1, 1);

        atan = new QPushButton(centralwidget);
        atan->setObjectName(QString::fromUtf8("atan"));
        sizePolicy1.setHeightForWidth(atan->sizePolicy().hasHeightForWidth());
        atan->setSizePolicy(sizePolicy1);
        atan->setFont(font1);

        gridLayout_2->addWidget(atan, 3, 1, 1, 1);

        divide = new QPushButton(centralwidget);
        divide->setObjectName(QString::fromUtf8("divide"));
        sizePolicy1.setHeightForWidth(divide->sizePolicy().hasHeightForWidth());
        divide->setSizePolicy(sizePolicy1);
        divide->setFont(font1);

        gridLayout_2->addWidget(divide, 4, 0, 1, 1);

        ln = new QPushButton(centralwidget);
        ln->setObjectName(QString::fromUtf8("ln"));
        sizePolicy1.setHeightForWidth(ln->sizePolicy().hasHeightForWidth());
        ln->setSizePolicy(sizePolicy1);
        ln->setFont(font1);

        gridLayout_2->addWidget(ln, 4, 1, 1, 1);

        percentage = new QPushButton(centralwidget);
        percentage->setObjectName(QString::fromUtf8("percentage"));
        sizePolicy1.setHeightForWidth(percentage->sizePolicy().hasHeightForWidth());
        percentage->setSizePolicy(sizePolicy1);
        percentage->setFont(font1);

        gridLayout_2->addWidget(percentage, 5, 0, 1, 1);

        mod = new QPushButton(centralwidget);
        mod->setObjectName(QString::fromUtf8("mod"));
        sizePolicy1.setHeightForWidth(mod->sizePolicy().hasHeightForWidth());
        mod->setSizePolicy(sizePolicy1);
        mod->setFont(font1);

        gridLayout_2->addWidget(mod, 5, 1, 1, 1);

        back = new QPushButton(centralwidget);
        back->setObjectName(QString::fromUtf8("back"));
        sizePolicy1.setHeightForWidth(back->sizePolicy().hasHeightForWidth());
        back->setSizePolicy(sizePolicy1);
        back->setFont(font1);

        gridLayout_2->addWidget(back, 0, 0, 1, 1);

        closeBracket = new QPushButton(centralwidget);
        closeBracket->setObjectName(QString::fromUtf8("closeBracket"));
        sizePolicy1.setHeightForWidth(closeBracket->sizePolicy().hasHeightForWidth());
        closeBracket->setSizePolicy(sizePolicy1);
        closeBracket->setFont(font1);

        gridLayout_2->addWidget(closeBracket, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_5, 3, 0, 1, 1);

        history = new QTextEdit(centralwidget);
        history->setObjectName(QString::fromUtf8("history"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Courier"));
        font4.setPointSize(12);
        font4.setStrikeOut(false);
        history->setFont(font4);
        history->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:0.432, x2:1, y2:1, stop:0 rgba(226, 226, 226, 255), stop:1 rgba(255, 255, 255, 255));"));
        history->setFrameShape(QFrame::StyledPanel);
        history->setFrameShadow(QFrame::Sunken);
        history->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        history->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        history->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        history->setReadOnly(true);
        history->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout_4->addWidget(history, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Calculator", nullptr));
        advancedMode->setText(QApplication::translate("MainWindow", "Advanced Mode", nullptr));
        openBracket->setText(QApplication::translate("MainWindow", "(", nullptr));
        clear->setText(QApplication::translate("MainWindow", "C", nullptr));
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
        history->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Courier'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'OCR A Extended';\"><br /></p></body></html>", nullptr));
        history->setPlaceholderText(QApplication::translate("MainWindow", "HISTORY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
