/********************************************************************************
** Form generated from reading UI file 'instructions.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCTIONS_H
#define UI_INSTRUCTIONS_H

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

class Ui_Instructions
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_Ok;
    QLabel *label_picholder;
    QLabel *label_backgroundimg;
    QLabel *label_step1;
    QLabel *label_step1_instructs;
    QLabel *label_step2;
    QLabel *label_step2_instructs;
    QLabel *label_step3;
    QLabel *label_step3_instructs;
    QLabel *label_tiitle_pic;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Instructions)
    {
        if (Instructions->objectName().isEmpty())
            Instructions->setObjectName(QStringLiteral("Instructions"));
        Instructions->setWindowModality(Qt::WindowModal);
        Instructions->resize(898, 612);
        centralWidget = new QWidget(Instructions);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_Ok = new QPushButton(centralWidget);
        pushButton_Ok->setObjectName(QStringLiteral("pushButton_Ok"));
        pushButton_Ok->setGeometry(QRect(740, 70, 121, 51));
        label_picholder = new QLabel(centralWidget);
        label_picholder->setObjectName(QStringLiteral("label_picholder"));
        label_picholder->setGeometry(QRect(650, 100, 231, 501));
        label_picholder->setPixmap(QPixmap(QString::fromUtf8("Resources/Images/Twitter_question_mark.png")));
        label_backgroundimg = new QLabel(centralWidget);
        label_backgroundimg->setObjectName(QStringLiteral("label_backgroundimg"));
        label_backgroundimg->setGeometry(QRect(-20, -10, 951, 711));
        label_backgroundimg->setPixmap(QPixmap(QString::fromUtf8("Resources/Images/Solid_white.svg.png")));
        label_step1 = new QLabel(centralWidget);
        label_step1->setObjectName(QStringLiteral("label_step1"));
        label_step1->setGeometry(QRect(10, 180, 61, 31));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_step1->setFont(font);
        label_step1_instructs = new QLabel(centralWidget);
        label_step1_instructs->setObjectName(QStringLiteral("label_step1_instructs"));
        label_step1_instructs->setGeometry(QRect(90, 171, 611, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(16);
        label_step1_instructs->setFont(font1);
        label_step1_instructs->setScaledContents(true);
        label_step1_instructs->setWordWrap(true);
        label_step2 = new QLabel(centralWidget);
        label_step2->setObjectName(QStringLiteral("label_step2"));
        label_step2->setGeometry(QRect(10, 290, 61, 31));
        label_step2->setFont(font);
        label_step2_instructs = new QLabel(centralWidget);
        label_step2_instructs->setObjectName(QStringLiteral("label_step2_instructs"));
        label_step2_instructs->setGeometry(QRect(90, 275, 601, 71));
        label_step2_instructs->setFont(font1);
        label_step2_instructs->setScaledContents(true);
        label_step2_instructs->setWordWrap(true);
        label_step3 = new QLabel(centralWidget);
        label_step3->setObjectName(QStringLiteral("label_step3"));
        label_step3->setGeometry(QRect(10, 400, 61, 31));
        label_step3->setFont(font);
        label_step3_instructs = new QLabel(centralWidget);
        label_step3_instructs->setObjectName(QStringLiteral("label_step3_instructs"));
        label_step3_instructs->setGeometry(QRect(90, 362, 591, 131));
        label_step3_instructs->setFont(font1);
        label_step3_instructs->setScaledContents(true);
        label_step3_instructs->setWordWrap(true);
        label_tiitle_pic = new QLabel(centralWidget);
        label_tiitle_pic->setObjectName(QStringLiteral("label_tiitle_pic"));
        label_tiitle_pic->setGeometry(QRect(90, 10, 601, 121));
        label_tiitle_pic->setPixmap(QPixmap(QString::fromUtf8("Resources/Images/tittle.png")));
        Instructions->setCentralWidget(centralWidget);
        label_backgroundimg->raise();
        pushButton_Ok->raise();
        label_picholder->raise();
        label_step1->raise();
        label_step1_instructs->raise();
        label_step2->raise();
        label_step2_instructs->raise();
        label_step3->raise();
        label_step3_instructs->raise();
        label_tiitle_pic->raise();
        statusBar = new QStatusBar(Instructions);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Instructions->setStatusBar(statusBar);

        retranslateUi(Instructions);
        QObject::connect(pushButton_Ok, SIGNAL(clicked()), Instructions, SLOT(close()));

        QMetaObject::connectSlotsByName(Instructions);
    } // setupUi

    void retranslateUi(QMainWindow *Instructions)
    {
        Instructions->setWindowTitle(QApplication::translate("Instructions", "Instructions", 0));
        pushButton_Ok->setText(QApplication::translate("Instructions", "Ok", 0));
        label_picholder->setText(QString());
        label_backgroundimg->setText(QString());
        label_step1->setText(QApplication::translate("Instructions", "Step 1: ", 0));
        label_step1_instructs->setText(QApplication::translate("Instructions", "The two colors of the checkers are red or black,and sometimes yellow. Decide whether you're going to be red or black and then click on Start.", 0));
        label_step2->setText(QApplication::translate("Instructions", "Step 2: ", 0));
        label_step2_instructs->setText(QApplication::translate("Instructions", "The first player drops one of their color checkers into one of the slots in the board. Then, players alternate turns dropping checkers into the board, either trying to build up their strategy to win, or block an opponent.", 0));
        label_step3->setText(QApplication::translate("Instructions", "Step 3: ", 0));
        label_step3_instructs->setText(QApplication::translate("Instructions", "The object of the game is to get four of your color checkers either vertically, horizontally, or diagonally. In order to officially declare victory, the player must recognize that they got four in a row and say so. By strategizing, a player may try to figure out what their opponent is thinking and then attempt to block their win by dropping a checker in a corresponding slot.", 0));
        label_tiitle_pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Instructions: public Ui_Instructions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTIONS_H
