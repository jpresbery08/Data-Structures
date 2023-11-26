/*
File Name: arrayQuestion.cpp
Name: Jermaine Presbery
Date: 14 October 2020
Midterm Exam

                              Brief Description:


*/

/*-- Preprocessors ---*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function Prototypes
void getElements();
int removeLargest();
int removeSmallest();


// Application Section

int main()
{
  getElements();



  return 0;
}




// Functions
void getElements()
{
  // Random Number Generator
    srand(time(0));

  // Declaring Array with Capacity 10

    const int myArray = 10;
    int originalArray[myArray];

    for (int i = 0; i < 10; i++)
      {
        originalArray[i] = rand() % 100;
        cout << originalArray[i] << " ";
      }

    cout << endl;
}

/*------------ Remove Largest ------------*/
int removeLargest()
{

  int max = originalArray[0];

  for(int i = 1; i < 10; i++)
  {
    if (max < originalArray[i])
    max = originalArray;
  }

  cout << max;
}


int removeSmallest()
{
  int min = originalArray[0];

  for(int i = 1; i < 10; i++)
  {
    if (min > originalArray[i])
    min = originalArray;
  }

  cout << min;
}

