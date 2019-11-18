#pragma once

#include <QtWidgets/QMainWindow>
#include <vector> 
#include <string>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <random>
#include <chrono>

#include "qstring.h"
#include "ui_mtg_draft.h"
#include "qpixmap.h"
#include "qmessagebox.h"
#include "card.h"
#include "spike.h"
#include "player.h"

using namespace std;

class MTG_Draft : public QMainWindow {
	Q_OBJECT

public:
	MTG_Draft(QWidget *parent = Q_NULLPTR);

public slots:
	void on_nextButton_clicked();
	void on_cardButton_clicked();
	void on_cardButton_2_clicked();
	void on_cardButton_3_clicked();
	void on_cardButton_4_clicked();
	void on_cardButton_5_clicked();
	void on_cardButton_6_clicked();
	void on_cardButton_7_clicked();
	void on_cardButton_8_clicked();
	void on_cardButton_9_clicked();

signals:
	void nextButtonEvent();

private:
	Ui::MTG_DraftClass ui;
	vector<Card> cards;
	vector<Card> activeCards;
	vector<QLabel*> cardImages;
	Spike spike;
	Player player;
	void initializeCards();
	void initializeCardImages();
	void printCards();
	void printCard(Card card);
	void printPlayers();
	void playerTakeCards(Card card, int takenIndex);
	void removeActiveCard(Card card, int index);
	void debugPrint(string s);
};
