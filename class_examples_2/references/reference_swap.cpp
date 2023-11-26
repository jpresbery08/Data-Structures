// This program shows you how to pass by reference



#include <iostream>
using namespace std;

// Function Prototype
void swap(int& rX, int& rY);

// main function
int main ()
{
  // Data Variables
  int x = 10;
  int y = 20;


  cout << "Before:" << endl;

  // Print Values Before the swap
  cout << "x: " << x << " " << "y: " << y << endl;
  cout << endl;

  // Use of swap function
  swap(x, y);

  cout << "After:" << endl;

  // Print Values After the swap
  cout << "x: " << x << " " << "y: " << y << endl;
  cout << endl;

  return 0;
}

// Pass by Reference saves time and memory
void swap(int& rX, int& rY)
{

  int& temp = rX;
  rX = rY;
  rY = temp;
}
