#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    gameTimer = new QTimer();
    ui->labelGameInfo->setText("Select play time and press start game!");
}
MainWindow::~MainWindow()
{
    delete ui;
    delete gameTimer;
    gameTimer = nullptr;
}




void MainWindow::on_player1TimeBar_valueChanged(int value)
{
    slotShowTimer();    //updates progress bar
}


void MainWindow::on_player2TimeBar_valueChanged(int value)
{

    slotShowTimer();
}


void MainWindow::on_btnSwitchPlayer1_clicked()
{

}


void MainWindow::on_btnSwitchPlayer2_clicked()
{

}


void MainWindow::on_btnGameTime120sec_clicked()
{
    //gameTime = 120; //sec
    ui->labelGameInfo->setText("Game time set to 120 seconds. Ready to Start!");
}


void MainWindow::on_btnGameTime5min_clicked()
{
    //gameTime = 300; //5min = 300swc
    ui->labelGameInfo->setText("Game time set to 5 minutes. Ready to Start!");
}


void MainWindow::on_btnStartGame_clicked()
{


    connect(gameTimer, SIGNAL(timeout()), this, SLOT(slotShowTimer()));
    gameTimer->start(1000);


    ui->labelGameInfo->setText("Game ongoing");
    ui->player1TimeBar->setValue(100);
    ui->player2TimeBar->setValue(100);


}

void MainWindow::slotShowTimer()
{


    player1Time-=1;
    qDebug()<< player1Time;
}


void MainWindow::on_btnStopGame_clicked()
{

}

/*void MainWindow::updateProgressBar()
{
    player1Time-=1;
    qDebug()<< player1Time;
}*/

void MainWindow::setGameInfoText(QString, short)
{

}

