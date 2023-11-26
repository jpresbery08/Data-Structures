/***************************************************************
 * The program shows how global and static objects are visible *
 * any point in the program. They last through the life of the *
 * the program. 						 					 *
 ***************************************************************/
#include <iostream>
using namespace std;

/*  A static object is an object that persists from the time it's constructed
    until the end of the program. */

int first = 20;             // Global variable in static memory
static int second = 30 ;    // Static variable created in static memory

int main()
{
    static int third = 50;  // Static variable in static memory

    cout << "Value of Global variable: " << first << endl;
    cout << "Value of Global static variable: " << second << endl;
    cout << "Value of local static variable: " << third << endl;

    return 0;
}
