#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<qmath.h>
#include<QDebug>
#include<QStack>
#include<QtMultimedia/QMediaPlayer>
#include<QtMultimedia/QSound>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QMediaPlayer *sound;
    QStringList toCalculate;
    QString screen;
    int isdegrees=1;
    long factorial(int n);
    int precedence(QString op);
    void tokenReplacer(QStringList *original);
    QStack<QString> infix_To_postfix(QStringList input);
    bool isBOperator(QString op);
    bool isUOperator(QString op);
    inline bool isDigit(QChar c);
    inline bool isAlphabet(QChar c);
    QStringList seperateTokens(QString input);
    double calculate(QString screen);
    double evaluate(QStack<QString> postfix);

private slots:
    void on_calculate_clicked();

    void setText(QString text, int posIncrement);

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

    void on_root_clicked();

    void on_sin_clicked();

    void on_cos_clicked();

    void on_tan_clicked();

    void on_asin_clicked();

    void on_acos_clicked();

    void on_atan_clicked();

    void on_ln_clicked();

    void on_log_clicked();

    void on_factorial_clicked();

    void on_square_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_degrees_toggled(bool checked);

    void on_radians_toggled(bool checked);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

