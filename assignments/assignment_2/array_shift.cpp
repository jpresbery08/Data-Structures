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


/*------------------------------- Functions ---------------------------------*/


// Shift Function
void roundShift() {


/*------------------ Random Number Generator --------------*/
   srand(time(0));

   // Declaring originalArray or
   const int myArray = 10;
   int originalArray[myArray];

  cout << "Orignal Array: " << endl;
  cout << endl;

   for (int i = 0; i < 10; i++) {
       originalArray[i] = rand() % 100;
       cout << originalArray[i] << endl;
      }
/*------------------- Shift Operation ------------------*/

  int temp = originalArray[0];
  for(int i = 0; i < myArray - 1; i++)
  {
    originalArray[i] = originalArray[i+1];
  }

  originalArray[myArray-1] = temp;
  cout << endl;


  cout << "Shifted Array: " << endl;
  cout << endl;
// Declaring shift Array
  int shiftArray[myArray];

  for(int i = 0; i < myArray; i++ ){

    shiftArray[i] = originalArray[i];
    cout << shiftArray[i] << endl;
  }

}

// Print function for originalArray and shiftedArray
 void print(){
   cout << endl << "Original Array: " << endl;
   for(int i = 0; i < myArray; i++){
     cout << originalArray[i] << " ";
   }
 }

/*------------------------ Main Function ------------------------*/



int main() {


  roundShift();
  printFunc();

  return 0;
}




/*

cout << theArray << endl;
cout << endl;

-----------------------------------/
int theArray_2

for (int i = myArray - 1; i > 1; i--)
{
    theArray_2[i] = theArray[i-1];
    cout << theArray_2[i]<< " ";
}

int userArray(int arr[]){

  cout << arr[] << "";
};
*/
