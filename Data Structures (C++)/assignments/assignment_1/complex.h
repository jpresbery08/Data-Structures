/*
  File Name: complex.h
  Name: Jermaine Presbery
  Date: 09-01-20

  This file is the Interface File where I will begin to define the class below
*/

/*------------------------------ Preprocessor Directives ----------------------*/

// Line of code below prevents Multiple Header File Inclusion
#ifndef COMPLEX_H
#define COMPLEX_H

// Preprocessors
#include <iostream>
#include <cassert>
using namespace std;


/*----------------------------- Class and Member Functions --------------------*/

class Complex {
private:
  double real;
  double img;
public:
  Complex();  // Default Constructor
  Complex(double x, double y); // First Parameter Constructor
  Complex(double x); // Second Parameter Constructor
  Complex(const Complex& complex); // Copy constructor
  ~Complex(); // Destructor
  void add_complex(Complex fred1); // Mutator
  void sub_complex(Complex fred2); // Mutator (getter)
  void divide_complex(Complex fred3); // Mutator (getter)
  void multi_complex(Complex fred4); // Mutator (getter)
  double mod() const; // Member Function called modulus
  void print_equ() const; //Member Function to print out Equation such like x + i*y

};

#endif
