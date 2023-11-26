/*
Name: Jermaine Presbery
File Name: arrayImplementation.cpp
Assignment #4
Date: 09/15/2020

----------------------------------------------------------------------
Brief Description: This is the Implementation file where the Member
                   Functions are defined.
----------------------------------------------------------------------
*/


/*---------------------- Member Function Defintions -----------------*/

#include "array.h"

// Defintion of Parameter Constructor
Array :: Array(int cap)
{

  // Creation of Array in Heap Memory
  arr = new int[cap];

  size = 0;
}


// Defintion of Destructor
Array :: ~Array()
{
  cout << "The Destructor was called: " << endl;
  cout << endl;

  // Deleting Array in Heap Memory
  delete[]arr;

}


// Defintion for insert (Setter)
void Array :: insert(int value)
{

  if(size == capacity)
  {
    cout << "You can not enter anymore values." << endl;
    return;
  }
  else
    cout << "Enter values for array: " << endl;
    arr[size] = value;
    size++;


}


// Defintion for print (Setter)
void Array :: print() const
{
  for(int i = 0; i < *arr; i++)
  {
  cout << "Elements in Array: " << endl;
  cout << *(arr + i) << " ";
  }
}
