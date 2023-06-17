//HEADER FILE FOR LVL 4.1 PRACTICE BATTLE
#include <iostream>
#include <vector>
#include <string>
#ifndef CAR_CLASS_H
#define CAR_CLASS_H
#pragma once

class Car
{
  public:
    Car();  //Default Constructor
    
    //Setters
    void setNumWheels(int wheels)
      numWheels = wheels;
    void numPassengers(int pass)
      numPassengers = pass;
    void year(int y)
      year = y;
    void make(std::string mk)
      make = mk;
    void model(std::string md)
      model = md;
    //Getters
    int getNumWheels()
      return numWheels;
    int getNumPassengers()
      return numPassengers;
    int getYear()
      return year;
    std::string getMake()
      return make;
    std::string getModel()
      return model;
    
};
#endif 
