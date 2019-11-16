#pragma once
#include <vector> 

#include "player_abstract.h"
#include "card.h"

using namespace std;

class Spike : public player_abstract {
public:
	Spike();
	Card takeCard(vector<Card> cards) ;
	void addCardToPool(Card card);
	int rankCards(Card card);
	vector<Card> getCardPool();
private:
	vector<Card> cardPool;
};

