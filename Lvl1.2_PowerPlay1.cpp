/* Izzy Ward    CPSC 1375    May 26, 2023
*  INSTRUCTIONS:
*   Write a program that asks the user for his/her name
*   and greet them with their name  */

#include <iostream>
#include <string>

int main()
{
  std::cout << "Hello! What is your name?" << std::endl;
  
  std::string friend_name;
  string::cin >> friend_name;
  
  std::cout << "Nice to meet you, " << friend_name << "!" << std::endl;
  
    return 0;
}
