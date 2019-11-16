#pragma once
#include <vector> 

#include "card.h"

using namespace std;

class player_abstract {
public:
	virtual Card takeCard(vector<Card> cards) = 0;
	virtual void addCardToPool(Card card) = 0;
	virtual int rankCards(Card card) = 0;
	virtual vector<Card> getCardPool() = 0;
private:
	vector<Card> cardPool;
};
