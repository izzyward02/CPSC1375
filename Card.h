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
	int manaCost;

public:
	Card();
	Card(int manaCost);
	void tapCard();
	void untapCard();
};
#endif 

enum class CardType() { "Creature", "Enchantment", "Sorcery", "Artifact", "Instant", "Land" };
enum class CardColor() { "Blue", "Green", "Red", "Black", "White", "Colorless" };

struct myCard
{
	CardType cardType{};
	CardColor cardColor{};
	void print() const;
};
