/*
File Name: array_shift.cpp
Name: Jermaine Presbery
Date: 09/03/20
Assignment #2

/*------------------------ Brief Description -------------------------------*/
/* This Program will create a list of 10 random and integers between 1 - 100
that will shift the elements or numbers to the right.
*/



/*----------------------------- Preprocessors ------------------------------*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;


/*------------------------------ Functions ---------------------------------*/

// Empty Array Function

void emptyArray(int emptyArray[][6], int rowSize)
{
  // Random number generator
  srand(time(0));
  for (int i = 0; i < rowSize; i++)
   {
      for (int j = 0; j < rowSize; i++)
      {
        emptyArray[i][j] = rand() % 99 + 100; // Generates numbers between 100 - 199
        cout << emptyArray[i][j] << endl;
      }
   }

}


// Function 2


/*----------------------------- Main Function ------------------------------*/
int int main() {

  return 0;
}
