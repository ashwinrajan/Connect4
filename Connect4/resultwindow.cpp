#include "resultwindow.h"
#include "QString"
#include "qfile.h"
#include "QDebug.h"
#include "qtextstream.h"
resultwindow::resultwindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton_ok, SIGNAL(clicked()), this, SLOT(on_pushButton_ok_clicked()));
}

resultwindow::~resultwindow()
{

}

void resultwindow:: on_pushButton_ok_released()
{
	winnersName = ui.lineEdit->text();
	saveWinnerNameToFile(winnersName);
	close();
}

void resultwindow :: saveWinnerNameToFile(QString x)
{
	QString fileName = "C:/Users/Ashwin Rajan/Documents/Visual Studio 2012/Projects/Connect4/Connect4/winners.txt";
	QFile myFile(fileName);
	if(!myFile.open(QIODevice::WriteOnly |  QIODevice::Text | QIODevice::Append ))
	{
		qDebug() << "error";
		return;
	}
	QTextStream out(&myFile);
	out << x << endl;
	myFile.close();

}