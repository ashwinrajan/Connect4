#ifndef LEADERBOARD_H
#define LEADERBOARD_H

#include <QMainWindow>
#include "ui_leaderboard.h"


class Leaderboard : public QMainWindow
{
	Q_OBJECT

public:
	Leaderboard(QWidget *parent = 0);
	~Leaderboard();
	void displayWinners();

private:
	Ui::Leaderboard ui;
};

#endif // LEADERBOARD_H
