/********************************************************************************
** Form generated from reading UI file 'leaderboard.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEADERBOARD_H
#define UI_LEADERBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Leaderboard
{
public:
    QWidget *centralWidget;
    QLabel *label_picholder;
    QLabel *label_title;
    QPushButton *pushButton_ok;
    QLabel *label_picholder2;
    QLabel *label_winnersName_9;
    QListView *listView;
    QLabel *label;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Leaderboard)
    {
        if (Leaderboard->objectName().isEmpty())
            Leaderboard->setObjectName(QStringLiteral("Leaderboard"));
        Leaderboard->resize(470, 448);
        centralWidget = new QWidget(Leaderboard);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_picholder = new QLabel(centralWidget);
        label_picholder->setObjectName(QStringLiteral("label_picholder"));
        label_picholder->setGeometry(QRect(-10, 0, 631, 431));
        label_picholder->setPixmap(QPixmap(QString::fromUtf8("Resources/Images/Solid_white.svg.png")));
        label_title = new QLabel(centralWidget);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(164, 10, 121, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label_title->setFont(font);
        label_title->setScaledContents(true);
        label_title->setWordWrap(true);
        pushButton_ok = new QPushButton(centralWidget);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(343, 100, 101, 41));
        label_picholder2 = new QLabel(centralWidget);
        label_picholder2->setObjectName(QStringLiteral("label_picholder2"));
        label_picholder2->setGeometry(QRect(330, 200, 131, 161));
        label_picholder2->setPixmap(QPixmap(QString::fromUtf8("Resources/Images/17-128.png")));
        label_winnersName_9 = new QLabel(centralWidget);
        label_winnersName_9->setObjectName(QStringLiteral("label_winnersName_9"));
        label_winnersName_9->setGeometry(QRect(150, 400, 231, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(12);
        label_winnersName_9->setFont(font1);
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(50, 100, 261, 311));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 70, 161, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setWeight(50);
        label->setFont(font2);
        Leaderboard->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Leaderboard);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Leaderboard->setStatusBar(statusBar);

        retranslateUi(Leaderboard);
        QObject::connect(pushButton_ok, SIGNAL(clicked()), Leaderboard, SLOT(close()));

        QMetaObject::connectSlotsByName(Leaderboard);
    } // setupUi

    void retranslateUi(QMainWindow *Leaderboard)
    {
        Leaderboard->setWindowTitle(QApplication::translate("Leaderboard", "Connect4", 0));
        label_picholder->setText(QString());
        label_title->setText(QApplication::translate("Leaderboard", "Leaderboard", 0));
        pushButton_ok->setText(QApplication::translate("Leaderboard", "Ok", 0));
        label_picholder2->setText(QString());
        label_winnersName_9->setText(QString());
        label->setText(QApplication::translate("Leaderboard", "Names(Winners Only): ", 0));
    } // retranslateUi

};

namespace Ui {
    class Leaderboard: public Ui_Leaderboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEADERBOARD_H
