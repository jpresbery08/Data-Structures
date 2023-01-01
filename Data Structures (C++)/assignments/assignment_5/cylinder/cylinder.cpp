/* --------------------------- Implementation File -------------------------- */

/* File Name: cylinder.cpp

This is the implementation file, which contains the member function
definitions) */

/* ----------------------- Member Function Definitions ---------------------- */
#include "cylinder.h"

// Defintion of  Default Constructor
Cylinder :: Cylinder()
: Circle (), height (0.0)
{
  cout << "The Default Constructor was called. " << endl;
}

// Definition of Copy Constructor
Cylinder :: Cylinder(const Cylinder& cylinder)
: Circle(cylinder), height (cylinder.height)
{
  cout << "The Copy Costructor was called. " << endl;
}

// Defintion of Destructor
Cylinder :: ~Cylinder()
{
  // cout << "The Destructor was called. " << endl;
}

// Defintion of Parameter Constructor
Cylinder :: Cylinder(double height, double radius)
: Circle (radius), height (height)
{
  // cout << "The parameter constructor was called. " << endl;
}

// Defintion of get_area Function
double Cylinder :: get_area() const
{
  return 2 * Circle :: get_area() + height;
}

// Defintion of get_volume Function

double Cylinder :: get_volume() const
{
  return height * Circle :: get_area();
}
