/*
File Name: triangleApplication.cpp
Name: Jermaine Presbery
Date: 11 September 2020
Assignment #3

---------------------- Brief Description -----------------------------
This file is the Application where I will use the member functions in order
to find the Perimeter and Area for three different Triangles.
*/

#include "Triangle.h"


int main(){

  cout << endl;


  Triangle tri1(3.43, 4.32, 7.53);
  Triangle tri2(3.43, 5.32, 3.53);
  Triangle tri3(1.00, 3.00, 5.00);

  // Operation for First Triangle

  cout << "1st Triangle" << endl;
  cout << "Perimeter: " << tri1.get_perimeter() << endl;
  cout << "Area: " << tri1.get_area() << endl;
  cout << endl;

  // Operation for Second Triangle

  cout << "2nd Triangle" << endl;
  cout << "Perimeter: " << tri2.get_perimeter() << endl;
  cout << "Area: " << tri2.get_area() << endl;
  cout << endl;

  // Operation for Third Triangle

  cout << "3rd Triangle" << endl;
  cout << "Perimeter: " << tri3.get_perimeter() << endl;
  cout << "Area: " << tri3.get_area() << endl;
  cout << endl;



  return 0;
}
