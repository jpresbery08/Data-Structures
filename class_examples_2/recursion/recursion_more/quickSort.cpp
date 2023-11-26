/****************************************************************
* A program that uses the quicksort algorithm to sort an array *
* by calling the partition algorithm recursively. 		  	  *
****************************************************************/
#include <iostream>
using namespace std;

// Function declarations
void swap(int& x, int& y);
void print(int array[], int size);
int partition(int arr[], int beg, int end);
void quickSort(int arr[], int beg, int end);

int main()
{
    // Declaration of an unsorted array
    int array[10] = {27, 22, 11, 94, 83, 14, 30, 19, 46, 33};

    // Printing unsorted array
    cout << "Original array: " << endl;
    print(array, 10);

    // Calling quickSort function
    quickSort(array, 0, 9);

    // Printing sorted array
    cout << "Sorted array: " << endl;
    print(array, 10);

    return 0;
}

// Swap function
void swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

// Print-array function
void print(int array[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Partition function
int partition (int arr[], int beg, int end)
{
    int p = beg; // Initializing pivot
    int i = beg; // Initializing i
    int j = end; // Initializing j

    while (i < j)
    {
        // Moving j to the left
        while (arr[j] > arr[p])
        {
            j--;
        }
        swap(arr[j], arr[p]);
        p = j;

        // Moving i to the right
        while (arr[i] < arr[p])
        {
            i++;
        }
        swap(arr[i], arr[p]);
        p = i;
    }

    return p;
}

// Quick sort function
void quickSort (int arr[], int beg, int end)
{
    if (beg >= end || beg < 0)
    {
        return;
    }
    int pivot = partition(arr, beg, end);
    quickSort(arr, beg, pivot-1);
    quickSort(arr, pivot+1, end);
}
