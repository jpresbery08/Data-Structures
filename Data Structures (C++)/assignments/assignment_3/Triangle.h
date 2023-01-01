/*
File Name: Triangle.h
Name: Jermaine Presbery
Date: 11 September 2020
Assignment #3

---------------------- Brief Description -----------------------------
This file is the Interface where where I will define the class as well as
enter in the class members. As a whole this program makes a class called
Triangle and has different member functions and data members that all
a user or a programmer to calculate the area and perimeter of triangle with
the use of Herons formula.
*/

/*---------------------------- Preprocessors ----------------------------*/
#ifndef TRIANGLE_H
#define TRIANGLE_H



#include <iostream>
#include <cmath>
#include <iomanip>
#include <cassert>
using namespace std;
/*----------------------- Class and Member FUnctions -------------------*/

  class Triangle
  {
    private:
      double side1;    //  Data Member
      double side2;    //  Data Member
      double side3;    //  Data Member

    public:
      Triangle(double side1, double side2, double side3);   // Parameter constructor
      // Triangle();                                        // Default Constructor
      // Triangle(const Triangle& triangle)                 // Copy Constructor
      ~Triangle();                                 // Destructor
      double get_perimeter() const;                // Accessor (getter)
      double get_area() const;                     // Accessor (getter)
  }

  #endif
