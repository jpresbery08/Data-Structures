/***************************************************************
 * The program creates two circle objects and then calls a
 * function named larger to find the larger of the two circles
 ***************************************************************/

#include "circle.h"

// Function Prototype
    Circle& larger(Circle&, Circle&);   // Recall: ONLY data types are required

int main()
{
    // Creating first pair of fractions and finding the larger
        Circle circle1(3.0);
        Circle circle2(17.0);

        cout << endl << "circle1 has radius: " << circle1.get_radius();
        cout << endl << "circle2 has radius: " << circle2.get_radius();

        cout << endl << "The larger circle has radius: " ;
        cout << larger(circle1, circle2).get_radius() << endl << endl;

    return 0;
}

/***************************************************************
 * The function gets two circle objects by reference, compares
 * them, and returns the larger of the two circles.
 ***************************************************************/

Circle& larger (Circle& alphaCircle, Circle& betaCircle)
{
    if ( alphaCircle.get_radius() > betaCircle.get_radius() )
    {
        return alphaCircle; // If program executes this line, then function call is over
                            // and the second return statement below is not ever run
    }
    return betaCircle;
}
