/*
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


  arrayOne.insert(4);
  arrayOne.insert(1);
  arrayOne.insert(8);
  arrayOne.insert(22);

// Calling Remove Function
 arrayOne.remove(3);

// Calling Print Function
  arrayOne.print();

  return 0;
}
