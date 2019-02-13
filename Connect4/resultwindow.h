#ifndef RESULTWINDOW_H
#define RESULTWINDOW_H

#include <QMainWindow>
#include "ui_resultwindow.h"

class resultwindow : public QMainWindow
{
	Q_OBJECT

public:
	resultwindow(QWidget *parent = 0);
	~resultwindow();
	void saveWinnerNameToFile(QString x);

	private slots:
		void on_pushButton_ok_released();

private:
	Ui::resultwindow ui;

protected:
	QString winnersName;
};

#endif // RESULTWINDOW_H
