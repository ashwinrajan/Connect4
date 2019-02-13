/********************************************************************************
** Form generated from reading UI file 'resultwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTWINDOW_H
#define UI_RESULTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_resultwindow
{
public:
    QWidget *centralWidget;
    QLabel *_backgroundimage;
    QLabel *label_tittle;
    QLabel *label_picholder1;
    QLabel *label_picholder2;
    QLabel *label_name;
    QLineEdit *lineEdit;
    QPushButton *pushButton_ok;

    void setupUi(QMainWindow *resultwindow)
    {
        if (resultwindow->objectName().isEmpty())
            resultwindow->setObjectName(QStringLiteral("resultwindow"));
        resultwindow->resize(434, 199);
        centralWidget = new QWidget(resultwindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        _backgroundimage = new QLabel(centralWidget);
        _backgroundimage->setObjectName(QStringLiteral("_backgroundimage"));
        _backgroundimage->setGeometry(QRect(-50, -20, 631, 341));
        _backgroundimage->setPixmap(QPixmap(QString::fromUtf8("Resources/Images/Solid_white.svg.png")));
        label_tittle = new QLabel(centralWidget);
        label_tittle->setObjectName(QStringLiteral("label_tittle"));
        label_tittle->setGeometry(QRect(110, 30, 221, 51));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        label_tittle->setFont(font);
        label_picholder1 = new QLabel(centralWidget);
        label_picholder1->setObjectName(QStringLiteral("label_picholder1"));
        label_picholder1->setGeometry(QRect(20, 10, 81, 81));
        label_picholder1->setPixmap(QPixmap(QString::fromUtf8("Resources/Images/winner.png")));
        label_picholder2 = new QLabel(centralWidget);
        label_picholder2->setObjectName(QStringLiteral("label_picholder2"));
        label_picholder2->setGeometry(QRect(330, 10, 81, 81));
        label_picholder2->setPixmap(QPixmap(QString::fromUtf8("Resources/Images/winner.png")));
        label_name = new QLabel(centralWidget);
        label_name->setObjectName(QStringLiteral("label_name"));
        label_name->setGeometry(QRect(10, 100, 111, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(16);
        label_name->setFont(font1);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 102, 271, 31));
        pushButton_ok = new QPushButton(centralWidget);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(318, 150, 75, 23));
        resultwindow->setCentralWidget(centralWidget);

        retranslateUi(resultwindow);
        QObject::connect(pushButton_ok, SIGNAL(clicked()), resultwindow, SLOT(close()));

        QMetaObject::connectSlotsByName(resultwindow);
    } // setupUi

    void retranslateUi(QMainWindow *resultwindow)
    {
        resultwindow->setWindowTitle(QApplication::translate("resultwindow", "Connect4", 0));
        _backgroundimage->setText(QString());
        label_tittle->setText(QApplication::translate("resultwindow", "YOU HAVE WON!!!", 0));
        label_picholder1->setText(QString());
        label_picholder2->setText(QString());
        label_name->setText(QApplication::translate("resultwindow", "Enter your name:", 0));
        pushButton_ok->setText(QApplication::translate("resultwindow", "ok", 0));
    } // retranslateUi

};

namespace Ui {
    class resultwindow: public Ui_resultwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTWINDOW_H
