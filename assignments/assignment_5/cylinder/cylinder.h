/*
Name: Jermaine Presbery
File Name: cylinder.h
Assignment #5
Date: 09/21/2020

Brief Description:
This is the Interface file where I will create the member functions
*/


#ifndef CYLINDER_H
#define CYLINDER_H
// Include Circle File in 2nd (Related) Class
#include "circle.h"
using namespace std;

/*------------------------ Class Defintion ---------------------------*/
class Cylinder : public Circle
{
    private:
      double height;  // Data Member

    public:
      Cylinder();                             // Default Constructor
      Cylinder(const Cylinder& cylinder);     // Copy Constructor
      ~Cylinder();                            // Destructor
      Cylinder(double height, double radius);                // Parameter Constructor
      double get_area() const;                // Accessor (getter)
      double get_volume() const;              // Accessor (getter)
};

#endif
