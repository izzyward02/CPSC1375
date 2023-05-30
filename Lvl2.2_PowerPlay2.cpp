/* Izzy Ward    CPSC 1375   May 30, 2023
*  INSTRUCTIONS:
*   Ask for two integers
*   Ask whether to (a)dd, (s)ubtract, (m)ultiply, or (d)ivide the numbers
*   Double check you are not dividing by zero
*   Use a 'switch' case for choosing the operation  */

#include <iostream>
#include <string>
#include <tuple>
#include <iomanip>

int main()
{
  enum class Calculate { a, s, m, d };
  
  std::tuple<int, int> nums;
  auto& [num1, num2] = nums;
  
  std::cout << "Pick your first number: ";
    std::cin >> num1;
  std::cout << "Pick your second integer: ";
    std::cin >> num2;
  
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
  std::cout << "Your total is: " << std::fixed << std::setprecision(0) << total << std::endl;
    system("PAUSE");
}
