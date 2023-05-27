/* Izzy Ward    CPSC 1375    May 26, 2023
*  INSTRUCTIONS:
*   Ask the user for two numbers
*   Add them together
*   Display the results (decimals are allowed)*/

#include <iostream>
#include <string>

int main()
{
  std::cout << "Choose two decimal numbers..." << std::endl;
    float num1{};
    float num2{};
  std::cin >> num1 >> num2;
  
  std::cout << "The sum of your numbers is " << num1 + num2 << std::endl;
    return 0;
}
