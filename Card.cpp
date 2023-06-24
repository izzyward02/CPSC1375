#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <array>

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
		case CardType::Creature:
			std::cout << "Creature";
			break;
		case CardType::Enchantment:
			std::cout << "Enchantment";
			break;
		case CardType::Sorcery:
			std::cout << "Sorcery";
			break;
		case CardType::Artifact:
			std::cout << "Artifact";
			break;
		case CardType::Instant:
			std::cout << "Instant";
			break;
		case CardType::Land:
			std::cout << "Land";
			break;
	}
	switch (cardColor)
	{
		case CardColor::Blue:
			std::cout << "Blue";
			break;
		case CardColor::Green:
			std::cout << "Green";
			break;
		case CardColor::Red:
			std::cout << "Red";
			break;
		case CardColor::Black:
			std::cout << "Black";
			break;
		case CardColor::White:
			std::cout << "White";
			break;
		case CardColor::Colorless:
			std::cout << "Colorless";
			break;
	}
}
