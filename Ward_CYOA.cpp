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

//main.cpp
int main()
{
	Card deck;
	deck.shuffleDeck();
	Player player1;

	if (drawnCard < 7)
		player1.drawCard(deck.drawCard());
	else
		continue;
	
	Game.placeLands();
	
	std::cout << "What type of card do you want to play?" << Card.cardType << '\n';
	std::cin >> cardType;
	std::cout << "What color is the card?" << Card.cardColor << '\n';
	std::cin >> cardColor;
	std::cout << "How much mana does it cost?" << Card.manaCost << '\n';
	std::cin >> manaCost;

	return 0;
}


