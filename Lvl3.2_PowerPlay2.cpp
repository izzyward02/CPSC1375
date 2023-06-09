/*  Izzy Ward   CPSC 1375   June 8, 2023
*     INSTRUCTIONS:
*       Ask the user for a positive number
*       Create a function called 'void createTable(int num);' that uses a nested for loop
*       to output the multiplication table from 1 to that number
*       EXAMPLE: input is 3, then output is...
*         x123  [ENTR]  1123  [ENTR]  3246  [ENTR]  3369  */

#include <iostream>
#include <string>
#include <vector>

int getNum()
{
  int number{ 0 };
  while (number < 1)
    std::cout << "Enter a positive number: ";
    std::cin >> number;
  return number;
}

void createTable(int number)
{
  std::cout << "x";
  for (int i{ 1 }; i <= number; i++)
    std::cout << i << " ";
  std::cout << std::endl;
  for (int row{ 1 }; row <= number; row++)
    std::cout << row << " ";
    for (int col{ 1 }; col <= number; col++)
      std::cout << (row) * (col) << " ";
    std::cout << std::endl;
}

int main()
{
  createTable(getNum());
  return 0;
}
