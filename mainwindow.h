#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QDebug>
#include<QStack>
#include<sstream>

#include <QMainWindow>
#include<qmath.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QStringList toCalculate;
    QString screen;
    int precedence(QChar op);
    QStack<QString> infix_To_postfix(QStringList input);
    bool isOperator(QString op);
    QStringList seperateTokens(QString input);
    void calculate(QString screen);
    double evaluate(QStack<QString> postfix);
    QString qStringFromLongDouble(const double myLongDouble);

private slots:
    void on_calculate_clicked();

    void on_add_clicked();

    void on_one_clicked();

    void on_two_clicked();

    void on_three_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_zero_clicked();

    void on_dot_clicked();

    void on_multiply_clicked();

    void on_minus_clicked();

    void on_divide_clicked();

    void on_percentage_clicked();

    void on_clear_clicked();

    void on_back_clicked();

    void on_power_clicked();

    void on_output_returnPressed();

    void on_advancedMode_clicked();

    void on_openBracket_clicked();

    void on_closeBracket_clicked();

    void on_piConstant_clicked();

    void on_eConstant_clicked();

    void on_reciprocal_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

