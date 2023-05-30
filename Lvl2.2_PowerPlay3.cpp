/*  Izzy Ward   CPSC 1375   May 30, 2023
*   INSTRUCTIONS:
*     Create a Coordinate struct with two float members (x & y)
*     Create two instances of this struct
*     Ask the user for two points and store the values in these instances */

#include <iostream>

struct Coordinate
{
    float axisX {};
    float axisY {};
};

int main()
{
    Coordinate pointA;
    pointA.axisX = { user_X1 };
    pointA.axisY = { user_Y1 };
      std::cout << "Choose your first coordinate: " << user_X1 << ", " << user_Y1 << '\n';
      std::cin >> user_X1 >> user_Y1;

    Coordinate pointB;
    pointB.axisX = { user_X2 };
    pointB.axisY = { user_Y2 };
      std::cout << "Choose your second coordinate: " << user_X2 << ", " << user_Y2 << '\n';
      std::cin >> user_X2 >> user_Y2;

    return 0;
}
