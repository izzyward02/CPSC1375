#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <array>

void Game::shuffleDeck()
{
	std::random_device seed;
	std::default_random_engine engine(seed());
	std::shuffle(drawCard.begin(), drawCard.end(), engine);
}
void Game::drawCard(Card drawnCard)
{
	currentHand.push_back(drawnCard);
}
void Game::displayHand()
{
	for (const auto & card : currentHand)
	{
		card.print();
	}
}
void Game::discardCard()
{
	currentHand.pop_back();
}
void Game::placeLands()
{
	deckSize.pop_back();
}
