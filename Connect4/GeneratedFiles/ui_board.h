/********************************************************************************
** Form generated from reading UI file 'board.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARD_H
#define UI_BOARD_H

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

class Ui_Board
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_backgroundimage;
    QLabel *label_title;
    QLabel *label_boardpic;
    QLabel *label_chooseyourtoken;
    QLabel *label_black_token;
    QLabel *label_playerchoice1;
    QLabel *label_red_token;
    QLabel *label_playerchoice2;
    QPushButton *pushButton_black_token;
    QPushButton *pushButton_red_token;
    QPushButton *pushButton_c1;
    QPushButton *pushButton_c2;
    QPushButton *pushButton_c3;
    QPushButton *pushButton_c4;
    QPushButton *pushButton_c5;
    QPushButton *pushButton_c6;
    QPushButton *pushButton_c7;
    QLabel *label_turn;
    QLabel *label_turnValue;
    QLabel *label_row5_col0;
    QLabel *label_row4_col0;
    QLabel *label_row3_col0;
    QLabel *label_row2_col0;
    QLabel *label_row1_col0;
    QLabel *label_row0_col0;
    QLabel *label_row5_col1;
    QLabel *label_row4_col1;
    QLabel *label_row3_col1;
    QLabel *label_row2_col1;
    QLabel *label_row1_col1;
    QLabel *label_row0_col1;
    QLabel *label_row5_col2;
    QLabel *label_row4_col2;
    QLabel *label_row3_col2;
    QLabel *label_row2_col2;
    QLabel *label_row1_col2;
    QLabel *label_row0_col2;
    QLabel *label_row5_col3;
    QLabel *label_row4_col3;
    QLabel *label_row3_col3;
    QLabel *label_row2_col3;
    QLabel *label_row1_col3;
    QLabel *label_row0_col3;
    QLabel *label_row5_col4;
    QLabel *label_row4_col4;
    QLabel *label_row3_col4;
    QLabel *label_row2_col4;
    QLabel *label_row1_col4;
    QLabel *label_row0_col4;
    QLabel *label_row5_col5;
    QLabel *label_row4_col5;
    QLabel *label_row3_col5;
    QLabel *label_row2_col5;
    QLabel *label_row1_col5;
    QLabel *label_row0_col5;
    QLabel *label_row5_col6;
    QLabel *label_row4_col6;
    QLabel *label_row3_col6;
    QLabel *label_row2_col6;
    QLabel *label_row1_col6;
    QLabel *label_row0_col6;
    QLabel *label_whoWon;
    QLabel *label_gamestarted;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Board)
    {
        if (Board->objectName().isEmpty())
            Board->setObjectName(QStringLiteral("Board"));
        Board->resize(788, 666);
        centralWidget = new QWidget(Board);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(652, 164, 131, 51));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(652, 222, 131, 51));
        label_backgroundimage = new QLabel(centralWidget);
        label_backgroundimage->setObjectName(QStringLiteral("label_backgroundimage"));
        label_backgroundimage->setGeometry(QRect(-30, -40, 1081, 801));
        label_backgroundimage->setPixmap(QPixmap(QString::fromUtf8("Resources/Images/Solid_white.svg.png")));
        label_title = new QLabel(centralWidget);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(80, 0, 601, 111));
        label_title->setPixmap(QPixmap(QString::fromUtf8("Resources/Images/tittle.png")));
        label_boardpic = new QLabel(centralWidget);
        label_boardpic->setObjectName(QStringLiteral("label_boardpic"));
        label_boardpic->setGeometry(QRect(0, 160, 651, 491));
        label_boardpic->setPixmap(QPixmap(QString::fromUtf8("Resources/Images/Connect4Board1.png")));
        label_chooseyourtoken = new QLabel(centralWidget);
        label_chooseyourtoken->setObjectName(QStringLiteral("label_chooseyourtoken"));
        label_chooseyourtoken->setGeometry(QRect(656, 280, 121, 31));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_chooseyourtoken->setFont(font);
        label_black_token = new QLabel(centralWidget);
        label_black_token->setObjectName(QStringLiteral("label_black_token"));
        label_black_token->setGeometry(QRect(680, 320, 61, 71));
        label_black_token->setPixmap(QPixmap(QString::fromUtf8("Resources/Images/4row_black_small.png")));
        label_playerchoice1 = new QLabel(centralWidget);
        label_playerchoice1->setObjectName(QStringLiteral("label_playerchoice1"));
        label_playerchoice1->setGeometry(QRect(660, 400, 111, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(14);
        label_playerchoice1->setFont(font1);
        label_red_token = new QLabel(centralWidget);
        label_red_token->setObjectName(QStringLiteral("label_red_token"));
        label_red_token->setGeometry(QRect(683, 438, 61, 71));
        label_red_token->setPixmap(QPixmap(QString::fromUtf8("Resources/Images/4row_red_small.png")));
        label_playerchoice2 = new QLabel(centralWidget);
        label_playerchoice2->setObjectName(QStringLiteral("label_playerchoice2"));
        label_playerchoice2->setGeometry(QRect(660, 520, 111, 21));
        label_playerchoice2->setFont(font1);
        pushButton_black_token = new QPushButton(centralWidget);
        pushButton_black_token->setObjectName(QStringLiteral("pushButton_black_token"));
        pushButton_black_token->setGeometry(QRect(681, 324, 61, 61));
        pushButton_black_token->setFlat(true);
        pushButton_red_token = new QPushButton(centralWidget);
        pushButton_red_token->setObjectName(QStringLiteral("pushButton_red_token"));
        pushButton_red_token->setGeometry(QRect(684, 443, 61, 61));
        pushButton_red_token->setFlat(true);
        pushButton_c1 = new QPushButton(centralWidget);
        pushButton_c1->setObjectName(QStringLiteral("pushButton_c1"));
        pushButton_c1->setEnabled(false);
        pushButton_c1->setGeometry(QRect(18, 116, 61, 51));
        pushButton_c1->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_c1->setMouseTracking(false);
        pushButton_c1->setAutoFillBackground(false);
        pushButton_c1->setStyleSheet(QLatin1String("QPushButton#pushButton_c1:pressed {\n"
"	border-image: url(:/Images/stacks_image_764.png);\n"
"  \n"
" }\n"
"\n"
" QPushButton#pushButton_c1:hover {\n"
"	border-image: url(:/Images/stacks_image_764.png);\n"
" }"));
        pushButton_c1->setIconSize(QSize(48, 48));
        pushButton_c1->setAutoDefault(false);
        pushButton_c1->setFlat(true);
        pushButton_c2 = new QPushButton(centralWidget);
        pushButton_c2->setObjectName(QStringLiteral("pushButton_c2"));
        pushButton_c2->setEnabled(false);
        pushButton_c2->setGeometry(QRect(109, 119, 61, 51));
        pushButton_c2->setStyleSheet(QLatin1String("QPushButton#pushButton_c2:pressed {\n"
"	border-image: url(:/Images/stacks_image_764.png);\n"
"  \n"
" }\n"
"\n"
" QPushButton#pushButton_c2:hover {\n"
"	border-image: url(:/Images/stacks_image_764.png);\n"
" }"));
        pushButton_c2->setIconSize(QSize(48, 48));
        pushButton_c2->setFlat(true);
        pushButton_c3 = new QPushButton(centralWidget);
        pushButton_c3->setObjectName(QStringLiteral("pushButton_c3"));
        pushButton_c3->setEnabled(false);
        pushButton_c3->setGeometry(QRect(200, 118, 61, 51));
        pushButton_c3->setStyleSheet(QLatin1String("QPushButton#pushButton_c3:pressed {\n"
"	border-image: url(:/Images/stacks_image_764.png);\n"
"  \n"
" }\n"
"\n"
" QPushButton#pushButton_c3:hover {\n"
"	border-image: url(:/Images/stacks_image_764.png);\n"
" }"));
        pushButton_c3->setIconSize(QSize(48, 48));
        pushButton_c3->setFlat(true);
        pushButton_c4 = new QPushButton(centralWidget);
        pushButton_c4->setObjectName(QStringLiteral("pushButton_c4"));
        pushButton_c4->setEnabled(false);
        pushButton_c4->setGeometry(QRect(289, 118, 61, 51));
        pushButton_c4->setStyleSheet(QLatin1String("QPushButton#pushButton_c4:pressed {\n"
"	border-image: url(:/Images/stacks_image_764.png);\n"
"  \n"
" }\n"
"\n"
" QPushButton#pushButton_c4:hover {\n"
"	border-image: url(:/Images/stacks_image_764.png);\n"
" }"));
        pushButton_c4->setIconSize(QSize(48, 48));
        pushButton_c4->setFlat(true);
        pushButton_c5 = new QPushButton(centralWidget);
        pushButton_c5->setObjectName(QStringLiteral("pushButton_c5"));
        pushButton_c5->setEnabled(false);
        pushButton_c5->setGeometry(QRect(377, 117, 61, 51));
        pushButton_c5->setStyleSheet(QLatin1String("QPushButton#pushButton_c5:pressed {\n"
"	border-image: url(:/Images/stacks_image_764.png);\n"
"  \n"
" }\n"
"\n"
" QPushButton#pushButton_c5:hover {\n"
"	border-image: url(:/Images/stacks_image_764.png);\n"
" }"));
        pushButton_c5->setIconSize(QSize(48, 48));
        pushButton_c5->setFlat(true);
        pushButton_c6 = new QPushButton(centralWidget);
        pushButton_c6->setObjectName(QStringLiteral("pushButton_c6"));
        pushButton_c6->setEnabled(false);
        pushButton_c6->setGeometry(QRect(470, 117, 61, 51));
        pushButton_c6->setStyleSheet(QLatin1String("QPushButton#pushButton_c6:pressed {\n"
"	border-image: url(:/Images/stacks_image_764.png);\n"
"  \n"
" }\n"
"\n"
" QPushButton#pushButton_c6:hover {\n"
"	border-image: url(:/Images/stacks_image_764.png);\n"
" }"));
        pushButton_c6->setIconSize(QSize(48, 48));
        pushButton_c6->setFlat(true);
        pushButton_c7 = new QPushButton(centralWidget);
        pushButton_c7->setObjectName(QStringLiteral("pushButton_c7"));
        pushButton_c7->setEnabled(false);
        pushButton_c7->setGeometry(QRect(561, 117, 61, 51));
        pushButton_c7->setStyleSheet(QLatin1String("QPushButton#pushButton_c7:pressed {\n"
"	border-image: url(:/Images/stacks_image_764.png);\n"
"  \n"
" }\n"
"\n"
" QPushButton#pushButton_c7:hover {\n"
"	border-image: url(:/Images/stacks_image_764.png);\n"
" }"));
        pushButton_c7->setIconSize(QSize(48, 48));
        pushButton_c7->setFlat(true);
        label_turn = new QLabel(centralWidget);
        label_turn->setObjectName(QStringLiteral("label_turn"));
        label_turn->setGeometry(QRect(650, 610, 41, 21));
        label_turn->setFont(font);
        label_turnValue = new QLabel(centralWidget);
        label_turnValue->setObjectName(QStringLiteral("label_turnValue"));
        label_turnValue->setGeometry(QRect(690, 613, 91, 20));
        label_turnValue->setFont(font1);
        label_row5_col0 = new QLabel(centralWidget);
        label_row5_col0->setObjectName(QStringLiteral("label_row5_col0"));
        label_row5_col0->setGeometry(QRect(10, 570, 81, 71));
        label_row5_col0->setScaledContents(true);
        label_row4_col0 = new QLabel(centralWidget);
        label_row4_col0->setObjectName(QStringLiteral("label_row4_col0"));
        label_row4_col0->setGeometry(QRect(10, 490, 81, 71));
        label_row4_col0->setScaledContents(true);
        label_row3_col0 = new QLabel(centralWidget);
        label_row3_col0->setObjectName(QStringLiteral("label_row3_col0"));
        label_row3_col0->setGeometry(QRect(10, 410, 81, 71));
        label_row3_col0->setScaledContents(true);
        label_row2_col0 = new QLabel(centralWidget);
        label_row2_col0->setObjectName(QStringLiteral("label_row2_col0"));
        label_row2_col0->setGeometry(QRect(10, 330, 81, 71));
        label_row2_col0->setScaledContents(true);
        label_row1_col0 = new QLabel(centralWidget);
        label_row1_col0->setObjectName(QStringLiteral("label_row1_col0"));
        label_row1_col0->setGeometry(QRect(10, 250, 81, 71));
        label_row1_col0->setScaledContents(true);
        label_row0_col0 = new QLabel(centralWidget);
        label_row0_col0->setObjectName(QStringLiteral("label_row0_col0"));
        label_row0_col0->setGeometry(QRect(10, 170, 81, 71));
        label_row0_col0->setScaledContents(true);
        label_row5_col1 = new QLabel(centralWidget);
        label_row5_col1->setObjectName(QStringLiteral("label_row5_col1"));
        label_row5_col1->setGeometry(QRect(100, 570, 81, 71));
        label_row5_col1->setScaledContents(true);
        label_row4_col1 = new QLabel(centralWidget);
        label_row4_col1->setObjectName(QStringLiteral("label_row4_col1"));
        label_row4_col1->setGeometry(QRect(100, 490, 81, 71));
        label_row4_col1->setScaledContents(true);
        label_row3_col1 = new QLabel(centralWidget);
        label_row3_col1->setObjectName(QStringLiteral("label_row3_col1"));
        label_row3_col1->setGeometry(QRect(100, 410, 81, 71));
        label_row3_col1->setScaledContents(true);
        label_row2_col1 = new QLabel(centralWidget);
        label_row2_col1->setObjectName(QStringLiteral("label_row2_col1"));
        label_row2_col1->setGeometry(QRect(100, 330, 81, 71));
        label_row2_col1->setScaledContents(true);
        label_row1_col1 = new QLabel(centralWidget);
        label_row1_col1->setObjectName(QStringLiteral("label_row1_col1"));
        label_row1_col1->setGeometry(QRect(100, 250, 81, 71));
        label_row1_col1->setScaledContents(true);
        label_row0_col1 = new QLabel(centralWidget);
        label_row0_col1->setObjectName(QStringLiteral("label_row0_col1"));
        label_row0_col1->setGeometry(QRect(100, 170, 81, 71));
        label_row0_col1->setScaledContents(true);
        label_row5_col2 = new QLabel(centralWidget);
        label_row5_col2->setObjectName(QStringLiteral("label_row5_col2"));
        label_row5_col2->setGeometry(QRect(190, 570, 81, 71));
        label_row5_col2->setScaledContents(true);
        label_row4_col2 = new QLabel(centralWidget);
        label_row4_col2->setObjectName(QStringLiteral("label_row4_col2"));
        label_row4_col2->setGeometry(QRect(190, 490, 81, 71));
        label_row4_col2->setScaledContents(true);
        label_row3_col2 = new QLabel(centralWidget);
        label_row3_col2->setObjectName(QStringLiteral("label_row3_col2"));
        label_row3_col2->setGeometry(QRect(190, 410, 81, 71));
        label_row3_col2->setScaledContents(true);
        label_row2_col2 = new QLabel(centralWidget);
        label_row2_col2->setObjectName(QStringLiteral("label_row2_col2"));
        label_row2_col2->setGeometry(QRect(190, 330, 81, 71));
        label_row2_col2->setScaledContents(true);
        label_row1_col2 = new QLabel(centralWidget);
        label_row1_col2->setObjectName(QStringLiteral("label_row1_col2"));
        label_row1_col2->setGeometry(QRect(190, 250, 81, 71));
        label_row1_col2->setScaledContents(true);
        label_row0_col2 = new QLabel(centralWidget);
        label_row0_col2->setObjectName(QStringLiteral("label_row0_col2"));
        label_row0_col2->setGeometry(QRect(190, 170, 81, 71));
        label_row0_col2->setScaledContents(true);
        label_row5_col3 = new QLabel(centralWidget);
        label_row5_col3->setObjectName(QStringLiteral("label_row5_col3"));
        label_row5_col3->setGeometry(QRect(280, 570, 81, 71));
        label_row5_col3->setScaledContents(true);
        label_row4_col3 = new QLabel(centralWidget);
        label_row4_col3->setObjectName(QStringLiteral("label_row4_col3"));
        label_row4_col3->setGeometry(QRect(280, 490, 81, 71));
        label_row4_col3->setScaledContents(true);
        label_row3_col3 = new QLabel(centralWidget);
        label_row3_col3->setObjectName(QStringLiteral("label_row3_col3"));
        label_row3_col3->setGeometry(QRect(280, 410, 81, 71));
        label_row3_col3->setScaledContents(true);
        label_row2_col3 = new QLabel(centralWidget);
        label_row2_col3->setObjectName(QStringLiteral("label_row2_col3"));
        label_row2_col3->setGeometry(QRect(280, 330, 81, 71));
        label_row2_col3->setScaledContents(true);
        label_row1_col3 = new QLabel(centralWidget);
        label_row1_col3->setObjectName(QStringLiteral("label_row1_col3"));
        label_row1_col3->setGeometry(QRect(280, 250, 81, 71));
        label_row1_col3->setScaledContents(true);
        label_row0_col3 = new QLabel(centralWidget);
        label_row0_col3->setObjectName(QStringLiteral("label_row0_col3"));
        label_row0_col3->setGeometry(QRect(280, 170, 81, 71));
        label_row0_col3->setScaledContents(true);
        label_row5_col4 = new QLabel(centralWidget);
        label_row5_col4->setObjectName(QStringLiteral("label_row5_col4"));
        label_row5_col4->setGeometry(QRect(370, 570, 81, 71));
        label_row5_col4->setScaledContents(true);
        label_row4_col4 = new QLabel(centralWidget);
        label_row4_col4->setObjectName(QStringLiteral("label_row4_col4"));
        label_row4_col4->setGeometry(QRect(370, 490, 81, 71));
        label_row4_col4->setScaledContents(true);
        label_row3_col4 = new QLabel(centralWidget);
        label_row3_col4->setObjectName(QStringLiteral("label_row3_col4"));
        label_row3_col4->setGeometry(QRect(370, 410, 81, 71));
        label_row3_col4->setScaledContents(true);
        label_row2_col4 = new QLabel(centralWidget);
        label_row2_col4->setObjectName(QStringLiteral("label_row2_col4"));
        label_row2_col4->setGeometry(QRect(370, 330, 81, 71));
        label_row2_col4->setScaledContents(true);
        label_row1_col4 = new QLabel(centralWidget);
        label_row1_col4->setObjectName(QStringLiteral("label_row1_col4"));
        label_row1_col4->setGeometry(QRect(370, 250, 81, 71));
        label_row1_col4->setScaledContents(true);
        label_row0_col4 = new QLabel(centralWidget);
        label_row0_col4->setObjectName(QStringLiteral("label_row0_col4"));
        label_row0_col4->setGeometry(QRect(370, 170, 81, 71));
        label_row0_col4->setScaledContents(true);
        label_row5_col5 = new QLabel(centralWidget);
        label_row5_col5->setObjectName(QStringLiteral("label_row5_col5"));
        label_row5_col5->setGeometry(QRect(460, 570, 81, 71));
        label_row5_col5->setScaledContents(true);
        label_row4_col5 = new QLabel(centralWidget);
        label_row4_col5->setObjectName(QStringLiteral("label_row4_col5"));
        label_row4_col5->setGeometry(QRect(460, 490, 81, 71));
        label_row4_col5->setScaledContents(true);
        label_row3_col5 = new QLabel(centralWidget);
        label_row3_col5->setObjectName(QStringLiteral("label_row3_col5"));
        label_row3_col5->setGeometry(QRect(460, 410, 81, 71));
        label_row3_col5->setScaledContents(true);
        label_row2_col5 = new QLabel(centralWidget);
        label_row2_col5->setObjectName(QStringLiteral("label_row2_col5"));
        label_row2_col5->setGeometry(QRect(460, 330, 81, 71));
        label_row2_col5->setScaledContents(true);
        label_row1_col5 = new QLabel(centralWidget);
        label_row1_col5->setObjectName(QStringLiteral("label_row1_col5"));
        label_row1_col5->setGeometry(QRect(460, 250, 81, 71));
        label_row1_col5->setScaledContents(true);
        label_row0_col5 = new QLabel(centralWidget);
        label_row0_col5->setObjectName(QStringLiteral("label_row0_col5"));
        label_row0_col5->setGeometry(QRect(460, 170, 81, 71));
        label_row0_col5->setScaledContents(true);
        label_row5_col6 = new QLabel(centralWidget);
        label_row5_col6->setObjectName(QStringLiteral("label_row5_col6"));
        label_row5_col6->setGeometry(QRect(550, 570, 81, 71));
        label_row5_col6->setScaledContents(true);
        label_row4_col6 = new QLabel(centralWidget);
        label_row4_col6->setObjectName(QStringLiteral("label_row4_col6"));
        label_row4_col6->setGeometry(QRect(550, 490, 81, 71));
        label_row4_col6->setScaledContents(true);
        label_row3_col6 = new QLabel(centralWidget);
        label_row3_col6->setObjectName(QStringLiteral("label_row3_col6"));
        label_row3_col6->setGeometry(QRect(550, 410, 81, 71));
        label_row3_col6->setScaledContents(true);
        label_row2_col6 = new QLabel(centralWidget);
        label_row2_col6->setObjectName(QStringLiteral("label_row2_col6"));
        label_row2_col6->setGeometry(QRect(550, 330, 81, 71));
        label_row2_col6->setScaledContents(true);
        label_row1_col6 = new QLabel(centralWidget);
        label_row1_col6->setObjectName(QStringLiteral("label_row1_col6"));
        label_row1_col6->setGeometry(QRect(550, 250, 81, 71));
        label_row1_col6->setScaledContents(true);
        label_row0_col6 = new QLabel(centralWidget);
        label_row0_col6->setObjectName(QStringLiteral("label_row0_col6"));
        label_row0_col6->setGeometry(QRect(550, 170, 81, 71));
        label_row0_col6->setScaledContents(true);
        label_whoWon = new QLabel(centralWidget);
        label_whoWon->setObjectName(QStringLiteral("label_whoWon"));
        label_whoWon->setGeometry(QRect(656, 560, 121, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        label_whoWon->setFont(font2);
        label_gamestarted = new QLabel(centralWidget);
        label_gamestarted->setObjectName(QStringLiteral("label_gamestarted"));
        label_gamestarted->setGeometry(QRect(650, 580, 131, 21));
        Board->setCentralWidget(centralWidget);
        label_backgroundimage->raise();
        pushButton->raise();
        pushButton_2->raise();
        label_title->raise();
        label_boardpic->raise();
        label_chooseyourtoken->raise();
        label_black_token->raise();
        label_playerchoice1->raise();
        label_red_token->raise();
        label_playerchoice2->raise();
        pushButton_black_token->raise();
        pushButton_red_token->raise();
        pushButton_c1->raise();
        pushButton_c2->raise();
        pushButton_c3->raise();
        pushButton_c4->raise();
        pushButton_c5->raise();
        pushButton_c6->raise();
        pushButton_c7->raise();
        label_turn->raise();
        label_turnValue->raise();
        label_row4_col0->raise();
        label_row3_col0->raise();
        label_row2_col0->raise();
        label_row1_col0->raise();
        label_row0_col0->raise();
        label_row5_col0->raise();
        label_row5_col1->raise();
        label_row4_col1->raise();
        label_row3_col1->raise();
        label_row2_col1->raise();
        label_row1_col1->raise();
        label_row0_col1->raise();
        label_row5_col2->raise();
        label_row4_col2->raise();
        label_row3_col2->raise();
        label_row2_col2->raise();
        label_row1_col2->raise();
        label_row0_col2->raise();
        label_row5_col3->raise();
        label_row4_col3->raise();
        label_row3_col3->raise();
        label_row2_col3->raise();
        label_row1_col3->raise();
        label_row0_col3->raise();
        label_row5_col4->raise();
        label_row4_col4->raise();
        label_row3_col4->raise();
        label_row2_col4->raise();
        label_row1_col4->raise();
        label_row0_col4->raise();
        label_row5_col5->raise();
        label_row4_col5->raise();
        label_row3_col5->raise();
        label_row2_col5->raise();
        label_row1_col5->raise();
        label_row0_col5->raise();
        label_row5_col6->raise();
        label_row4_col6->raise();
        label_row3_col6->raise();
        label_row2_col6->raise();
        label_row1_col6->raise();
        label_row0_col6->raise();
        label_whoWon->raise();
        label_gamestarted->raise();
        statusBar = new QStatusBar(Board);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Board->setStatusBar(statusBar);

        retranslateUi(Board);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Board, SLOT(close()));

        pushButton_c1->setDefault(false);


        QMetaObject::connectSlotsByName(Board);
    } // setupUi

    void retranslateUi(QMainWindow *Board)
    {
        Board->setWindowTitle(QApplication::translate("Board", "Board", 0));
        pushButton->setText(QApplication::translate("Board", "Start", 0));
        pushButton_2->setText(QApplication::translate("Board", "Restart", 0));
        label_backgroundimage->setText(QString());
        label_title->setText(QString());
        label_boardpic->setText(QString());
        label_chooseyourtoken->setText(QApplication::translate("Board", "Choose your Token:", 0));
        label_black_token->setText(QString());
        label_playerchoice1->setText(QString());
        label_red_token->setText(QString());
        label_playerchoice2->setText(QString());
        pushButton_black_token->setText(QString());
        pushButton_red_token->setText(QString());
        pushButton_c1->setText(QString());
        pushButton_c2->setText(QString());
        pushButton_c3->setText(QString());
        pushButton_c4->setText(QString());
        pushButton_c5->setText(QString());
        pushButton_c6->setText(QString());
        pushButton_c7->setText(QString());
        label_turn->setText(QApplication::translate("Board", "Turn:", 0));
        label_turnValue->setText(QString());
        label_row5_col0->setText(QString());
        label_row4_col0->setText(QString());
        label_row3_col0->setText(QString());
        label_row2_col0->setText(QString());
        label_row1_col0->setText(QString());
        label_row0_col0->setText(QString());
        label_row5_col1->setText(QString());
        label_row4_col1->setText(QString());
        label_row3_col1->setText(QString());
        label_row2_col1->setText(QString());
        label_row1_col1->setText(QString());
        label_row0_col1->setText(QString());
        label_row5_col2->setText(QString());
        label_row4_col2->setText(QString());
        label_row3_col2->setText(QString());
        label_row2_col2->setText(QString());
        label_row1_col2->setText(QString());
        label_row0_col2->setText(QString());
        label_row5_col3->setText(QString());
        label_row4_col3->setText(QString());
        label_row3_col3->setText(QString());
        label_row2_col3->setText(QString());
        label_row1_col3->setText(QString());
        label_row0_col3->setText(QString());
        label_row5_col4->setText(QString());
        label_row4_col4->setText(QString());
        label_row3_col4->setText(QString());
        label_row2_col4->setText(QString());
        label_row1_col4->setText(QString());
        label_row0_col4->setText(QString());
        label_row5_col5->setText(QString());
        label_row4_col5->setText(QString());
        label_row3_col5->setText(QString());
        label_row2_col5->setText(QString());
        label_row1_col5->setText(QString());
        label_row0_col5->setText(QString());
        label_row5_col6->setText(QString());
        label_row4_col6->setText(QString());
        label_row3_col6->setText(QString());
        label_row2_col6->setText(QString());
        label_row1_col6->setText(QString());
        label_row0_col6->setText(QString());
        label_whoWon->setText(QString());
        label_gamestarted->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Board: public Ui_Board {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARD_H
