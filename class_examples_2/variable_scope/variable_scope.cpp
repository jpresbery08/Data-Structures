#include <iostream>
using namespace std;


// Scope = region of program that variables are defined within

int main()
{

  // Compound Statement
  int x = 5;
  {
    cout << x << endl;
    // int y = 10;
  }

  // cout << y << endl;


  return 0;
}
