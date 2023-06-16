/*    Izzy Ward   CPSC 1375   June 15, 2023
*       INSTRUCTIONS:
*         Create an 'Atom' class with members... (private) int number, string name, string abbreviation,
*         and float weight
*         Include getters and setters for all four members
*         In int main()... Create a vector<Atom> water
*         Push two Hydrogen atoms and an Oxygen atom onto the vector    */

#include <iostream>
#include <vector>
#include <math.h>

class Atom
{
  private:
    int number;
    std::string name;
    std::string abbreviation;
    float weight;

  public:
    // Setters
    void setNumber(int num)
      number = num;
    void setName(std::string name)
      name = ID;
    void setAbbreviation(std::string abbreviation)
      abbreviation = abrv;
    void setWeight(float weight)
      weight = w;
    // Getters
    int getNumber()
      return number;
    std::string getName()
      return name;
    std::string getAbbreviation()
      return abbreviation;
    float getWeight()
      return weight;
};

int main()
{
  std::vector<Atom> atoms;
 // switch(atoms)
   // case Atom::
  
  //NOTE TO MR. ORME: program is incomplete due to time constraints (spent too much time on Quest 3)
  return 0;
}

