/**************************************************************
 * A program that uses the compiled version of the Circle class *
 * to create an array of three circles.                         *
 **************************************************************/
#include <iostream>
#include "circle.h"
using namespace std;

int main()
{
    // Declaration of array
    Circle circles[3];

    //  Instantiation of objects
    /*  CAMEL CONVENTION dictates that there be a space between
        operands of the assignment expression: */
    circles[0] = Circle(3.0);
    circles[1] = Circle(4.0);
    circles[2] = Circle(5.0);

    // Printing information
    /*  CAMEL CONVENTION dictates that there be a space between
        operands of the assignment expression EXCEPT WHEN IN A
        FUNCTION CALL: */
    cout << endl;
    for (int i=0; i<3; i++)
    {
        cout << "Information about circle [" << i << "]" << endl;
        cout << "Radius: " << circles[i].get_radius() << " ";
        cout << "Area: " << circles[i].get_area() << " ";
        cout << "perimeter: " << circles[i].get_perimeter() << " ";
        cout << endl << endl;
    }

    return 0;
}
