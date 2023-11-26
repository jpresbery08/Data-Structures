/*
Name: Jermaine Presbery
File Name: arrayApplication.cpp
Assignment #5
Date: 09/21/2020

----------------------------------------------------------------------
Brief Description: This is the Application file where I will use the
                   member functions too allow a user to instantiate
                   an Array object
----------------------------------------------------------------------
*/


/*---------------------- Object Application Section -----------------*/
#include "array.h"

int main(){

// Declaring variables
  int cap;



// Call Parameter Constructor
do{

  cout << "Enter the array capacity (Must be more than Zero): " << endl;
  cin >> cap;

} while(cap <= 0);

  Array arrayOne(cap);

// Calling insert Function
  arrayOne.insert(666);

// Calling print Function
  arrayOne.print();


  return 0;
}
