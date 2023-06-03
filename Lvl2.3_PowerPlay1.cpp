//  Izzy Ward   CPSC 1375   June 2, 2023
//    INSTRUCTIONS:
//      Create an enum class called Suit with the following members:
//        Hearts, Diamonds, Spades, Clubs
//      Create an enum class called FaceValue with the following members:
//        Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace
//      Create a struct named Card with the following members:
//        Suit suit;   &     FaceValue faceValue;
//      Create an array of Cards with 5 slots called Hand
//      Manually add 5 Cards with valid values to the Hand & print the Hand on the screen

#include <iostream>
#include <string>
#include <array>

enum class Suit{ Hearts, Diamonds, Spades, Clubs };
enum class FaceValue{ Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace };

struct Card
{
  Suit suit{};
  FaceValue faceValue{};
}

int main()
{
  std::array<Card, 5>hand
  {{
    { Suit::Hearts, FaceValue::Ace },
    { Suit::Diamonds, FaceValue::Two }
  }};
  
  hand.at(2) = { Suit::Spades, FaceValue::Three };
  hand.at(3) = { Suit::Clubs, FaceValue::Four };
  hand.at(4) = { Suit::Diamonds, FaceValue::Five };
  
  switch (hand.at(0).faceValue)
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
  
  switch (hand.at(0).suit)
  {
    case Suit::Hearts:
      std::cout << "Hearts";
      break;
    case Suit::Diamonds:
      std::cout << "Diamonds";
      break;
    case Suit::Spades:
      std::cout << "Spades";
    case Suit::Clubs:
      std::cout << "Clubs";
      break;
  }
}
