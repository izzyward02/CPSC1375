/* Author:  Izzy Ward     CPSC 1375
*  Date: May 29, 2023
*   INSTRUCTIONS: Write a simple struct with at least two members that are fundamental types
*   Make up an enum that is appropriate for this struct and include it in the code
*   Use enum class as opposed to old fashioned enum.  */

#include <iostream>
#include <string>

struct Pets
{
  enum class Identification {species, color, name};
  
  std::string petSpecies;
  std::string petColor;
  std::string petName;
}
