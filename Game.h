/* Izzy Ward  CPSC 1375  June 22, 2023
*    DESCRIPTION:  This program plays a basic Magic: The Gathering game.
*    It consists of a Card class, Game class, and Player class headers to control the functionality of the game.  */

#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <array>

#ifndef GAME_H
#define GAME_H

class Game
{
private:
	int lifeCounter {20};
	bool inPlay {};
	std::vector<Card> currentHand;
public:
	Game();
	Game(int lifeCounter, bool inPlay, std::vector<Card>& currentHand);
	void discardCard();
	void drawCard(Card drawnCard);
	void placeLands();
	void displayHand();
	void shuffleDeck();
};
#endif

