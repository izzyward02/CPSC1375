/* Izzy Ward  CPSC 1375  June 22, 2023
*    DESCRIPTION:  This program plays a basic Magic: The Gathering game.
*    It consists of a Card class, Game class, and Player class headers to control the functionality of the game.  */

#include <iostream>
#include <string>
#include <vector>

#ifndef GAME_H
#define GAME_H

class Game
{
private:
	int lifeCounter {};
	bool inPlay {};
public:
	Game();
	Game(int lifeCounter, bool inPlay);
	void shuffleDeck();
	void discardCard();
	void drawCard();
	void placeLands();
	lifeCounter = 20;
};
#endif
