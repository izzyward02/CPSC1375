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
  std::cout << "Please enter three addresses: ";
  //userAddresses instance #1
    userAddresses.push_back(Address());
    std::cin 
      >> userAddresses.back().streetNumber 
      >> userAddresses.back().street
      >> userAddresses.back().city
      >> userAddresses.back().state
      >> userAddresses.back().zipcode;
  //userAddresses instance #2
    userAddresses.push_back(Address());
    std::cin 
      >> userAddresses.back().streetNumber 
      >> userAddresses.back().street
      >> userAddresses.back().city
      >> userAddresses.back().state
      >> userAddresses.back().zipcode;
  // userAddresses instance #3
    userAddresses.push_back(Address());
    std::cin 
      >> userAddresses.back().streetNumber 
      >> userAddresses.back().street
      >> userAddresses.back().city
      >> userAddresses.back().state
      >> userAddresses.back().zipcode;
  return 0;
}

