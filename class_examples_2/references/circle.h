/* ------------------------------ Interface File ---------------------------- */

/* File Name: circle.h

This is the interface file, which contain the class definition(s) (i.e. data
member declarations and member function declarations) */

/* ------------------------- Preprocessor Directives ------------------------ */

#ifndef CIRCLE_H // Stop Multiple Header File Inclusion
#define CIRCLE_H
#include <iostream>
#include <cassert>
// #include "circle.h" // Typo in book! This line should not exist!
using namespace std;

/* ----------------------------- Class Definition --------------------------- */

class Circle
{
private:
double radius;
public:
Circle(double radius); // Parameter Constructor
Circle(const Circle& circle); // Copy Constructor
Circle(); // Default Constructor
~Circle(); // Destructor
double get_radius() const; // Accessor (getter)
double get_area() const; // Accessor (getter)
double get_perimeter() const; // Accessor (getter)
void set_radius(double value); // Mutator (setter)
};

#endif
