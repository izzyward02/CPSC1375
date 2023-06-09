/* Izzy Ward  CPSC 1375  June 22, 2023
*    DESCRIPTION:  This program plays a basic Magic: The Gathering game.
*    It consists of a Card class, Game class, and Player class headers to control the functionality of the game.  */

#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <array>

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
private:
	int numCards {};
	int deckSize {};
	int playerLife {};
	Game currentHand;
public:
	Player();
	Player(int numCards, int deckSize, int playerLife);
	void displayHand();
	void drawCard(Card drawnCard);
};
std::vector<Card> drawHand(std::vector<Card>& deck);
#endif
