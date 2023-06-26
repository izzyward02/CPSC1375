#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <array>

Player::Player()
{
	numCards = 7;
	deckSize = 60;	
	playerLife = 20;
}

Player::Player(int numCards, int deckSize, int playerLife)
{
	if (numCards <= 7)
		numCards = sentNumCards;
	else
		numCards = 7;
	deckSize = 60;
	playerLife = 20;
}

std::vector<Card> drawHand(std::vector<Card>& deck)
{
	std::vector<Card> hand;
	hand.reserve(7);
	for (int i{0}; i < 7; i++)
	{
		hand.push_back(deck.back());
		deck.pop_back();
	}
	return hand;
}
void Player::drawCard(Card drawnCard)
{
	currentHand.drawCard(drawnCard);
}
