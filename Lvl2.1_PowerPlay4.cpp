/* Izzy Ward    CPSC 1375   May 28, 2023  *
*   INSTRUCTIONS:
*   Ask for an integer numerator & integer denominator (assume !0)
*   Output the decimal equivalent of the entered fraction
*   Use #include <iomanip> & std::cout << std::fixed; & std::cout << std::setprecision(4); */

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
  std::cout << "Enter a numerator." << std::endl;
  std::cout << "Enter a denominator." << std::endl;
    int numer;
    int denom;
  std::cin >> numer >> denom;
    int quo = numer / denom;
    std::cin >> quo;
  std::cout << std::fixed;
  std::cout << std::setprecision(4);
  return 0;
}
