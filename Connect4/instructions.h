#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

#include <QMainWindow>
#include "ui_instructions.h"

class Instructions : public QMainWindow
{
	Q_OBJECT

public:
	Instructions(QWidget *parent = 0);
	~Instructions();

private:
	Ui::Instructions ui;

};

#endif // INSTRUCTIONS_H
