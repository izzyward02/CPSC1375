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

//Card.cpp
void Card::shuffleDeck()
{
	std::random_device seed;
	std::default_random_engine engine(seed());
	std::shuffle(drawCard.begin(), drawCard.end(), engine);
}
//Game.h

//Game.cpp

//Player.h

//Player.cpp

