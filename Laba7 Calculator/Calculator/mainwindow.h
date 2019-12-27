#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <calculator.h>
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QKeyEvent>
#include <QTextBrowser>
#include <QMessageBox>
#include <QPlainTextEdit>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    /*Работа с клавишами*/
    void keyPressEvent(QKeyEvent *key); // Обработка нажатий
    void on_pushButton_0_clicked();
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    /*Очистка экрана, знаки и другое*/
    void on_pushButton_back_clicked(); // Удаление одной цифры
    void on_pushButton_point_clicked(); // Установка запятой в число
    void on_pushButton_clear_clicked(); // Очистка поля C
    void on_pushButton_sign_clicked(); // Знак +/-
    /*Арифметические операции*/
    void on_pushButton_plus_clicked(); // +
    void on_pushButton_minus_clicked(); // -
    void on_pushButton_multi_clicked(); // *
    void on_pushButton_div_clicked(); // :
    void on_pushButton_equally_clicked(); // =
    void on_pushButton_sqrt_clicked(); // Корень
    void on_pushButton_exp_clicked(); // exp
    void on_pushButton_sin_clicked(); // sin
    void on_pushButton_cos_clicked(); // cos
    void on_pushButton_tg_clicked(); // tg
    void on_pushButton_ln_clicked(); // ln
    void on_pushButton_x2_clicked(); // x2
    void on_pushButton_pi_clicked(); // Число пи
    /*История вычислений*/
    void on_pushButton_fullhistory_clicked(); // Полная история
    void on_pushButton_del_history_clicked(); // Удаление полной истории

private:
    Ui::MainWindow *ui;
    Calculator mainCalc; // Значения калькулятора
    /*Переменные обработки историй*/
    bool sign; // Для истории вычислений
    bool open; // Для открытия и закрытия окна историй
    /*Переменные для операций*/
    bool firstvalue; // Проверка первого значения
    QString action; // Действие
    /*Методы для обработки текста*/
    void addLabel(QPushButton *button,QLabel *label); // Функция добавления текста на экран
    void checkButton(); // Проверка действия
    void setHistory(QPushButton *button); // История вычислений
};

#endif // MAINWINDOW_H
