// Izzy Ward    CPSC 1375   June 2, 2023
//   INSTRUCTIONS:
//    Define a struct named Coordinate with the following members:
//      float x{0.0f};    and     float y{0.0f};
//    Create a vector of coordinates called 'polygon'
//    Ask the user for 4 x and y values and push them onto the vector
//      use polygon.push_back().x >> polygon.back().y;
//    Calculate the perimeter of the polygon and output it to the console
//      use sqrt((x2 - x1 )2 + (y2 - y1)2);

#include <iostream>
#include <vector>

struct Coordinate
{
  float x{ 0.0f };
  float y{ 0.0f };
}

int main()
{
  std::vector<Coordinate>polygon;
  std::cout << "Please enter the x and y coordinates for four points on a polygon: ";
    polygon.push_back(Coordinate());
    std::cin >> polygon.back().x >> polygon.back()y;
  
    polygon.push_back(Coordinate());
    std::cin >> polygon.back().x >> polygon.back()y;
  
    polygon.push_back(Coordinate());
    std::cin >> polygon.back().x >> polygon.back()y;
  
    polygon.push_back(Coordinate());
    std::cin >> polygon.back().x >> polygon.back()y;
  
  float side1
  { 
    sqrt( 
      ((Polygon.at(1).x - Polygon.at(0).x) * (Polygon.at(1).x - Polygon.at(0).x))
      +
      ((Polygon.at(1).y - Polygon.at(0).y) * (Polygon.at(1).y - Polygon.at(0).y))
  )};
  
  float side2
  {
    sqrt(
      ((Polygon.at(2).x - Polygon.at(1).x) * (Polygon.at(2).x - Polygon.at(1).x))
      +
      ((Polygon.at(2).y - Polygon.at(1).y) * (Polygon.at(2).y - Polygon.at(1).y)) 
  )};
  
  float side3
  {
    sqrt(
      ((Polygon.at(3).x - Polygon.at(2).x) * (Polygon.at(2).x - Polygon.at(1).x))
      +
      ((Polygon.at(3).y - Polygon.at(2).y) * (Polygon.at(2).y - Polygon.at(1).y))
  )};
  
  float side4
  {
    sqrt(
      ((Polygon.at(0).x - Polygon.at(3).x) * (Polygon.at(0).x - Polygon.at(3).x))
      +
      ((Polygon.at(0).y - Polygon.at(3).y) * (Polygon.at(0).y - Polygon.at(3).y))
  )};
  
  std::cout << "The perimeter of your polygon is " << (side1 + side2 + side3 + side4) << ".\n";
  system("PAUSE");
  return 0;
}
