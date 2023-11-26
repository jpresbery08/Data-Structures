/*
Name: Jermaine Presbery
File Name: arrayImplementation.cpp
Assignment #5
Date: 09/21/2020

----------------------------------------------------------------------
Brief Description: This is the Implementation file where the Member
                   Functions are defined.
----------------------------------------------------------------------
*/


/*---------------------- Member Function Defintions -----------------*/

#include "array.h"

// Defintion of Parameter Constructor
Array :: Array(int cap)
: capacity (cap)
{

  // Creation of Array in Heap Memory
  arr = new int[capacity];
  size = 0;
}


// Defintion of Destructor
Array :: ~Array()
{
  cout << "The Destructor was called: " << endl;
  cout << endl;

  // Deleting Array in Heap Memory
  delete [] arr;

}


// Defintion for insert (Setter)
void Array :: insert(int value)
{

  if(size == capacity)
  {
    cout << "You can not enter anymore values." << endl;
    return;
  }
  else if (size == 0)
  {
    arr[size] = value;
    size++;
  }

 int index = 0;

  for(int i = 0; i < size; i++)
  {

    if(arr[i] < value)
    {
      index++;
    }
  }

  moveTowardEnd(index);

  arr[index] = value;

  size++;
}

// Defintion for print (Setter)
void Array :: print() const
{
  for(int i = 0; i < *arr; i++)
  {
  cout << *(arr + i) << " ";
  }
}

/*-------------------------------------------------------------------*/
// Defintion of remove (Setter)
void Array :: remove(int value)
{

  int index = 0;

  for(int i = 0; i < capacity; i++)
  {
    if(arr[i] == value)
    {
      index = i + 1;
      return;
    }
  }
  moveTowardFront(index);
}

// Defintion of moveTowardFront
void Array :: moveTowardFront(int index)
{
  for(int i = index; i < size; i++)
  {
    arr[i] = index + 1;
  }
}

// Defintion of moveTowardEnd
void Array :: moveTowardEnd(int index)
{
  for(int i = size + 1; i < size; i++)
  {
    arr[i] = arr[i - 1];
  }

}
