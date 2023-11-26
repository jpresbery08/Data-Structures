/******************************************************************
 * Passing two array to a function simulating returning an array. *
 ******************************************************************/

    #include <iostream>
    using namespace std;

/*****************************************************************
 * Function reverse is a function that takes two arrays. It uses *
 * the first array to reverse the element in the second array.   *
 *****************************************************************/
void reverse(const int array1[], int array2[], int size)
{
    for (int i = 0, j=size-1; i<size; i++, j--)
    {
        array2[j] = array1[i];
    }

    return;
}
/******************************************************************
 * Function print accepts the name and the size of an array. 	  *
 * It then prints the elements of the array without modifying it. *
 *****************************************************************/

void print(const int array[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return;
}

int main()
{
    // Declaration of two arrays
        int array1[5] = {150, 170, 190, 110, 130};
        int array2[5];

    // Calling reverse function to modify array2 to be the reversed of array1
        reverse(array1, array2 , 5);

    // Printing both arrays
        print(array1, 5);
        print(array2, 5);

        return 0;
}
