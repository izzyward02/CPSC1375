/*  Izzy Ward   CPSC 1375   May 30, 2023
*   INSTRUCTIONS:
*     Ask the user for 5 integers
*     Add them up
*     If the sum is greater than 100, output "YOU WIN!!!!!"
*     Otherwise, output "YOU LOSE :("
*     NOTE: only 2 variables are needed for this problem  */

#include <iostream>
#include <string>
#include <tuple>
#include <iomanip>

int main()
{
  enum class Number_Game { win, lose };
  
  std::tuple<int, int, int, int, int> nums;
  auto& [num1, num2, num3, num4, num5] = nums;
  
  std::cout << "You will choose five integers. First number: ";
    std::cin >> num1;
  std::cout << "Second number: ";
    std::cin >> num2;
  std::cout << "Third number: ";
    std::cin >> num3;
  std::cout << "Fourth number: ";
    std::cin >> num4;
  std::cout << "Fifth number: ";
    std::cin >> num5;
  
  if ((num1 + num2 + num3 + num4 + num5) > 100)
    std::cout << "YOU WIN!!!!! \n";
  else
    std::cout << "YOU LOSE :( \n";
  
  return 0;
}
