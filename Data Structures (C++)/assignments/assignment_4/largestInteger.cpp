/*
Name: Jermaine Presbery
File Name: largestInteger.cpp
Assignment #4
Date: 09/14/2020

Breif Description:
This program allows for a user to enter in three integers and then
the program will output the largest integer out of the three.
*/


/*------------------------------- Preprocessors --------------------------*/
#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;

/* Create a function that finds the largest of 3 integers while using a
   pass-by-reference
*/

// Function Prototype
int& largestInt(int& first, int& second, int& third);



int main(){

  // Declaring variables
  int x;
  int y;
  int z;
  int large;

  // Asking for user input of three integers
  cout << "Enter in 3 different integers in order to find the largest of the three: " << endl;
  cout << endl;

  cout << "First Number: ";
  cin >> x;
  cout << endl;

  cout << "Second Number: ";
  cin >> y;
  cout << endl;

  cout << "Third Number: ";
  cin >> z;
  cout << endl;

  // Calling largestInt Function

  large = largestInt(x,y,z);

  // Output of largest Int
  cout << "The Largest Number: " << large << endl;

  return 0;
}




// Largest Integer Function
int& largestInt(int& x, int& y, int& z){
  if(x > y && x > z)
  {
    return x;
  }
  if(y > x && y > z)
  {
    return y;
  }
  if(z > x && z > y)
  {
    return z;
  }
  else
  {
    cout << "Seems to not be a largest number." << endl;
  }

}
