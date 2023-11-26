/***************************************************************
    The application to test the Cylinder and Circle classes
***************************************************************/

#include "cylinder.h"

int main()
{

  cout << endl;

// Declaring Variables
  double h;                   // h = height
  double r;                   // r = radius

// Asking User for radius
cout << "Enter in radius: " << endl;
cin >> r;
cout << endl;

// Asking User for height
cout << "Enter in a Height for Cylinder: " << endl;
cin >> h;
cout << endl;

// Instantiation of a Circle object using Parameter Constructor
  cout << "Info for Cylinder #1: " << endl;

// Declaring object using Cylinder Parameter Constructor
  Cylinder cylinder_1(h,r);


  cout << "Area of Cylinder #1: " << fixed << setprecision(2) << cylinder_1.get_area() << endl;
  cout << "Volume of Cylinder #1: " << fixed << setprecision(2) << cylinder_1.get_volume() << endl;


  cout << endl;


  return 0;
}
