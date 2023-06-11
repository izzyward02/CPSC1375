/*  Izzy Ward   CPSC 1375   June 10, 2023
*     INSTRUCTIONS:
*       Submit a code that, when compiled, will open a file 'random.txt' for writing
*       Generates two random numbers from 1-100 and saves them to a file
*       MUST use #include <random> library
*       Opens the 'random.txt' file for reading
*       Generates 10 more random numbers on a normal curve with a median of the first number
*       in the file and standard deviation of the second number
*       Those 10 numbers should be output to the screen using cout    */

#include <iostream>
#include <random>
#include <string>
#include <fstream> 

int main()
{
  std::ofstream outf{ "random.txt" }; // creates 'random.txt' & opens for writing
  
  std::random_device rd;
  std::seed_seq ss{ rd(), rd() }; //gets 2 ints
  std::mt19937 mt{ ss }; //initialize Mersenne Twister
  std::uniform_int_distribution nums{ 1, 100 }; //generates nums between 1 and 100
  for (int count{ 1 }; count <= 2; ++count) //prints 2 random ints
    outf << nums(mt) << '/t';
    if (count == 2)
      file.close();  //when 2 ints are printed to the file, close it for writing
  
  std::ifstream inf{ "random.txt" };  //opens 'random.txt' for reading
  
  std::seed_seq ss{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() }; //get 10 ints
  std::uniform_int_distribution nums{ 1, 100 }; //generates nums between 1 and 100
  for (int count{ 1 }; count <= 10; ++count) //print 10 random ints
    std::cout << nums(mt) << '/t';
  
    if (count % 10 == 0) //when 10 ints are printed, start a new sequence
      std::cout << '\n';
  
  return 0;
}
