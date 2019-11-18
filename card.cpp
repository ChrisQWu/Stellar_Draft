#include "card.h"

Card::Card() {
	this->cmc = -1;
	this->color = "";
	this->rarity = "";
	this->cardName = "";
	this->imgPath = "";
}

Card::Card(int _cmc, std::string _color, std::string _rarity, std::string _cardName, std::string _imgPath) {
	this->cmc = _cmc;
	this->color = _color;
	this->rarity = _rarity;
	this->cardName = _cardName;
	this->imgPath = _imgPath;
}

int Card::getCMC() {
	return this->cmc;
}

std::string Card::getColor() {
	return this->color;
}

std::string Card::getRarity() {
	return this->rarity;
}

std::string Card::getCardName() {
	return this->cardName;
}

std::string Card::getImgPath() {
	return this->imgPath;
}

std::string Card::toString() {
	return this->cardName + ":\n"
		+"\tCMC:\t\t"      + std::to_string(this->cmc) + "\n"
		+"\tcolor:\t\t"    + this->color + "\n"
		+"\trarity:\t\t"   + this->rarity + "\n"
		+"\timage path:\t" + this->imgPath + "\n";
}

bool operator==(const Card& a, const Card& b) {
	return a.cardName == b.cardName;
}
