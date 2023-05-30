/*  Izzy Ward   CPSC 1375   May 30, 2023
* INSTRUCTIONS:
*   Write a program that asks the user for their name
*   Only greet them if their name is 'Alice' or 'Bob'
*   Otherwise, give an adequate, generic response */

#include <iostream>
#include <string>

int main()
{
  std::cout << "Hello! What is your name?" << '\n';
    std::string friend_a{"Alice"};
    std::string friend_b{"Bob"};
    std::string your_name;
  std::cin >> your_name;
  
  if (your_name == friend_a)
    std::cout << "Hello, Alice!" << '\n';
  else if (your_name == friend_b)
    std::cout << "Hello, Bob!" << '\n';
  else
    std::cout << "Hello, friend!" << '\n'
    
  return 0;
}
