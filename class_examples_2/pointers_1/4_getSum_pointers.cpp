/***************************************************************
* The program shows how to access the elements of an array 	 *
* using pointers. 					 					 *
***************************************************************/

    #include <iostream>
    using namespace std;

    // Prototype
    int getSum(const int*, int);

    int main()
    {
        // Array declaration and initialization
        int arr[5] = {10, 11, 12, 13, 14};

        // Function call
        cout << "Sum of elements: " << getSum(arr, 5);

        return 0;
    }
/***************************************************************
* The function gets a pointer to the first element of an 	 *
* array and calculates and returns the sum of the elements.   *
***************************************************************/

    int getSum(const int* p, int size)
    {
        int sum = 0;
        for (int i = 0; i < size ; i++)
        {
            sum += *(p++);
        }
        return sum;
    }
