#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <array>

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
