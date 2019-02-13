#include "board.h"
#include "Qpixmap"
#include "qdebug.h"
#include "QMessageBox"
#include "resultwindow.h"




Board::Board(QWidget *parent)
	: MainWindow(parent)
{
	ui.setupUi(this);
	check_black_button = false; check_red_button = false;
	//Connecting the Token buttons to its actions
	connect(ui.pushButton_black_token, SIGNAL(clicked()),this, SLOT(on_pushButton_3_black_clicked()));
	connect(ui.pushButton_red_token, SIGNAL(clicked()),this, SLOT(on_pushButton_3_red_clicked()));
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(on_pushButton_start_clicked()));

	//Connecting the column button to its actions.
	connect(ui.pushButton_c1, SIGNAL(clicked()),this, SLOT(on_pushButton_c1_clicked()));
	connect(ui.pushButton_c2, SIGNAL(clicked()),this, SLOT(on_pushButton_c2_clicked()));
	connect(ui.pushButton_c3, SIGNAL(clicked()),this, SLOT(on_pushButton_c3_clicked()));
	connect(ui.pushButton_c4, SIGNAL(clicked()),this, SLOT(on_pushButton_c4_clicked()));
	connect(ui.pushButton_c5, SIGNAL(clicked()),this, SLOT(on_pushButton_c5_clicked()));
	connect(ui.pushButton_c6, SIGNAL(clicked()),this, SLOT(on_pushButton_c6_clicked()));
	connect(ui.pushButton_c7, SIGNAL(clicked()),this, SLOT(on_pushButton_c7_clicked()));
	wonOrNot = false;

}

//Getter function for getting player from a specific place.
char Board:: getPlace(int x, int y) const
{
	return place[x][y];
}

//Setter function for setting the player to a specific slot on the board. Also, adds the gui to where the token was dropped.
void Board:: setPlace(int i, int e, char p)
{
	place[i][e] = p;
	//wonOrNot = check(i,e);
	if(i == 0 ){
		if(e == 0){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row0_col0->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row0_col0->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 1){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row0_col1->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row0_col1->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 2){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row0_col2->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row0_col2->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 3){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row0_col3->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row0_col3->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 4){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row0_col4->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row0_col4->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 5){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row0_col5->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row0_col5->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 6){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row0_col6->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row0_col6->setPixmap(token_red);
				player = 'B';
			}
		}

	}else if(i == 1){
		if(e == 0){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row1_col0->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row1_col0->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 1){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row1_col1->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row1_col1->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 2){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row1_col2->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row1_col2->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 3){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row1_col3->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row1_col3->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 4){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row1_col4->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row1_col4->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 5){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row1_col5->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row1_col5->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 6){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row1_col6->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row1_col6->setPixmap(token_red);
				player = 'B';
			}
		}

	}else if(i == 2){
		if(e == 0){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row2_col0->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row2_col0->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 1){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row2_col1->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row2_col1->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 2){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row2_col2->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row2_col2->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 3){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row2_col3->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row2_col3->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 4){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row2_col4->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row2_col4->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 5){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row2_col5->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row2_col5->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 6){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row2_col6->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row2_col6->setPixmap(token_red);
				player = 'B';
			}
		}

	}else if(i == 3){
		if(e == 0){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row3_col0->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row3_col0->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 1){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row3_col1->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row3_col1->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 2){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row3_col2->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row3_col2->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 3){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row3_col3->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row3_col3->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 4){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row3_col4->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row3_col4->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 5){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row3_col5->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row3_col5->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 6){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row3_col6->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row3_col6->setPixmap(token_red);
				player = 'B';
			}
		}

	}else if(i == 4){
		if(e == 0){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row4_col0->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row4_col0->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 1){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row4_col1->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row4_col1->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 2){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row4_col2->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row4_col2->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 3){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row4_col3->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row4_col3->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 4){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row4_col4->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row4_col4->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 5){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row4_col5->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row4_col5->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 6){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row4_col6->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row4_col6->setPixmap(token_red);
				player = 'B';
			}
		}

	}else if(i == 5){
		if(e == 0){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row5_col0->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row5_col0->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 1){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row5_col1->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row5_col1->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 2){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row5_col2->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row5_col2->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 3){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row5_col3->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row5_col3->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 4){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row5_col4->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row5_col4->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 5){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row5_col5->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row5_col5->setPixmap(token_red);
				player = 'B';
			}
		}else if(e == 6){
			if(p == 'B')
			{
				QPixmap token_black("://Images/4row_black.png");
				ui.label_row5_col6->setPixmap(token_black);
				player = 'R';
			}
			else if (p == 'R')
			{
				QPixmap token_red("://Images/4row_red.png");
				ui.label_row5_col6->setPixmap(token_red);
				player = 'B';
			}
		}
	}

}

