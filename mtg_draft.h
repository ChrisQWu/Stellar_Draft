#pragma once

#include <QtWidgets/QMainWindow>
#include <vector> 
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

#include "qstring.h"
#include "ui_mtg_draft.h"
#include "qpixmap.h"
#include "qmessagebox.h"
#include "card.h"
#include "spike.h"
#include "qmap.h"

using namespace std;

class MTG_Draft : public QMainWindow {
	Q_OBJECT

public:
	MTG_Draft(QWidget *parent = Q_NULLPTR);

public slots:
	void on_nextButton_clicked();
	void cardButtonClicked1();
	void cardButtonClicked2();
	void cardButtonClicked3();
	void cardButtonClicked4();
	void cardButtonClicked5();
	void cardButtonClicked6();
	void cardButtonClicked7();
	void cardButtonClicked8();
	void cardButtonClicked9();

signals:
	void nextButtonEvent();

private:
	Ui::MTG_DraftClass ui;
	vector<Card> cards;
	vector<QLabel*> cardImages;
	QMap<QLabel*, Card> cardMap;
	Spike spike;
	void initializeCards();
	void initializeCardImages();
	void printCards();
	void printPlayers();
};
