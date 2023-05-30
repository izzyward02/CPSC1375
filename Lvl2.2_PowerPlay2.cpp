/* Izzy Ward    CPSC 1375   May 30, 2023
*  INSTRUCTIONS:
*   Ask for two integers
*   Ask whether to (a)dd, (s)ubtract, (m)ultiply, or (d)ivide the numbers
*   Double check you are not dividing by zero
*   Use a 'switch' case for choosing the operation  */

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
  std::cout << "Choose two numbers: \n";
    std::string num1;
    std::string num2;
  std::cin >> num1 >> num2;
  
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
  return 0;
}