void Board::on_pushButton_3_black_clicked()
{

	ui.label_playerchoice1->setText("Player 1");
	ui.label_playerchoice2->setText("Player 2");
	ui.label_turnValue->setText("Player 1");
	player = 'B';
	ui.pushButton_black_token->setDisabled(true);
	ui.pushButton_red_token->setDisabled(true);
}


void Board::on_pushButton_3_red_clicked()
{

	ui.label_playerchoice2->setText("Player 1");
	ui.label_playerchoice1->setText("Player 2");
	ui.label_turnValue->setText("Player 1");
	player = 'R';
	ui.pushButton_red_token->setDisabled(true);
	ui.pushButton_black_token->setDisabled(true);
}

//Start button clicked function. Empties the board.
void Board::on_pushButton_start_clicked()
{
	if(player == 'B'|| player == 'R'){
		ui.label_gamestarted->setText("Game has started...");
		for(int i = 0; i<=5; i++) // Making all slots on the board  empty
		{
			for(int j = 0; j<=6; j++)
			{
				place[i][j] = ' ';
			}
		}

		player1Turn = true;
		ui.pushButton_c1->setEnabled(true);
		ui.pushButton_c2->setEnabled(true);
		ui.pushButton_c3->setEnabled(true);
		ui.pushButton_c4->setEnabled(true);
		ui.pushButton_c5->setEnabled(true);
		ui.pushButton_c6->setEnabled(true);
		ui.pushButton_c7->setEnabled(true);
	}else{
		QMessageBox::information(this, tr("Connect4"), tr("Please choose a token for the player before you start the game."));

	}
	

}


//7 functions below for which column the user chooses and the column choice gets stored in a column_num variable...
void Board:: on_pushButton_c1_released()
{

	column_num = 0;
	drop(column_num,player);
	setPlayerTurnLabel();
}

void Board:: on_pushButton_c2_released()
{
	column_num = 1;
	drop(column_num,player);
	setPlayerTurnLabel();
}

void Board:: on_pushButton_c3_released()
{
	column_num = 2;
	drop(column_num,player);
	setPlayerTurnLabel();
}

void Board:: on_pushButton_c4_released()
{
	column_num = 3;
	drop(column_num,player);
	setPlayerTurnLabel();
}

void Board:: on_pushButton_c5_released()
{
	column_num = 4;
	drop(column_num,player);
	setPlayerTurnLabel();
}

void Board:: on_pushButton_c6_released()
{
	column_num = 5;
	drop(column_num,player);
	setPlayerTurnLabel();
}

void Board:: on_pushButton_c7_released()
{
	column_num = 6;
	drop(column_num,player);
	setPlayerTurnLabel();
}


//Drop functions that decides the row the token drop at depending on user input.
int Board:: drop(int col, char player)  //Drop function accepts the column selected by the player(b) and the player itself.
{

	if(col >=0 && col<= 6)
	{
		if(getPlace(0, col) == ' ') // Checking if the top is empty.
		{
			int i;
			for(i = 0; getPlace(i,col) == ' '; i++){
				if(i == 5)// checks to see if the player has hit the bottom.
				{
					setPlace(i,col, player);
					wonOrNot = check(i, col);
					gameTied = checkTie();
					if (wonOrNot == true)
					{
						resultwindow *win = new resultwindow(this);
						win->show();

						//disabling the drop buttons
						ui.pushButton_c1->setDisabled(true);
						ui.pushButton_c2->setDisabled(true);
						ui.pushButton_c3->setDisabled(true);
						ui.pushButton_c4->setDisabled(true);
						ui.pushButton_c5->setDisabled(true);
						ui.pushButton_c6->setDisabled(true);
						ui.pushButton_c7->setDisabled(true);
						//close();

					}
					else if(gameTied == true)
					{
						QMessageBox::information(this, tr("Connect4"), tr("No Winner. It is a Tie"));
						close();
					}

					return i;
				}
			}
			i--;
			setPlace(i,col,player); // Sets thhat slot to not empty.
			wonOrNot = check(i, col);
			gameTied = checkTie();
			if (wonOrNot == true)
			{
				resultwindow *win2 = new resultwindow(this);
				win2->show();

				//disabling the drop buttons.
				ui.pushButton_c1->setDisabled(true);
				ui.pushButton_c2->setDisabled(true);
				ui.pushButton_c3->setDisabled(true);
				ui.pushButton_c4->setDisabled(true);
				ui.pushButton_c5->setDisabled(true);
				ui.pushButton_c6->setDisabled(true);
				ui.pushButton_c7->setDisabled(true);
				//close();

			}
			else if(gameTied == true)
			{
				QMessageBox::information(this, tr("Connect4"), tr("No Winner. It is a Tie"));
				close();
			}
			return i; //return the row it ends up in.

		}
		else
		{
			return -1;
		}
	}
	else
	{
		return -1;
	}

}

