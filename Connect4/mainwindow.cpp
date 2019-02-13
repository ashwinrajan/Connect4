#include "mainwindow.h"
#include "board.h"
#include "instructions.h"
#include "leaderboard.h"
#include <QPushButton>



MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//Play Background Music

}

MainWindow::~MainWindow()
{

}

int MainWindow::getX() const{

	return x;
}

void MainWindow::on_pushButton_play_clicked(){

	Board *board = new Board(this);
	board->show();
}

void MainWindow::on_pushButton_instructions_clicked()
{
	Instructions *instruct = new Instructions(this);
	instruct->show();
}

void MainWindow::on_pushButton_leaderboard_clicked()
{
	Leaderboard *leaderboard = new Leaderboard(this);
	leaderboard->show();
}

void MainWindow::on_pushButton_exit_clicked()
{
	close();
}
