#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QFileDialog>
#include <QStringList>
#include <fstream>
#include <QDebug>
#define LABMAX 15

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    folderPath(QStringList()),
    progressBar(nullptr),
    clock(new QTimer(this))
{
    ui->setupUi(this);

    for(int i=1; i< LABMAX;i++)
        ui->labPicker->addItem(QString::number(i));
    ui->pathComboBox->addItem("You didn't upload any files yet!");
    clock->setSingleShot(true);
    connect(clock, SIGNAL(timeout()), this, SLOT(clockShot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_browseFolderButton_clicked()
{
    folderPath =  QFileDialog::getOpenFileNames(this,
                                               tr("Select Files"), "../", tr("Txt (*.txt);; C/C++ (*.c *.cpp)"));

    if(folderPath.empty() == true)
        return ;

    ui->pathComboBox->clear();
    for(auto it : folderPath)
    {
        ui->pathComboBox->addItem(it);
    }
    destFolder = folderPath[0];
    for(int i = destFolder.length()-1; i>0;i--)
    {

        if(destFolder[i] == '/')
        {
            destFolder.chop(destFolder.length() - i-1);
            break;
        }

    }

    ui->destinationLabel->setText("Default folder is: " + destFolder);



}

void MainWindow::InitializeProgressBar(QProgressBar *bar)
{
    bar->setMinimum(0);
    bar->setMaximum(100);
    bar->setValue(0);
    bar->setGeometry(10,400,471,23);
}


void MainWindow::PrintToFile(std::ofstream &fout, std::ifstream &fin)
{
    if(ui->checkName->checkState() == Qt::CheckState::Checked)
        fout << "//" <<  ui->nameLineEdit->text().toStdString() << '\n';
    //Description Not Supported
    char c;
    while(fin.get(c))
        fout << c;


}

void MainWindow::DoLabs()
{
    if(progressBar != nullptr)
    {
        delete progressBar;
        progressBar = nullptr;

    }


    qDebug() << "Started!";
    qDebug() << folderPath.length();



    progressBar = new QProgressBar(this);
    InitializeProgressBar(progressBar);
    ui->mainVericalLayout->addWidget(progressBar, 0 ,Qt::Alignment(Qt::AlignmentFlag::AlignCenter));


    std::ifstream fileInput;
    std::ofstream fileOutput;



    QString finalStr;
    int currentIndex=1;

    for(auto it : folderPath)
    {
        progressBar->setValue((currentIndex * 100)/folderPath.length());
        fileInput.open(it.toStdString());
        finalStr =it;
        for(int i = it.length()-1; i>0;i--)
        {

            if(it[i] == '/')
            {
                finalStr.remove(0, i+1);
                break;
            }

        }
        finalStr = destFolder + ui->nameLineEdit->text() + "_Lab_" + ui->labPicker->itemText(ui->labPicker->currentIndex())+ "_Source_" + finalStr;

       qDebug() << currentIndex << ':' << finalStr;
       fileOutput.open(finalStr.toStdString());
       PrintToFile(fileOutput, fileInput);
       fileOutput.close();
       fileInput.close();
       currentIndex++;

    }

    ui->logLabel->setText("Finished!");


}

void MainWindow::DoCumulateLabs()
{


}


void MainWindow::on_checkDescription_stateChanged(int arg1)
{
    QMessageBox::StandardButton msg;
    msg = QMessageBox::information(this,"Not available yet", "This feature is just a conceptual one and may not be introduced into the final app.");
}

void MainWindow::on_startPushButton_clicked()
{
    if(ui->pathComboBox->itemText(0) == "You didn't upload any files yet!")
        return;
    if(ui->nameLineEdit->text().length() < 2)
        return;


    if(ui->cumulateCheckBox->checkState() != Qt::CheckState::Checked)
        DoLabs();
    else DoCumulateLabs();

    clock->start(10000);
}


void MainWindow::clockShot()
{
    ui->logLabel->setText("Idle...");
    progressBar->setValue(0);
}
void MainWindow::on_browseDestPushButton_clicked()
{
    destFolder = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                               "/home",
                                                               QFileDialog::ShowDirsOnly
                                                               | QFileDialog::DontResolveSymlinks);
    destFolder += "/";

    if(destFolder == "")
        return ;

    ui->destinationLabel->setText(destFolder);
    progressBar->setValue(0);
    ui->logLabel->setText("Idle...");


}




void MainWindow::on_actionHelp_triggered()
{
   QMessageBox::StandardButton msg = QMessageBox::information(this,"Asking for help", "This is an app that automates the process of uploading sources "
                                                                                      "on helios lab. Use Browse to select files (the files must be named"
                                                                                      " number.txt or .cpp where number is the number of the exercise."
                                                                                      " The app will give your files the wanted format Name_LabX_SourceY.txt."
                                                                                      " Put name will put your name as a comment in the sources."
                                                              );
}
