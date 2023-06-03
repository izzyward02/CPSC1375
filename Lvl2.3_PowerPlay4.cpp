//  Izzy Ward   CPSC 1375   June 2, 2023
//    INSTRUCTIONS:
//      Define an 'address' struct with the following members:
//        int streetNumber;
//        string street;
//        string city;
//        string state;
//        int zipcode;
//      Create an array called 'block' that holds 3 addresses
//      Ask the user for the 3 addresses
//      Don't create any temporaries outside the array

#include <iostream>
#include <string>

struct Address
{
  int streetNumber{};
  char street{};
  char city{};
  char state{};
  int zipcode{};
};

int main()
{
  std::array<Address, 3>userAddresses
  return 0;
}

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
