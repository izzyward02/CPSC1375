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
public:
	Player();
	Player(int numCards, int deckSize, int playerLife);
	void firstHand() const;
	void newHand() const;
	void drawCards();
	void displayHand();
	numCards <= 7;
	deckSize <= 60;
	playerLife = 20;
};
#endif
