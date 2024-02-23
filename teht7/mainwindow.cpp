#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->labelGameInfo->setText("Select play time and press start game!");
}


MainWindow::~MainWindow()
{
    delete ui;
    delete gameTimer;
    gameTimer = nullptr;
}


void MainWindow::on_btnSwitchPlayer1_clicked()
{
    qDebug()<< "Player switched to 2";
    currentPlayer=2;
}


void MainWindow::on_btnSwitchPlayer2_clicked()
{
    qDebug()<< "Player switched to 1";
    currentPlayer=1;
}


void MainWindow::on_btnGameTime120sec_clicked()
{

    player1Time=120;
    player2Time=120;

    ui->player1TimeBar->setValue(100);
    ui->player1TimeBar->setMaximum(player1Time);
    ui->player1TimeBar->setMinimum(0);

    ui->player2TimeBar->setValue(100);
    ui->player2TimeBar->setMaximum(player2Time);
    ui->player2TimeBar->setMinimum(0);

    ui->labelGameInfo->setText("Game time set to 120 seconds. Ready to Start!");
}


void MainWindow::on_btnGameTime5min_clicked()
{

    player1Time=300;
    player2Time=300;

    ui->player1TimeBar->setValue(100);
    ui->player1TimeBar->setMaximum(player1Time);
    ui->player1TimeBar->setMinimum(0);

    ui->player2TimeBar->setValue(100);
    ui->player2TimeBar->setMaximum(player2Time);
    ui->player2TimeBar->setMinimum(0);

    ui->labelGameInfo->setText("Game time set to 5 minutes. Ready to Start!");
}


void MainWindow::on_btnStartGame_clicked()
{

    ui->btnGameTime120sec->hide();
    ui->btnGameTime5min->hide();
    gameTimer = new QTimer();
    connect(gameTimer, SIGNAL(timeout()), this, SLOT(updateProgressBar()));
    gameTimer->start(1000);

    currentPlayer=1;
    ui->labelGameInfo->setText("Game ongoing");
}


void MainWindow::on_btnStopGame_clicked()
{
    delete gameTimer;
    ui->labelGameInfo->setText("Game Stopped. Select play time and press start game!");
    ui->btnGameTime120sec->show();
    ui->btnGameTime5min->show();
}


void MainWindow::updateProgressBar()
{
    if(currentPlayer==1){
        player1Time-=1;
        qDebug()<< player1Time;
        ui->player1TimeBar->setValue(player1Time);
    }

    if(currentPlayer==2){
        player2Time-=1;
        qDebug()<< player2Time;
        ui->player2TimeBar->setValue(player2Time);
    }

    else if(player2Time==0){
        delete gameTimer;
        ui->labelGameInfo->setText("Player 1 won!");
        ui->btnGameTime120sec->show();
        ui->btnGameTime5min->show();

        }

    else if(player1Time==0){
        delete gameTimer;
        ui->btnGameTime120sec->show();
        ui->btnGameTime5min->show();
        ui->labelGameInfo->setText("Player 2 won!");
    }
}


/*void MainWindow::setGameInfoText(QString, short)
{

}*/

