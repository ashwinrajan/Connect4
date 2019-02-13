#ifndef BOARD_H
#define BOARD_H

#include <QMainWindow>
#include "ui_board.h"
#include "mainwindow.h"


class Board : public MainWindow
{
	Q_OBJECT

public:
	Board(QWidget *parent = 0);
	~Board();

	//getter and setter functions...
	char getPlace(int x, int y)const;
	void setPlace(int i, int e, char p);
	int drop(int col, char player);
	void setPlayerTurnLabel();
	bool check(int a, int b);
	bool checkTie();


private:
	Ui::Board ui;
	void checkButton();
	char place[6][7];
	bool player1Turn;


	private slots:
		void on_pushButton_3_black_clicked();
		void on_pushButton_3_red_clicked();
		void on_pushButton_start_clicked();

		//Functions for which column the user chooses.
		void on_pushButton_c1_released();
		void on_pushButton_c2_released();
		void on_pushButton_c3_released();
		void on_pushButton_c4_released();
		void on_pushButton_c5_released();
		void on_pushButton_c6_released();
		void on_pushButton_c7_released();

protected: 
	bool check_black_button,check_red_button;
	char player;
	int column_num;
	bool wonOrNot;
	bool gameTied;
	int hold_row_val;
};

#endif // BOARD_H
