/*  Izzy Ward   CPSC 1375   June 15, 2023
*     INSTRUCTIONS:
*       Reuse the Card struct from prev. PowerPlay
*       Create a 'Deck' class with members... (public) void shuffleDeck();, void shuffleEntireDeck();, 
*       and Card dealCard();  ///   (private) vector<Card> drawPile;
*       Create a 'Hand' class with members... (public) void drawCard(Card drawnCard); & void revealHand();
*       (private) vector<Card> currentHand;
*       Create a 'Player' class with members... (public) void drawCard(Card drawnCard);, void call();,
*       void raise(int & pot), and void revealHand();   ///   (private) Hand currentHand; & int money;    */

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>

enum class Suit{ Hearts, Diamonds, Spades, Clubs, numSuits };
enum class FaceValue{ Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace, numValues };

struct Card
{
  Suit suit{};
  FaceValue faceValue{};
  void print() const;
};

class Deck
{
  public:
    void shuffleEntireDeck(); //wipe out vector, add all cards back on, call shuffleDeck();
    Card dealCard();
  private:
    void shuffleDeck();
    std::vector<Card> drawPile;
};

class Hand
{
  public:
    void drawCard(Card drawnCard);
    void revealHand();  //prints hand to screen and empties currentHand vector
  private:
    std::vector<Card> currentHand;
};

class Player
{
  public:
    void drawCard(Card drawnCard); //calls Hand's drawCard
    void call(); //does nothing right now
    void raise(int& pot); //ask for amount, add to pot, reduce from money owned
    void revealHand(); //calls Hand's revealHand()
  private:
    Hand currentHand;
    int money{ 25 };
};
std::vector<Card> drawHand(std::vector<Card>& deck);

int main()
{
  int pot{ 0 };
  Deck deck;
  deck.shuffleEntireDeck();
  Player player1;
  player1.drawCard(deck.dealCard());
  player1.drawCard(deck.dealCard());
  player1.drawCard(deck.dealCard());
  player1.drawCard(deck.dealCard());
  player1.drawCard(deck.dealCard());
  
  player1.raise(pot);
  player1.revealHand();
}

std::vector<Card> drawHand(std::vector<Card>& deck)
{
  std::vector<Card> hand;
  hand.reserve(5);
  for (int i{ 0 }; i < 5; i++)
  {
    hand.push_back(deck.back());
    deck.pop_back();
  }
  return hand;
}

void Deck::shuffleDeck()
{
  std::random_device seed;
  std::default_random_engine engine(seed());
  std::shuffle(drawPile.begin(), drawPile.end(), engine);
}

void Deck::shuffleEntireDeck()
{
  drawPile.clear();
  drawPile.reserve(52);
  for (int suit{ 0 }; (int)Suit::numSuits; suit++)
  {
    for (int value{ 0 }; value < (int)FaceValue::numValues; value++)
    {
      drawPile.push_back({ (Suit)suit, (FaceValue)value });
    }
  }
  shuffleDeck();
}

Card Deck::dealCard()
{
  Card temp{ drawPile.back() };
  drawPile.pop_back();
  return temp;
}

void Hand::drawCard(Card drawnCard)
{
  currentHand.push_back(drawnCard);
}

void Hand::revealHand()
{
  for (const auto & card : currentHand)
  {
    card.print();
  }
}

void Card::print() const
{
  switch (faceValue)
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
  switch (suit)
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

void Player::drawCard(Card drawnCard)
{
  currentHand.drawCard(drawnCard);
}

void Player::call()
{
}

void Player::raise(int& pot)
{
  int amount{ -1 };
  while (amount < 0 || amount > money)
  {
    std::cout << "How much do you want to raise? : ";
    std::cin >> amount;
  }
  pot += amount;
  money -= amount;
}

void Player::revealHand()
{
  currentHand.revealHand();
}
