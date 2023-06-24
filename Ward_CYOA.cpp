/* Izzy Ward  CPSC 1375  June 22, 2023
*    DESCRIPTION:  This program plays a basic Magic: The Gathering game.
*    It consists of a Card class, Game class, and Player class headers to control the functionality of the game.  */

#include "Card.h"  //includes card header
#include "Game.h"  //includes game header
#include "Player.h"  //includes player header

#include <iostream>
#include <vector>
#include <string>
#include <array>

//Card.h
#include <iostream>
#include <string>
#include <vector>
#include <array>

#ifndef CARD_H
#define CARD_H

class Card
{
private:
	std::array cardType[6] = {"Creature", "Enchantment", "Sorcery". "Artifact", "Instant", "Land"};
        std::array cardColor[6] = {"Blue", "Green", "Red", "Black", "White", "Colorless"};
	std::array cardType;
	int manaCost;

public:
	Card();
	Card(std::array cardType, std::array cardColor, std::array cardType, int manaCost);
	void tapCard();
	void untapCard();
	void movetoExile();
	void movetoGraveyard();
};
#endif 

//Card.cpp
void Card::shuffleDeck()
{
	std::random_device seed;
	std::default_random_engine engine(seed());
	std::shuffle(drawCard.begin(), drawCard.end(), engine);
}

//Game.h
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

//Game.cpp

//Player.h

//Player.cpp

