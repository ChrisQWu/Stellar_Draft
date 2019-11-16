#pragma once
#include <string>
#include <iostream>

class Card {
public:
	Card();
	Card(int _cmc, std::string _color, std::string _rarity, std::string _cardName, std::string _imgPath);
	int getCMC();
	std::string getColor();
	std::string getRarity();
	std::string getCardName();
	std::string getImgPath();
	std::string toString();
private:
	int cmc = 0;
	std::string color = "";
	std::string rarity = "";
	std::string cardName = "";
	std::string imgPath = "";
};
