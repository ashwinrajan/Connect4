#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ui_mainwindow.h"
#include <QMainWindow>


class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();
	int getX() const;

private:
	Ui::MainWindow ui;
	int x;


	private slots:
		void on_pushButton_play_clicked();
		void on_pushButton_leaderboard_clicked();
		void on_pushButton_instructions_clicked();
		void on_pushButton_exit_clicked();

};

#endif // MAINWINDOW_H
