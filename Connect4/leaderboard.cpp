#include "leaderboard.h"
#include "qfile.h"
#include "qtextstream.h"
#include "qstring.h"
#include "qdebug.h"
#include "qstringlistmodel.h"

Leaderboard::Leaderboard(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	displayWinners();

}

Leaderboard::~Leaderboard()
{

}

void Leaderboard:: displayWinners()
{

	QStringList *allLines = new QStringList(); //Your list for lines from the file.
	allLines->clear();
	QStringListModel *linesModel = new QStringListModel(*allLines, NULL);

	QString fileName = "C:/Users/Ashwin Rajan/Documents/Visual Studio 2012/Projects/Connect4/Connect4/winners.txt";
	QFile myFile(fileName);
	if(!myFile.open(QFile::ReadOnly | QFile::Text))
	{
		qDebug() << "error";
		return;
	}

	while (!myFile.atEnd())
	{
		QByteArray line = myFile.readLine(); 
		const char *line_c = line.data(); 
		QString line_str = QString(QLatin1String(line_c)); 
		allLines->append(line_str); //Adding the lines to the list
	}

	linesModel->setStringList(*allLines); //Set your model's list your stringlist
	ui.listView->setModel(linesModel);
	myFile.close();

}