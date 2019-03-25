#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QStringList>
#include <QProgressBar>
#include <fstream>
#include<QTimer>


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
    void on_browseFolderButton_clicked();



    void on_checkDescription_stateChanged(int arg1);

    void on_startPushButton_clicked();


    void on_browseDestPushButton_clicked();

    void on_actionHelp_triggered();
    void clockShot();

private:
    void DoLabs();
    void DoCumulateLabs();
    void InitializeProgressBar(QProgressBar *);
    void PrintToFile(std::ofstream &fout, std::ifstream &fin);
private:
    Ui::MainWindow *ui;
    QStringList folderPath;
    QString destFolder;
    QProgressBar *progressBar;
    QTimer *clock;





};

#endif // MAINWINDOW_H
