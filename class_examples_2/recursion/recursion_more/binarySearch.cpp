/***************************************************************
 * A program that uses the recursive binary search to search 	 *
 * an array for a value 					 				 *
 ***************************************************************/
#include <iostream>
using namespace std;

// Declaration of non-recursive and recursive search functions
int binarySearch(const int arr[], int size, int value);
int binarySearch(const int arr[], int low, int high, int value);

// Declaration of array to be searched
const int size = 10;
int array[size] = {11, 14, 19, 22, 27, 30, 33, 46, 63, 94};

int main()
{
    // Inputting the value to be found
    int value;
    cout << "Enter the value to be found: ";
    cin >> value;

    // Calling the non-recursive search function
    int index = binarySearch(array, size, value);
    if (index == -1)
    {
        cout << "The value is not in the array!";
    }
    else
    {
        cout << "The value was found at index: " << index;
    }
    return 0;
}

// Definition of non-recursive search function
int binarySearch(const int arr[], int size, int value)
{
    int low = 0;
    int high = size-1;
    return binarySearch (arr, low, high, value);
}

// Definition of recursive search function
int binarySearch (const int arr[], int low, int high, int value)
{
    int mid = (low + high) / 2;
    if (low > high)
    {
        return -1;
    }
    else if (value == arr[mid])
    {
        return mid;
    }
    else if (value < arr[mid])
    {
        return binarySearch(arr, low, mid-1, value);
    }
    else
    {
        return binarySearch(arr, mid+1, high, value);
    }
}
