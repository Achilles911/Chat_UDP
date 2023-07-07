#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUdpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


public slots:
    void ReadingData();
    QString CountingDate();
    QString FotoProfil(int a);

private slots:
    void on_SendingData_clicked();
    void on_selectFile_clicked();






private:
    Ui::MainWindow *ui;
    QUdpSocket *udpSocket;

};
#endif // MAINWINDOW_H
