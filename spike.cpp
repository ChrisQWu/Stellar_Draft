#include "spike.h"

Spike::Spike() {
}

Card Spike::takeCard(vector<Card> cards) {
	
	return cards.front();
}

void Spike::addCardToPool(Card card) {
	cardPool.push_back(card);
}

int Spike::rankCards(Card card) {

	return -1;
}

vector<Card> Spike::getCardPool() {
	return cardPool;
}
