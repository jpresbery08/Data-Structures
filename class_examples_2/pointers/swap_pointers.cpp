/**************************************************************
 * The program shows how to use pass-by-pointer to allow a  *
 * called function to swap two values in the calling function.*
 **************************************************************/

#include <iostream>
using namespace std;

// Function Prototype
    void swap(int* first, int* second); // Notice the parameter names used here do not
                                        // match the names used below b/c different scopes

int main()
{
    // Definition of two variables
        int x = 10;
        int y = 20;

    // Printing the value of x and y before swapping
        cout << "Values of x and y before swapping." << endl;
        cout << "x: " << x << " " << "y: " << y << endl;

    // Calling swap function to swap the values of x and y
        swap(&x, &y);

    // Printing the value of x and y after swapping
        cout << "Values of x and y after swapping." << endl;
        cout << "x: " << x << " " << "y: " << y << endl;

    return 0;
}

/****************************************************************
 * The swap function swaps the values of the parameters and     *
 * pass-by-pointer allows the corresponding arguments in main *
 * to be swapped accordingly.  				  				  *
 ****************************************************************/

void swap(int* pX, int* pY)
{
    int temp = *pX;
    *pX = *pY;
    *pY = temp;
}
