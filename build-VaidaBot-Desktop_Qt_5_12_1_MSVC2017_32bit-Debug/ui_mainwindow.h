/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHelp;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *mainVericalLayout;
    QGridLayout *gridLayout;
    QPushButton *browseFolderButton;
    QLabel *labNoText;
    QComboBox *labPicker;
    QLabel *YourNameLabel;
    QComboBox *pathComboBox;
    QLabel *destinationLabel;
    QPushButton *browseDestPushButton;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkName;
    QCheckBox *cumulateCheckBox;
    QCheckBox *checkDescription;
    QPushButton *startPushButton;
    QLabel *pictureBox;
    QLabel *logLabel;
    QMenuBar *menuBar;
    QMenu *menuNew;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(500, 500);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(500, 500));
        MainWindow->setMaximumSize(QSize(500, 500));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 461, 419));
        mainVericalLayout = new QVBoxLayout(layoutWidget);
        mainVericalLayout->setSpacing(6);
        mainVericalLayout->setContentsMargins(11, 11, 11, 11);
        mainVericalLayout->setObjectName(QString::fromUtf8("mainVericalLayout"));
        mainVericalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        browseFolderButton = new QPushButton(layoutWidget);
        browseFolderButton->setObjectName(QString::fromUtf8("browseFolderButton"));

        gridLayout->addWidget(browseFolderButton, 0, 2, 1, 1);

        labNoText = new QLabel(layoutWidget);
        labNoText->setObjectName(QString::fromUtf8("labNoText"));

        gridLayout->addWidget(labNoText, 2, 0, 1, 1);

        labPicker = new QComboBox(layoutWidget);
        labPicker->setObjectName(QString::fromUtf8("labPicker"));
        labPicker->setEnabled(true);

        gridLayout->addWidget(labPicker, 2, 1, 1, 2);

        YourNameLabel = new QLabel(layoutWidget);
        YourNameLabel->setObjectName(QString::fromUtf8("YourNameLabel"));

        gridLayout->addWidget(YourNameLabel, 1, 0, 1, 1);

        pathComboBox = new QComboBox(layoutWidget);
        pathComboBox->setObjectName(QString::fromUtf8("pathComboBox"));

        gridLayout->addWidget(pathComboBox, 0, 0, 1, 2);

        destinationLabel = new QLabel(layoutWidget);
        destinationLabel->setObjectName(QString::fromUtf8("destinationLabel"));

        gridLayout->addWidget(destinationLabel, 3, 0, 1, 2);

        browseDestPushButton = new QPushButton(layoutWidget);
        browseDestPushButton->setObjectName(QString::fromUtf8("browseDestPushButton"));

        gridLayout->addWidget(browseDestPushButton, 3, 2, 1, 1);

        nameLineEdit = new QLineEdit(layoutWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        gridLayout->addWidget(nameLineEdit, 1, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkName = new QCheckBox(layoutWidget);
        checkName->setObjectName(QString::fromUtf8("checkName"));

        horizontalLayout->addWidget(checkName);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        cumulateCheckBox = new QCheckBox(layoutWidget);
        cumulateCheckBox->setObjectName(QString::fromUtf8("cumulateCheckBox"));

        gridLayout->addWidget(cumulateCheckBox, 4, 2, 1, 1);

        checkDescription = new QCheckBox(layoutWidget);
        checkDescription->setObjectName(QString::fromUtf8("checkDescription"));

        gridLayout->addWidget(checkDescription, 4, 1, 1, 1);


        mainVericalLayout->addLayout(gridLayout);

        startPushButton = new QPushButton(layoutWidget);
        startPushButton->setObjectName(QString::fromUtf8("startPushButton"));

        mainVericalLayout->addWidget(startPushButton);

        pictureBox = new QLabel(layoutWidget);
        pictureBox->setObjectName(QString::fromUtf8("pictureBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pictureBox->sizePolicy().hasHeightForWidth());
        pictureBox->setSizePolicy(sizePolicy1);
        pictureBox->setMaximumSize(QSize(400, 200));
        pictureBox->setPixmap(QPixmap(QString::fromUtf8("../img.jpg")));
        pictureBox->setScaledContents(true);

        mainVericalLayout->addWidget(pictureBox);

        logLabel = new QLabel(layoutWidget);
        logLabel->setObjectName(QString::fromUtf8("logLabel"));

        mainVericalLayout->addWidget(logLabel);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 26));
        menuNew = new QMenu(menuBar);
        menuNew->setObjectName(QString::fromUtf8("menuNew"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setEnabled(true);
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuNew->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionHelp);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "HeliosBot Toolkit", nullptr));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", nullptr));
        browseFolderButton->setText(QApplication::translate("MainWindow", "Browse", nullptr));
        labNoText->setText(QApplication::translate("MainWindow", "Lab no: ", nullptr));
        YourNameLabel->setText(QApplication::translate("MainWindow", "Your Name: ", nullptr));
        destinationLabel->setText(QApplication::translate("MainWindow", "Destination not set", nullptr));
        browseDestPushButton->setText(QApplication::translate("MainWindow", "Browse", nullptr));
        checkName->setText(QApplication::translate("MainWindow", "Put Name", nullptr));
        cumulateCheckBox->setText(QApplication::translate("MainWindow", "Cumulate", nullptr));
        checkDescription->setText(QApplication::translate("MainWindow", "Put Description", nullptr));
        startPushButton->setText(QApplication::translate("MainWindow", "Start!", nullptr));
        pictureBox->setText(QString());
        logLabel->setText(QApplication::translate("MainWindow", "Idle...", nullptr));
        menuNew->setTitle(QApplication::translate("MainWindow", "New", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
