/*  Izzy Ward   CPSC 1375   June 8, 2023
*     INSTRUCTIONS:
*       Using the enums & structs from the card deck program (prev PowerPlays)
*       Create a vector of Cards called 'deck'
*       Create a function 'vector<Card> createDeck()' that uses a nested for loop
*       to push all 52 cards of a standard poker deck onto the deck vector
*       Use #include <algorithm> & #include <random>
*       Use std::random_device seed; & std::default_random_engine engine(seed());
*       Use std::shuffle(deck.begin(), deck.end(), engine); to shuffle the deck
*       Create a function 'vector<Card> drawHand(vector<Card> & deck);' that has a 
*       for loop that pops 5 cards off the deck using 'deck.back();' & 'deck.pop_back()'
*       and stores them in a new vector called 'hand', where 'hand' vector gets returned  */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>

enum class Suit{ Hearts, Diamonds, Spades, Clubs, numSuits };

enum class FaceValue
{
  Two,
  Three,
  Four,
  Five,
  Six,
  Seven,
  Eight,
  Nine,
  Ten,
  Jack,
  Queen,
  King,
  Ace,
  numValues
};

struct Card
{
  Suit suit{};
  FaceValue faceValue{};
};

std::vector<Card> createDeck();
void shuffleDeck(std::vector<Card>& deck);
std::vector<Card> drawHand(std::vector<Card>& deck);
void printCard(const Card& card);

int main()
{
  std::vector<Card> deck{ createDeck() };
  shuffleDeck(deck);
  
  std::vector<Card> hand{ drawHand(deck) };
  for (const auto& card : hand)
    printCard(card);
}

std::vector<Card> createDeck()
{
  std::vector<Card> deck;
  deck.reserve(52);
  for (int suit{ 0 }; suit < (int)Suit::numSuits; suit++)
    for (int value { 0 }; value < (int)FaceValue::numValues; value++)
      deck.push_back({ (Suit)suit, (FaceValue)value });
  return deck;
}

void shuffleDeck(std::vector<Card>& deck)
{
  std::random_device seed;
  std::default_random_engine engine(seed());
  std::shuffle(deck.begin(), deck.end(), engine);
}

std::vector<Card> drawHand(std::vector<Card>& deck)
{
  std::vector<Card> hand;
  hand.reserve(5);
  for (int i{ 0 }; i < 5; i++)
    hand.push_back(deck.back());
    deck.pop_back();
  return hand;
}

void printCard(const Card& card)
{
  switch (card.faceValue)
  {
    case FaceValue::Two:
      std::cout << "Two";
      break;
    case FaceValue::Three:
      std::cout << "Three";
      break;
    case FaceValue::Four:
      std::cout << "Four";
      break;
    case FaceValue::Five:
      std::cout << "Five";
      break;
    case FaceValue::Six:
      std::cout << "Six";
      break;
    case FaceValue::Seven:
      std::cout << "Seven";
      break;
    case FaceValue::Eight:
      std::cout << "Eight";
      break;
    case FaceValue::Nine:
      std::cout << "Nine";
      break;
    case FaceValue::Ten:
      std::cout << "Ten";
      break;
    case FaceValue::Jack:
      std::cout << "Jack";
      break;
    case FaceValue::Queen:
      std::cout << "Queen";
      break;
    case FaceValue::King:
      std::cout << "King";
      break;
    case FaceValue::Ace:
      std::cout << "Ace";
      break; 
  }
  
  std::cout << " of ";
  
  switch (card.suit)
  {
    case Suit::Hearts:
      std::cout << "Hearts";
      break;
    case Suit::Diamonds:
      std::cout << "Diamonds";
      break;
    case Suit::Spades:
      std::cout << "Spades";
      break;
    case Suit::Clubs:
      std::cout << "Clubs";
      break;
  }
  std::cout << std::endl;
}
