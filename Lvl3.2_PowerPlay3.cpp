/*  Izzy Ward   CPSC 1375   June 8, 2023
*     INSTRUCTIONS:
*       Make a guessing game
*       Ask user 1 for a number between 1 and 10
*       Keep asking user 2 to guess a number between 1 and 10 until correct or have guessed 3 times
*       Output if won or lost
*       Write a function called 'bool guessAgain(int guess, int solution, int numGuesses);'
*       that takes the guess and the number of guesses so far and returns true or false
*       depending if they can guess again
*       Use the bool function as the boolean expression for the while loop  */

#include <iostream>
#include <string>
#include <vector>

int guess;
int solution;
int numGuesses = 0;

std::cout << "Player 1, choose a number between 1 and 10: ";
  std::cin >> solution;

bool guessAgain(int guess, int solution, int numGuesses)
{
  std::cout << "Player 2, guess a number between 1 and 10: ";
    std::cin >> guess;
  while (numGuesses <= 3)
  {
    numGuesses++;
    if (guess > solution)
      std::cout << "TOO HIGH. TRY AGAIN.\n";
    else if (guess < solution)
      std::cout << "TOO LOW. TRY AGAIN.\n";
    else if (guess == solution)
      std::cout << "CORRECT!\n";
      std::cout << "It took Player 2 " << numGuesses << "guesses to guess Player 1's number.\n";
      break;
    else
      std::cout << "YOU DID NOT GUESS PLAYER 1'S NUMBER IN 3 TRIES. YOU LOSE.\n";
  }
  return true;
}

int main()
{
  while (guessAgain == true)
    std::cout << "Player 2, guess another number between 1 and 10: ";
    std::cin >> guess;
  return 0;
}
