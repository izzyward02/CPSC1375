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
  auto& [win, lose] = nums;
  
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
  
  std::cout << "Which operation would you like to use? \n"
    << " a = Addition\n"
    << " s = Subtraction\n"
    << " m = Multiplication\n"
    << " d = Division\n";
  
  int userChoice{};
  std::cin >> userChoice;
  
  userChoice--;
  switch ((Calculate)userChoice)
  {
    case Calculate::a:
      std::get <a> (num1 + num2);
      break;
    case Calculate::s:
      std::get <s> (num1 - num2);
      break;
    case Calculate::m:
      std::get <m> (num1 * num2);
      break;
    case Calculate::d:
      if num2 != 0
        std::get <d> (num1 / num2);
      else
        std::cout << "Your denominator cannot be zero! \n"
      break;
    default:
      break;
  }
  float total{ (a + 0f) + (s + 0f) + (m + 0f) + (d+ 0f) };
  std::cout << "Your total is: " << std::fixed << std::setprecision(0) << total 
  return 0;
}
