/*  Izzy Ward   CPSC 1375   June 16, 2023
*     INSTRUCTIONS: 
*       Submit a header & object file (.h and .cpp) for this simple class:
*         Name: Car     Private Members: int numWheels, int numPassengers, int year, string make, string model
*       Create a default constructor
*       Create a conversion constructor which takes parameters for all members
*       Create getters and setters for all private members  */

#include <iostream>
#include <vector>
#include <string>
#include "Lvl4.1_car_class.h"

class Car
{
  private:
    int numWheels;
    int numPassengers;
    int year;
    std::string make;
    std::string model;
};

int main()
{
  //Conversion Constructor that takes all members as a parameter
  Car myCar = { int numWheels, int numPassengers, int year, std::string make, std::string model };
  return 0;
}
  
  
  
  
