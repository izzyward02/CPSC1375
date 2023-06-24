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
	int manaCost;

public:
	Card();
	Card(std::array cardType, std::array cardColor, int manaCost);
	void tapCard();
	void untapCard();
};
#endif 

//Card.cpp
void Card::shuffleDeck()
{
	std::random_device seed;
	std::default_random_engine engine(seed());
	std::shuffle(drawCard.begin(), drawCard.end(), engine);
}
void Card::drawCard()
{
	Card temp{ drawCard.back() };
	drawCard.pop_back();
	return temp;
}
void Card::print() const
{
	switch (cardType)
	{
		
	}
	switch (cardColor)
	{
		
	}
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
	void shuffleDeck {};
	std::vector<Card> currentHand;
public:
	Game();
	Game(int lifeCounter, bool inPlay, void shuffleDeck, std::vector<Card> currentHand);
	void discardCard();
	void drawCard(Card drawnCard);
	void placeLands();
	void displayHand();
	lifeCounter = 20;
};
#endif

//Game.cpp
void Game::shuffleDeck()
{
	std::random_device seed;
	std::default_random_engine engine(seed());
	std::shuffle(drawCard.begin(), drawCard.end(), engine);
}
void Game::drawCard(Card drawnCard)
{
	currentHand.push_back(drawnCard);
}
void Game::displayHand()
{
	for (const auto & card : currentHand)
	{
		card.print();
	}
}

//Player.h
#include <iostream>
#include <string>
#include <vector>

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
	void drawCards();
	void displayHand();
	void drawCard(Card drawnCard);
	numCards <= 7;
	deckSize <= 60;
	playerLife = 20;
};
std::vector<Card> drawHand(std::vector<Card>& deck);
#endif

//Player.cpp
std::vector<Card> drawHand(std::vector<Card>& deck)
{
	std::vector<Card> hand;
	hand.reserve(7);
	for (int i{0}; i < 7; i++)
	{
		hand.push_back(deck.back());
		deck.pop_back();
	}
	return hand;
}
void Player::drawCard(Card drawnCard)
{
	currentHand.drawCard(drawnCard);
}

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
}


