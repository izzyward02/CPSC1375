/* Izzy Ward    CPSC 1375   May 30, 2023
*  INSTRUCTIONS:
*   Write a coin sorting program
*   Create a Coin enum class that contains {penny, nickel, dime, quarter}
*   Create a tuple named 'purse' with 4 ints in it
*   Ask the user for the starting number of each coin
*   Display a menu to the user asking them for the next coin & number the options
*   Ask for integer input & use the enum to add the value to the proper slot in the tuple
*   Calculate the user's balance & display it   */

#include <iostream>
#include <string>
#include <tuple>
#include <iomanip>

int main()
{
  enum class Coin { penny, nickel, dime, quarter };
  
  std::tuple<int, int, int, int> purse;
  auto& [pennies, nickels, dimes, quarters] = purse;
  
  std::cout << "Number of pennies: ";
    std::cin >> pennies;
  std::cout << "Number of nickels: ";
    std::cin >> nickels;
  std::cout << "Number of dimes: ";
    std::cin >> dimes;
  std::cout << "Number of quarters: ";
    std::cin >> quarters;
  
  std::cout << "What type of coin are you adding to the purse? \n"
    << " 1. Penny\n"
    << " 2. Nickel\n"
    << " 3. Dime\n"
    << " 4. Quarter\n";
  
  int userChoice{};
  std::cin >> userChoice;
  
  userChoice--;
  switch ((Coin)userChoice)
  {
    case Coin::penny:
      std::get <0> (purse)++;
      break;
    case Coin::nickel:
      std::get <1> (purse)++;
      break;
    case Coin::dime:
      std::get <2> (purse)++;
      break;
    case Coin::quarter:
      std::get <3> (purse)++;
      break;
    default:
      break;
  }
  float total{ pennies * .01f + nickels * .05f + dimes * .1f + quarters * .25f };
  std::cout << "Your purse contains: " << std::fixed << std::setprecision(2) << total << std::endl;
    system("PAUSE");
}
