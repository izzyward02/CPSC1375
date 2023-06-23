/* Izzy Ward  CPSC 1375  June 22, 2023
*    DESCRIPTION:  This program plays a basic Magic: The Gathering game.
*    It consists of a Card class, Game class, and Player class headers to control the functionality of the game.  */

#include <iostream>
#include <string>
#include <vector>

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
private:
	int numCards <= 7;
	int deckSize <= 60;
	int playerLife = 20;
public:
	Player();
	Player(int numCards, int deckSize, int playerLife);
	void firstHand() const;
	void newHand() const;
	void drawCards();
	void displayHand();
};
#endif
