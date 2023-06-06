/*  Izzy Ward   CPSC 1375   June 5, 2023
*     INSTRUCTIONS:
*       Make a guessing game that asks the user for an int between 1 and 10
*       Use system("CLS");
*       Keep asking the user to guess a number until it is right or there are 3 guesses
*       Output win or loss status and use system("CLS");  */

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

int main() 
{
  int randNum;  //random number
  int guess;  //user guess
  int numGuesses = 0;   //number of guesses
    
  randNum(time(0));   //times a random number is generated
  randNum = rand() % 10; //must generate between 1 and 10
    
  while (numGuesses <= 3)   
    std::cout << "Pick a number between 1 and 10: ";
    cin >> guess;
    cout << system("CLS") << std::endl;
    
    if (guess == num)
      std::cout << "YOU WIN!";
      break;
    else if (guess < num || guess > num)
      std::cout << "TRY AGAIN.";
      numGuesses++;
      break;
    else
      std::cout << "YOU LOSE.";
      system("CLS");
      break;
  return 0;
}
