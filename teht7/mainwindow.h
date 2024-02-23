#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void timeout();

private slots:
    void updateProgressBar();

   // void setGameInfoText(QString, short);

    void on_btnSwitchPlayer1_clicked();

    void on_btnSwitchPlayer2_clicked();

    void on_btnGameTime120sec_clicked();

    void on_btnGameTime5min_clicked();

    void on_btnStartGame_clicked();

    void on_btnStopGame_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *gameTimer;

    short player1Time;
    short player2Time;
    short gameTime;
    short currentPlayer;
};
#endif // MAINWINDOW_H
