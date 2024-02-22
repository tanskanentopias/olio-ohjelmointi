#include "mainwindow.h"
#include "ui_mainwindow.h"


using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    state = 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnEnter_clicked()
{
    float num1 = number1.toFloat();
    float num2 = number2.toFloat();

    switch (operand) {
        case 0:
            result = num1 + num2;
            ui->lineEditResult->setText(QString::number(result));
            break;

        case 1:
            result = num1 - num2;
            ui->lineEditResult->setText(QString::number(result));
            break;

        case 2:
            result = num1 * num2;
            ui->lineEditResult->setText(QString::number(result));
            break;

        case 3:
            result = num1 / num2;
            ui->lineEditResult->setText(QString::number(result));
            break;

        default:
            break;
    }
}


void MainWindow::on_btnClear_clicked()
{
    state = 1;
    resetLineEdits();
}


void MainWindow::on_N1_clicked()
{
    if(state == 1){
        number1 = "1";
    }

    if(state == 2){
        number2 = "1";
    }
    numberClickedHandler();
}


void MainWindow::on_N2_clicked()
{
    if(state == 1){
        number1 = "2";
    }

    if(state == 2){
        number2 = "2";
    }
    numberClickedHandler();

}


void MainWindow::on_N3_clicked()
{
    if(state == 1){
        number1 = "3";
    }

    if(state == 2){
        number2 = "3";
    }
    numberClickedHandler();
}


void MainWindow::on_N4_clicked()
{
    if(state == 1){
        number1 = "4";
    }

    if(state == 2){
        number2 = "4";
    }
    numberClickedHandler();


}


void MainWindow::on_N5_clicked()
{
    if(state == 1){
        number1 = "5";
    }

    if(state == 2){
        number2 = "5";
    }
    numberClickedHandler();
}


void MainWindow::on_N6_clicked()
{
    if(state == 1){
        number1 = "6";
    }

    if(state == 2){
        number2 = "6";
    }
    numberClickedHandler();


}


void MainWindow::on_N7_clicked()
{
    if(state == 1){
        number1 = "7";
    }

    if(state == 2){
        number2 = "7";
    }
    numberClickedHandler();
}


void MainWindow::on_N8_clicked()
{
    if(state == 1){
        number1 = "8";
    }

    if(state == 2){
        number2 = "8";
    }
    numberClickedHandler();
}


void MainWindow::on_N9_clicked()
{
    if(state == 1){
        number1 = "9";
    }

    if(state == 2){
        number2 = "9";
    }
    numberClickedHandler();
}


void MainWindow::on_N0_clicked()
{
    if(state == 1){
        number1 = "0";
    }

    if(state == 2){
        number2 = "0";
    }
    numberClickedHandler();
}


void MainWindow::on_btnAdd_clicked()
{

    operand = 0;
    addSubMulDivClickHandler();
    qDebug()<< operand << " +";
}


void MainWindow::on_btnSub_clicked()
{
    operand = 1;
    addSubMulDivClickHandler();
    qDebug()<< operand << " -";
}


void MainWindow::on_btnMul_clicked()
{
    operand = 2;
    addSubMulDivClickHandler();
    qDebug()<< operand << " *";
}


void MainWindow::on_btnDiv_clicked()
{
    operand = 3;
    qDebug()<< operand << " /";
    addSubMulDivClickHandler();
}

void MainWindow::numberClickedHandler()
{
    if(state == 1){

    number1 = ui->lineEditNumber1->text() + number1;
    qDebug()<< "number 1 = "<< number1;
    qDebug()<< "number 2 = "<< number2;
    ui->lineEditNumber1->setText(number1);
    }

    if(state == 2){

    number2 = ui->lineEditNumber2->text() + number2;
    qDebug()<< "number 1 = "<< number1;
    qDebug()<< "number 2 = "<< number2;

    ui->lineEditNumber2->setText(number2);
    }
}

/*void MainWindow::clearAndEnterClickHandler()
{

}*/

void MainWindow::addSubMulDivClickHandler()
{
    state = 2;

    switch (operand) {
        case 0: ui->lineEditOperand->setText("+");
            break;

        case 1: ui->lineEditOperand->setText("-");
            break;

        case 2: ui->lineEditOperand->setText("*");
            break;

        case 3: ui->lineEditOperand->setText("/");
            break;

        default:
            break;
    }


}

void MainWindow::resetLineEdits()
{
    ui->lineEditNumber1->setText("");
    ui->lineEditNumber2->setText("");
    ui->lineEditResult->setText("");
    ui->lineEditOperand->setText("");
}

