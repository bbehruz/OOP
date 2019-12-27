#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "func.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_BMI->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_cale_clicked()
{
  float m, n , g; // m - масса, n - рост, i - indeks
  ui->label_BMI->show();
  m = ui->doubleSpinBox_weight->value();
  n = ui->doubleSpinBox_height->value() / 100;
  i = calculation(m,n);
  ui->label_BMI->setText(QString::number(i));
}
