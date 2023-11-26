/*
  This program shows you how to pass-by-reference and
  return by reference

  Purpose: Find the larger of the two circles
*/


#include "circle.h"


#include <iostream>
using namespace std;


// Function Prototype
Circle& larger(Circle&, Circle&);       // Note; only data types re required

int main()
{
  Circle circle1(3.0);
  Circle circle2(17.0);


  cout << endl << "circle 1 has a radius " << circle1.get_radius();
  cout << endl << "circle 2 has a radius " << circle2.get_radius();

  cout << endl << "The larger circle has radius ";
  cout << larger(circle1, circle2).get_radius() << endl << endl;


  return 0;
}


Circle& larger(Circle& alpha, Circle& beta)
{
  if ( alpha.get_radius() > beta. get_radius())
  {
    return alpha;
  }
  return beta; 
}
