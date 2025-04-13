#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

double firstNum, secondNum, result;

void MainWindow::compute(char action) {

    firstNum = ui->txtFirstNum->text().toDouble();
    secondNum = ui->txtSecondNum->text().toDouble();

    switch(action) {
    case '+':
        result = firstNum + secondNum;
        break;
    case '-':
        result = firstNum - secondNum;
        break;
    case '/':
        result = firstNum / secondNum;
        break;
    case '*':
        result = firstNum * secondNum;
        break;
    default:
        ui->txtResult->setText("Error");
        return;
    }

    ui->txtResult->setText(QString::number(result));
}

void MainWindow::on_btnAdd_clicked()
{
    compute('+');
}


void MainWindow::on_btnSubtract_clicked()
{
    compute('-');
}


void MainWindow::on_btnDivide_clicked()
{
    compute('/');
}


void MainWindow::on_btnMultiply_clicked()
{
    compute('*');
}

