#include "player.h"

Player::Player() {
}

Card Player::takeCard(vector<Card> cards) {

	return cards.front();
}

void Player::addCardToPool(Card card) {
	cardPool.push_back(card);
}

int Player::rankCards(Card card) {

	return -1;
}

vector<Card> Player::getCardPool() {
	return cardPool;
}