//Checkin Win function to check if someone has won the game. Checks all posibilities.
bool Board:: check(int a, int b){

	int vertical = 1;//counts tokens vertically

	int horizontal = 1;//counts tokens horizontally.

	int diagonal1 = 1;//counts tokens diagnally_left

	int diagonal2 = 1;//counts token diagnally_right

	char player = getPlace(a,b); // gets the player located at a specific spot on the board. Basically getting tokens locations at each slot.

	int v;//vertical

	int h;//horizontal

	
	//Checking for vertical Win...
	for(v = a +1; getPlace(v,b) == player && v <= 5;v++,vertical++);//Check for connect4 downwards
	for(v = a -1; getPlace(v,b) == player && v >= 0;v--,vertical++);//Check for connect4 upwards
	if(vertical >= 4)
	{
		return true; //if found 4 in a row of same colour vertically, returns true.
	}


	//Checking for a horizontal win...
	for(h = b -1;getPlace(a,h) == player && h >= 0; h--,horizontal++);//Check for connect4 in left direction
	for(h = b +1;getPlace(a,h) == player && h <= 6; h++,horizontal++);//Check for connect4 in right direction
	if(horizontal >= 4)
	{
	return true; //if found 4 in a row of same colour horizontally, returns true.
	}

	//Checking for a diagnally_left win...
	for(v = a -1, h= b -1; getPlace(v,h) == player && v>=0 && h >=0; diagonal1 ++, v --, h --);//check for connect4 in upwards left direction
	for(v = a +1, h = b+1;getPlace(v,h) == player && v<=5 && h <=6; diagonal1 ++, v ++, h ++);//check for connect4 in downards right direction.
	if(diagonal1 >= 4)
	{
		return true; //if found 4 in a row of same colour diagnally_left, returns true.
	}

	
	//Checking for a diagnally_right win...
	for(v = a -1, h= b +1;getPlace(v,h) == player && v>=0 && h <= 6; diagonal2 ++, v --, h ++);//checking for connect4 in upward right direction.
	for(v = a +1, h= b -1;getPlace(v,h) == player && v<=5 && h >=0; diagonal2 ++, v ++, h --);//checking for connect4 in upward left direction
	if(diagonal2 >= 4)
	{
		return true; //if found 4 in a row of same colour diagnally_right, returns true.
	}

	return false; // If all the checks are less than 4...returns false which basically means no one has won the game yet.

}

//Check to see if no one has won the game.
bool Board:: checkTie()
{
	if(!(getPlace(0,0) == ' '))
	{
		if(!(getPlace(0,1) == ' '))
		{
			if(!(getPlace(0,2) == ' '))
			{
				if(!(getPlace(0,3) == ' '))
				{
					if(!(getPlace(0,4) == ' '))
					{
						if(!(getPlace(0,5) == ' '))
						{
							if(!(getPlace(0,6) == ' '))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}

}

//Setting player label according to the turn, this helps user know whose turn it is.
void Board:: setPlayerTurnLabel(){

	if(player1Turn){
		ui.label_turnValue->setText("Player 2");
		player1Turn = false;
	}else{
		ui.label_turnValue->setText("Player 1");
		player1Turn = true;
	}
}

//Deconstructor
Board::~Board()
{

}