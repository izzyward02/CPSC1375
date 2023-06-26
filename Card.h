/* Izzy Ward  CPSC 1375  June 22, 2023
*    DESCRIPTION:  This program plays a basic Magic: The Gathering game.
*    It consists of a Card class, Game class, and Player class headers to control the functionality of the game.  */

#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <array>

#ifndef CARD_H
#define CARD_H

class Card
{
private:
	std::array cardType[6] = {"Creature", "Enchantment", "Sorcery". "Artifact", "Instant", "Land"};	//change these to enum classes, not arrays
        std::array cardColor[6] = {"Blue", "Green", "Red", "Black", "White", "Colorless"};
	int manaCost;

public:
	Card();
	Card(std::array cardType, std::array cardColor, int manaCost);
	void tapCard();
	void untapCard();
};
#endif 

struct Card
{
	CardType cardType{};
	CardColor cardColor{};
	void print() const;
};
