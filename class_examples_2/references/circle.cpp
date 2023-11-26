/* --------------------------- Implementation File -------------------------- */

/* File Name: circle.cpp

This is the implementation file, which contains the member function
definitions) */

/* ----------------------- Member Function Definitions ---------------------- */

#include "circle.h"

// Definition of Parameter Constructor
Circle :: Circle(double rds)
: radius (rds)
{
cout << "The parameter constructor was called." << endl;
}

// Definition of the Defualt Constructor
Circle :: Circle()
: radius (0.0)
{
cout << "The default constructor was called." << endl;
}

// Definition of the Copy Constructor
Circle :: Circle(const Circle& circle)
: radius (circle.radius)
{
cout << "The copy constructor was called." << endl;
}

// Definition of Destructor
Circle :: ~ Circle()
{
cout << "The destructor was called with circle of radius: " << radius;
cout << endl;
// There is a typo in the book. They forgot the radius data member.
}

double Circle :: get_radius() const
{
return radius;
}

double Circle :: get_area() const
{
const double PI = 3.14159;
return (PI * radius * radius);
}

double Circle :: get_perimeter() const
{
const double PI = 3.14159;
return (2.0 * PI * radius);
}

void Circle :: set_radius(double value)
{
radius = value;
}
