/*
File Name: triangle.cpp
Name: Jermaine Presbery
Date: 11 September 2020
Assignment #3

---------------------- Brief Description -----------------------------
This file is the Implementation where where I will define the class member
member functions.
*/

#include "Triangle.h"


/*-------------------- Member Function Defintions -------------------------*/

// Defintion of Parameter
Triangle :: Triangle(double side1, double side2, double side3)
  : side1 (side1), side2 (side2), side3 (side3)
  {
    if((side1 + side2 <= side3) || (side1 + side3 <= side2) || (side2 + side3 <= side2))
    {
      cout << "The Triangle cannot be made sorry, try entering better numbers." << endl;
      cout << endl;
      assert(false);
    }
  }



// Defintion of Destructor
Triangle :: ~Triangle()
{
  cout << "The destructor was called: " << endl;
  cout << endl;
}

/* Defintion of Default Constructor
Triangle :: Triangle()
: side1 (0.0) side2 (0.0), side3 (0.0)
{

}

*/

/* Defintion of Copy Constructor
Triangle :: Triangle(const Triangle& triangle)
: side1 (triangle.side1), side2 (triangle.side2), side3 (triangle.side3)


*/


/*---------------------------------------------------------------------------*/

// Defintion for get_perimeter (Accessor)

double Triangle :: get_perimeter() const
{

  // Herons Formula

  return ((side1 + side2 + side3) / 2);
}

// Defintion for get_area (Accessor)

double Triangle :: get_area() const
{

    // Declaring Variables
  double area;
  double p;

   // Herons Formula
  p = (side1 + side2 + side3) / 2;
  area = sqrt(p*((p-side1)*(p-side2)*(p-side3)));


  return area;
}
