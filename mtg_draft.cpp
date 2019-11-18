#include "mtg_draft.h"

MTG_Draft::MTG_Draft(QWidget *parent) : QMainWindow(parent) {
	ui.setupUi(this);
	connect(ui.nextButton  , SIGNAL(clicked()), this, SLOT(on_nextButton_clicked));

	connect(ui.cardButton  , SIGNAL(clicked()), this, SLOT(on_cardButton_clicked));
	connect(ui.cardButton_2, SIGNAL(clicked()), this, SLOT(on_cardButton_2_clicked));
	connect(ui.cardButton_3, SIGNAL(clicked()), this, SLOT(on_cardButton_3_clicked));
	connect(ui.cardButton_4, SIGNAL(clicked()), this, SLOT(on_cardButton_4_clicked));
	connect(ui.cardButton_5, SIGNAL(clicked()), this, SLOT(on_cardButton_5_clicked));
	connect(ui.cardButton_6, SIGNAL(clicked()), this, SLOT(on_cardButton_6_clicked));
	connect(ui.cardButton_7, SIGNAL(clicked()), this, SLOT(on_cardButton_7_clicked));
	connect(ui.cardButton_8, SIGNAL(clicked()), this, SLOT(on_cardButton_8_clicked));
	connect(ui.cardButton_9, SIGNAL(clicked()), this, SLOT(on_cardButton_9_clicked));

	initializeCards();
	initializeCardImages();
	spike = Spike();
	player = Player();
}

void MTG_Draft::on_nextButton_clicked() {
	activeCards.clear();
	for (int j = 0; j < cardImages.size() && j < cards.size(); j++) {
		activeCards.push_back(cards[j]);
	}
	shuffle(activeCards.begin(), activeCards.end(), default_random_engine(chrono::system_clock::now().time_since_epoch().count()));
	for (int i = 0; i < cardImages.size(); i++) {
		if (i < activeCards.size()) {
			cardImages[i]->setPixmap(QPixmap(QString::fromStdString(activeCards[i].getImgPath())));
		} else {
			cardImages[i]->clear();
		}
	}
	if (QObject::sender() == ui.nextButton) {
		//printCards();
	}
	//printCards();
}

void MTG_Draft::on_cardButton_clicked() {
	playerTakeCards(activeCards[0], 0);
}

void MTG_Draft::on_cardButton_2_clicked() {
	playerTakeCards(activeCards[1], 1);
}

void MTG_Draft::on_cardButton_3_clicked() {
	playerTakeCards(activeCards[2], 2);
}

void MTG_Draft::on_cardButton_4_clicked() {
	playerTakeCards(activeCards[3], 3);
}

void MTG_Draft::on_cardButton_5_clicked() {
	playerTakeCards(activeCards[4], 4);
}

void MTG_Draft::on_cardButton_6_clicked() {
	playerTakeCards(activeCards[5], 5);
}

void MTG_Draft::on_cardButton_7_clicked() {
	playerTakeCards(activeCards[6], 6);
}

void MTG_Draft::on_cardButton_8_clicked() {
	playerTakeCards(activeCards[7], 7);
}

void MTG_Draft::on_cardButton_9_clicked() {
	playerTakeCards(activeCards[8], 8);
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
	std::string cardsString = "";
	for (auto card : activeCards) {
		cardsString += card.toString();
	}
	debugPrint(cardsString);
}

void MTG_Draft::printCard(Card card) {
	std::string cardsString = card.toString();
	debugPrint(cardsString);
}

void MTG_Draft::printPlayers() {
	std::string cardsString = "Spike:\n";
	for (auto card : spike.getCardPool()) {
		cardsString += card.toString();
	}
	cardsString += "\nPlayer:\n";
	for (auto card : player.getCardPool()) {
		cardsString += card.toString();
	}
	debugPrint(cardsString);
}

void MTG_Draft::debugPrint(string s) {
	QMessageBox msgBox;
	msgBox.setText(QString::fromStdString(s));
	msgBox.exec();
}


void MTG_Draft::playerTakeCards(Card card, int takenIndex) {
	player.addCardToPool(card);
	removeActiveCard(card, takenIndex);
	printPlayers();
	Card spikeCard = spike.takeCard(activeCards);
	spike.addCardToPool(spikeCard);
	if (takenIndex == 0) {
		removeActiveCard(spikeCard, 1);
	} else {
		removeActiveCard(spikeCard, 0);
	}
	printPlayers();
}

void MTG_Draft::removeActiveCard(Card card, int index) {
	activeCards.erase(remove(activeCards.begin(), activeCards.end(), card));
	cards.erase(remove(cards.begin(), cards.end(), card));
	cardImages[index]->clear();
}
