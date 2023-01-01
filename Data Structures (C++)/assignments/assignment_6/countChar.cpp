/*
Name: Jermaine Presbery
Date: 10-01-2020
Assignment #6
File Name: coutnChar.cpp

Brief Description:
This counts the characters within a string
*/

#include <iostream>
#include <string>
using namespace std;


// Function Prototypes

string countChar(string first, char sec);


// Application Section

int main() {

  // Declaring String Object
  countChar intro("Hi my name is Jermaine it is nice to meet you kind Sir. Also, I like your jacket.");

  // Using string Object in Recurision Function

  cout << "Count of a = " << countChar(intro, 'a') << endl;
  cout << "Count of e = " << countChar(intro, 'e') << endl;
  cout << "Count of i = " << countChar(intro, 'i') << endl;
  cout << "Count of o = " << countChar(intro, 'o') << endl;
  cout << "Count of u = " << countChar(intro, 'u') << endl;
  cout << "Count of y = " << countChar(intro, 'y') << endl;
  return 0;
}


string countChar(string first, char sec)
{
  if(first.length() <= 1 )
  {
    return first;
  }

  if(first.substr(0) == char)
  {
    return 1;
  }

  if(first.length() <= 0)
  {
    return 0;
  }
}
