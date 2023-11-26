/*
File Name: std_dev.cpp
Name: Jermaine Presbery
Date: 09/03/20
Assignment #2

/*------------------------ Brief Description -------------------------------*/
/* This program will create a list of 10 random and integers between 1 - 100
and will find and print out the average and standard Deviation
of the random integers
*/



/*----------------------------- Preprocessors ------------------------------*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;


int main() {

// srand allows for a different output of numbers within array
// every time the program is ran
  srand(time(0));

// Declaring Array
  const int myArray = 10;
  int theArray[myArray];

/*------------------------ Random Number Generator ------------------*/

  for (int i = 0; i < 10; i++) {

    theArray[i] = rand() % 100;
    cout << theArray[i] << endl;
  }

  cout << endl;

/*------------------------ Finding the Average ---------------------*/
  // Declaring varables in order to find Average
  int sum;
  double avg;

  // For Loop to find Average
  for (int i = 0; i < 10; i++) {
    sum += theArray[i];
  }

  // Output of Average
  avg = sum / myArray;
  cout << "Average of Array: " << avg << endl;
  cout << endl;

/*------------------------- Standard Deviation -----------------------*/

  //Declaring Variables for Standard Deviation
  double std(0.0), stdDev(0.0);

  std = pow(myArray - avg, 2);
  stdDev = sqrt(std / 10);

  cout << fixed << showpoint;
  cout << setprecision(2); // Just rounds decimal to 2 spots
  cout << "Standard Deviation of Array: "  << stdDev << endl;


  return 0;
}
