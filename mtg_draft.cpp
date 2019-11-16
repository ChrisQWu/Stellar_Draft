#include "mtg_draft.h"

MTG_Draft::MTG_Draft(QWidget *parent) : QMainWindow(parent) {
	ui.setupUi(this);
	connect(ui.nextButton  , SIGNAL(clicked()), this, SLOT(on_nextButton_clicked));

	connect(ui.cardButton  , SIGNAL(clicked()), this, SLOT(cardButtonClicked1));
	connect(ui.cardButton_2, SIGNAL(clicked()), this, SLOT(cardButtonClicked2));
	connect(ui.cardButton_3, SIGNAL(clicked()), this, SLOT(cardButtonClicked3));
	connect(ui.cardButton_4, SIGNAL(clicked()), this, SLOT(cardButtonClicked4));
	connect(ui.cardButton_5, SIGNAL(clicked()), this, SLOT(cardButtonClicked5));
	connect(ui.cardButton_6, SIGNAL(clicked()), this, SLOT(cardButtonClicked6));
	connect(ui.cardButton_7, SIGNAL(clicked()), this, SLOT(cardButtonClicked7));
	connect(ui.cardButton_8, SIGNAL(clicked()), this, SLOT(cardButtonClicked8));
	connect(ui.cardButton_9, SIGNAL(clicked()), this, SLOT(cardButtonClicked9));

	srand(time(NULL));
	initializeCards();
	initializeCardImages();
	spike = Spike();
}

void MTG_Draft::on_nextButton_clicked() {
	vector<int> usedIndicies;
	cardMap.clear();
	for (int i = 0; i < cards.size(); i++) {
		if (usedIndicies.size() < cards.size()) {
			int index = -1;
			int count = 0;
			do {
				index = rand() % cards.size();
			} while (std::find(usedIndicies.begin(), usedIndicies.end(), index) != usedIndicies.end());
			usedIndicies.push_back(index);
			cardImages[i]->setPixmap(QPixmap(QString::fromStdString(cards[index].getImgPath())));
			cardMap[cardImages[i]] = cards[index];
		} else {
			cardImages[i]->clear();
		}
	}
	if (QObject::sender() == ui.nextButton) {
		printCards();
	}
	//printCards();
}

void MTG_Draft::cardButtonClicked1() {
	printCards();
	//spike.addCardToPool(cards[0]);
	//printPlayers();
}

void MTG_Draft::cardButtonClicked2() {
	spike.addCardToPool(cardMap[ui.cardImage_2]);
	printPlayers();
}

void MTG_Draft::cardButtonClicked3() {
	spike.addCardToPool(cardMap[ui.cardImage_3]);
	printPlayers();
}

void MTG_Draft::cardButtonClicked4() {
	spike.addCardToPool(cardMap[ui.cardImage_4]);
	printPlayers();
}

void MTG_Draft::cardButtonClicked5() {
	spike.addCardToPool(cardMap[ui.cardImage_5]);
	printPlayers();
}

void MTG_Draft::cardButtonClicked6() {
	spike.addCardToPool(cardMap[ui.cardImage_6]);
	printPlayers();
}

void MTG_Draft::cardButtonClicked7() {
	spike.addCardToPool(cardMap[ui.cardImage_7]);
	printPlayers();
}

void MTG_Draft::cardButtonClicked8() {
	spike.addCardToPool(cardMap[ui.cardImage_8]);
	printPlayers();
}

void MTG_Draft::cardButtonClicked9() {
	spike.addCardToPool(cardMap[ui.cardImage_9]);
	printPlayers();
}

void MTG_Draft::initializeCards() {
	// Initialize Cards
	cards.push_back(Card(3, "WUB", "M", "Aminatou, the Fateshifter", "./Resources/aminatou.jpg"));
	cards.push_back(Card(5, "W", "M", "Kenrith, the Returned King", "./Resources/kenrith.jpg"));
	cards.push_back(Card(4, "UBR", "M", "Kess, Dissident Mage", "./Resources/kess.jpg"));
	cards.push_back(Card(7, "B", "M", "K'rrik, Son of Yawgmoth", "./Resources/krrik.jpg"));
	cards.push_back(Card(0, "C", "M", "Mana Crypt", "./Resources/mana_crypt.jpg"));
	cards.push_back(Card(4, "UR", "M", "Mizzix of the Izmagnus", "./Resources/mizzix.jpg"));
	cards.push_back(Card(6, "UGB", "M", "Muldrotha, the Gravetide", "./Resources/muldrotha.jpg"));
	cards.push_back(Card(1, "C", "M", "Sensei's Divining Top", "./Resources/senseis_divining.jpg"));
	cards.push_back(Card(5, "WUBGR", "M", "Sliver Legion", "./Resources/sliver_legion.jpg"));
}

void MTG_Draft::initializeCardImages() {
	// Initialize QLabels
	cardImages.push_back(ui.cardImage);
	cardImages.push_back(ui.cardImage_2);
	cardImages.push_back(ui.cardImage_3);
	cardImages.push_back(ui.cardImage_4);
	cardImages.push_back(ui.cardImage_5);
	cardImages.push_back(ui.cardImage_6);
	cardImages.push_back(ui.cardImage_7);
	cardImages.push_back(ui.cardImage_8);
	cardImages.push_back(ui.cardImage_9);
}

void MTG_Draft::printCards() {
	QMessageBox msgBox;
	std::string cardsString = "";
	for (auto card : cards) {
		cardsString += card.toString();
	}

	/*
	for (auto pair : cardMap) {
		cardsString += "{" + pair.first->text().toStdString() + ":" + pair.second.toString() + "}\n";
	}
	*/

	msgBox.setText(QString::fromStdString(cardsString));
	msgBox.exec();
}

void MTG_Draft::printPlayers() {
	QMessageBox msgBox;
	std::string cardsString = "";
	for (auto card : spike.getCardPool()) {
		cardsString += card.toString();
	}
	msgBox.setText(QString::fromStdString(cardsString));
	msgBox.exec();
}
