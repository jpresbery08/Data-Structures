/*****************************************************************
 * Passing array name and size to a function to let it print the *
 * element of the array 					   				   *
 *****************************************************************/

    #include <iostream>
    using namespace std;

// YOU CANNOT RETURN ARRAYS FROM A FUNCTION

/***************************************************************
 * Function print accepts the name and the size of an array.   *
 * The function then prints the elements of the array created  *
 * and initialized in main. It does not modify the array.      *
 ***************************************************************/
// numbers[] is just letting the print function below that

//print is just a function name
void print(const int numbers[], int size) // First Parameter is made constant in order to not change the size of elements within the array
{
    for (int i = 0; i < size; i++)
    {
        cout << numbers [i] << " ";
    }
    cout << endl;

    return;
}

int main( )
{
    // Declaration and initialization of the array
    // array contains the memory address of the first elment in an array
    // array is a constant pointer to the first element of an array 
        int numbers[15] = {5, 7, 9, 11, 13};

//numbers is actually numbers[]

    // Calling the print function
        print (numbers, 5);

    return 0;
}
