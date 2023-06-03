//  Izzy Ward   CPSC 1375   June 2, 2023
//    INSTRUCTIONS:
//      Ask the user for 3 numbers and store these numbers on a vector of ints
//      Then output the three values to the screen
//        use std::vector<int>myVector(3);

#include <iostream>
#include <vector>

int main()
{
  std::vector<int>myVector(3);
  std::cout << "Enter three values: ";
  std::cin >> myVector.at(0) >> myVector.at(1) >> myVector.at(2);
  
  std::cout << myVector.at(0) << std::endl;
  std::cout << myVector.at(1) << std::endl;
  std::cout << myVector.at(2) << std::endl;
  
  return 0;
}
