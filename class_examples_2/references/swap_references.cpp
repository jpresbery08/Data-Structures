/**************************************************************
 * The program shows how to use pass-by-reference to allow a  *
 * called function to swap two values in the calling function.*
 **************************************************************/

#include <iostream>
using namespace std;

// Function Prototype (Include function prototypes)
    void swap(int& first, int& second);

int main()
{
    // Definition of two variables
        int x = 10;
        int y = 20;

    // Printing the value of x and y before swapping
        cout << "Values of x and y before swapping." << endl;
        cout << "x: " << x << " " << "y: " << y << endl;

    // Calling swap function to swap the values of x and y
        swap(x, y);

    // Printing the value of x and y after swapping
        cout << "Values of x and y after swapping." << endl;
        cout << "x: " << x << " " << "y: " << y << endl;

    return 0;
}

/****************************************************************
 * The swap function swaps the values of the parameters and     *
 * pass-by-reference allows the corresponding arguments in main *
 * to be swapped accordingly.  				  				  *
 ****************************************************************/

void swap(int& rX, int& rY)
{
    int temp = rX;
    rX = rY;
    rY = temp;
}
