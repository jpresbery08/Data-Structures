// File Name: reverse_elements.cpp
// Name: Jermaine Presbery
// Date: 03 November 2020
// Assignment #8
// Brief Description: A program that reverse the order of elements in any ar
                   // array type and the types that will be used in the program
                   // are int, double, characters, and strings


// Preprocessors
#include <iostream>
#include <string>
using namespace std;



// Defintion of Template Functions
template <typename T>

// Function to print reverse elements in array
int reverseArray(T arr, int n)
{

  for (int i = n-1; i >= 0; i--)
  {
      cout << arr[i] <<  " ";
  }
      cout << endl;
}

/*--------------------------------------------------------------------------------*/
// Defintion of Template Functions
template <typename S>

// Function to print out Orignal Array
void print(S arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*--------------------------------------------------------------------------------*/

// Application Section
int main()
{

  int arr1[4] = {8, 10, 12, 14};                          // Integer Array
  double arr2[4] = {50.5, 60.5, 70.5, 80.5};              // Double Array
  char arr3[4] = {'X', 'b', 'g', 'h'};                    // Character Array
  string arr4[4] = {"one", "two", "three", "four"};       // String Array


  cout << endl;

  // Integer Array
  cout << "Orignal Array 1: " << endl;
  print(arr1, 4);
  cout << "Reversed Array 1: " << endl;
  reverseArray(arr1, 4);
  cout << endl;

  // Double Array
  cout << "Orignal Array 2: " << endl;
  print(arr2, 4);
  cout << "Reversed Array 2: " << endl;
  reverseArray(arr2, 4);
  cout << endl;

  // Character Array
  cout << "Orignal Array 3: " << endl;
  print(arr3, 4);
  cout << endl;
  cout << "Reversed Array 3: " << endl;
  reverseArray(arr3, 4);
  cout << endl;

  // String Array
  cout << "Orignal Array 4: " << endl;
  print(arr4, 4);
  cout << endl;
  cout << "Reversed Array 4: " << endl;
  reverseArray(arr4, 4);
  cout << endl;







  return 0;
}
