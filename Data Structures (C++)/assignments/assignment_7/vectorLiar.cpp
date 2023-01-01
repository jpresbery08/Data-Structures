/*
File Name: vectorLiar.cpp
Name: Jermaine Presbery
Date: 10 - 01 - 2020
Assignment #7

Brief Description:
Use of the different funcitons to be able to manipulate a vector
*/
#include <iostream>
#include <vector>
using namespace std;






int main() {

  vector<int> v(21); // Declaring Vector w/ Size = 0  and Capacity = 21
  vector<int> v2; // Empty Vector Constructor


  v.assign(10,7); // Assigns number 7 to 10 spots of vec1
  v.push_back(8); // Adds the integer 8 to capacity
  v.pop_back(); // Removes last ele


  for(int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  cout << "First Value: " << v.front() << endl; // Prints out first value in Vector
  cout << endl;

  cout << "Last Value: " << v.back() << endl; // Prints out last value in Vector
  cout << endl;

  cout << "Index 2 Value: " << v.at(2) << endl; // Returns value at index 2
  cout << endl;

  cout << "Capacity of Vector: " << v.capacity() << endl; // Returns Capcity of Vector
  cout << endl;

  v.swap(v2); // Swaps elements vector with v2, so now v2 has the elements of v

  for(int i = 0; i < v2.size(); i++)
  {
    cout << v2[i] << " ";
  }

  cout << endl;

  v(const v& x); // Vector Copy Constructor
  v.clear(); // Clears elememts of  of Vector

  cout << "True = " << v.empty() << endl; // Prints out True if ELements are in Vector and False
  cout << endl;              // if there are no elements in the Vector




  return 0;
}
