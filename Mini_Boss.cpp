/* Izzy Ward    CPSC 1375   June 7, 2023
*     INSTRUCTIONS:
*     create an enum called molecular bond w/ 
*       covalent, ionic, metallic, hydrogen bonding, vanderwaals
*     create a struct called Atom w/
*       float weight, string name, string abbreviation, int atomicNumber
*     create a struct called Molecule w/
*       MolecularBond bond, vector<Atom> atoms
*     use a for loop to create a vector with 3 molecules using .push_back()
*     ask user for number of info and display it on the screen  */

#include <iostream>
#include <string>
#include <iomanip>
#incluce <vector>

enum MolecularBond 
{
  Covalent,
  Ionic,
  Metallic,
  Hydrogen Bonding,
  VanDerWaals 
};

struct Atom
{
  float weight;
  std::string name;
  std::string abbreviation;
  int atomicNumber;
};

struct Molecule
{
  MolecularBond bond;
  vector<Atom>atoms;
};

int main()
{
  for ( i = 0; i <= 3; i++ )
  {
    std::cin >> atoms.push_back(i) >> '\n';
  };
  std::cout << "How many atoms are in the molecule? \n";
    std::cin >> atoms.back(i);
  for ( j = 0; j == i; j++ )
  {
    std::cin >> atoms.back(j);
  };
  //atoms.weight
  //atoms.name
  //atoms.
  
  return 0;
}
