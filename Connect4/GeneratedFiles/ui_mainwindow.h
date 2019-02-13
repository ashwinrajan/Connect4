/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_play;
    QLabel *label_picholder;
    QPushButton *pushButton_leaderboard;
    QPushButton *pushButton_instructions;
    QPushButton *pushButton_exit;
    QLabel *label_picholder2;
    QLabel *label;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(819, 530);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_play = new QPushButton(centralWidget);
        pushButton_play->setObjectName(QStringLiteral("pushButton_play"));
        pushButton_play->setGeometry(QRect(670, 90, 121, 51));
        label_picholder = new QLabel(centralWidget);
        label_picholder->setObjectName(QStringLiteral("label_picholder"));
        label_picholder->setGeometry(QRect(0, -20, 651, 551));
        label_picholder->setPixmap(QPixmap(QString::fromUtf8("Resources/Images/Connect4Board.PNG")));
        pushButton_leaderboard = new QPushButton(centralWidget);
        pushButton_leaderboard->setObjectName(QStringLiteral("pushButton_leaderboard"));
        pushButton_leaderboard->setGeometry(QRect(670, 270, 121, 51));
        pushButton_instructions = new QPushButton(centralWidget);
        pushButton_instructions->setObjectName(QStringLiteral("pushButton_instructions"));
        pushButton_instructions->setGeometry(QRect(670, 180, 121, 51));
        pushButton_exit = new QPushButton(centralWidget);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(670, 360, 121, 51));
        label_picholder2 = new QLabel(centralWidget);
        label_picholder2->setObjectName(QStringLiteral("label_picholder2"));
        label_picholder2->setGeometry(QRect(0, 0, 821, 571));
        label_picholder2->setPixmap(QPixmap(QString::fromUtf8("Resources/Images/Solid_white.svg.png")));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(680, 10, 101, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setScaledContents(true);
        label->setWordWrap(true);
        MainWindow->setCentralWidget(centralWidget);
        label_picholder2->raise();
        pushButton_play->raise();
        label_picholder->raise();
        pushButton_leaderboard->raise();
        pushButton_instructions->raise();
        pushButton_exit->raise();
        label->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Connect 4", 0));
        pushButton_play->setText(QApplication::translate("MainWindow", "Play", 0));
        label_picholder->setText(QString());
        pushButton_leaderboard->setText(QApplication::translate("MainWindow", "Leaderboard", 0));
        pushButton_instructions->setText(QApplication::translate("MainWindow", "Instructions", 0));
        pushButton_exit->setText(QApplication::translate("MainWindow", "Exit", 0));
        label_picholder2->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Connect4", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
