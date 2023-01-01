// File Name: find_element.cpp
// Name: Jermaine Presbery
// Date: 03 November 2020
// Assignment #8
// Brief Description: A program that finds and prints the smallest index of three
//                    arrays different types


// Preprocessors
#include <iostream>
using namespace std;

// Defintion of Template Functions

template <typename T>

// Function for finding smallest element in Array
int findSmallElement(T arr, int n)
{
  int temp = 0;
  for( int i = 0; i < n; i++)
  {
    if( arr[i] < arr[temp])
    {
      temp = i;
    }
  }
  return temp;
}

// Application Section
int main()
{

  int arr1[3] = {8, 2, 12};
  double arr2[3] = {50.5, 40.5, 60.5};
  char arr3[3] = {'X', 'b', 'g'};


  cout << "This is the smallest element in Array 1: " <<  arr1[findSmallElement(arr1, 3)] << endl;
  cout << "This is the smallest element in Array 2: " <<  arr2[findSmallElement(arr2, 3)] << endl;
  cout << "This is the smallest element in Array 3: " <<  arr3[findSmallElement(arr3, 3)] << endl;

  return 0;
}
