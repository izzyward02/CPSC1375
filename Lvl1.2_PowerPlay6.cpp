/* Izzy Ward    CPSC 1375    May 26, 2023
*  INSTRUCTIONS:
*   Ask the user for integer values for two x,y coordinates
*   Calculate the distance between the two points
*   Display the distance
*   IMPORTANT FORMULA:  sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)) */

#include <iostream>
#include <string>

int main()
{
  std::cout << "Submit two whole number coordinates." << std::endl;
    int x1{};
    int y1{};
    int x2{};
    int y2();
  std::cin >> x1 >> y1 >> x2 >> y2;
    int distance = ((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    std::cin >> distance;
  std::cout << "The distance between these coordinates is " << distance << " units." << std::endl;
    return 0;
}
