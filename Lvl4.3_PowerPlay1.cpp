/*  Izzy Ward   CPSC 1375   June 20, 2023
*     INSTRUCTIONS:
*       Start w/ polygon class from prev. PowerPlay
*       Modify the polygon class so that the 'calculateDistance' method takes Coordinates */

#include <iostream>
#include <vector>
#include <math.h>

class Polygon
{
  public:
    struct Coordinate
    {
      float x{ 0.0f };
      float y{ 0.0f };
    };
    void addCoordinate(Coordinate point);
    void addCoordinate();
    float calculatePerimeter();
  
  private:
    std::vector<Coordinate> points;
    float calculateDistance(const Coordinate * point1, const Coordinate * point2);
};

int main()
{
  Polygon octagon;
  std::cout << "Please enter 8 coordinates: " << std::endl;
  for (int i{ 0 }; i < 8; i++)
  {
    octagon.addCoordinate();
  }
  std::cout << "The perimeter for your polygon is: " << octagon.calculatePerimeter();
  return 0;
}

void Polygon::addCoordinate(Coordinate point)
{
  points.push_back(point);
}

void Polygon::addCoordinate()
{
  Coordinate temp;
  std::cout << "Please enter your x and y values: " << std::endl;
  std::cin >> temp.x >> temp.y;
  addCoordinate(temp);
}

float Polygon::calculatePerimeter()
{
  if (points.size() > 2)
  {
    float perimeter{ 0.0f };
    for (int i{ 0 }; i < points.size() - 1; i++)
      perimeter += calculateDistance(&points.at(i), &points.at(i + 1));
    perimeter += calculateDistance(&points.front(), &points.back());
    return perimeter;
  }
  return 0.0f;
}

float Polygon::calculateDistance(const Coordinate * point1, const Coordinate * point2)
{
  return sqrt((point1 -> x - point2 -> x) * (point1 -> x - point2 -> x) + 
              (point1 -> y - point2 -> y) * (point1 -> y - point2 -> y));
}


