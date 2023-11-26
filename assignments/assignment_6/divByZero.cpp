/*
Name: Jermaine Presbery
Date: 10-01-2020
Assignment #6
File Name: DivByZero

Brief Description:
This displays an error Messeage if a user tries to divide by zero

*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


/* ---------------------------- Class Interface ----------------------------- */

class DivByZero
{
private:
  string message;               // Private Data Member
public:
  DivByZero(string mes);    // Parameter Constructor
  string what() const;          // Setter
};


/* ---------------------------- Class Implentation --------------------------- */

DivByZero :: DivByZero(string mes)
: message (mes)
{
}

string DivByZero :: what() const
{
  return message;
}


/* ---------------------------- Class Application ---------------------------- */


int main(){
  int num1, num2, result;



    for (int i = 0; i < 3; i++)
    {
        cout << "Enter an integer: ";
        cin >> num1;
        cout << "Enter another integer: ";
        cin >> num2;



        // The try-catch block
        try
        {
            if (num2 == 0)
            {

                throw 0; // An object of type integer is thrown
            }

            result = num1 / num2;
            cout << "The result is: " << result << endl;
            DivByZero errorMessage("Divide by zero occurred.");

        }


          // Catch Block
        catch (DivByZero errorMessage)
          {
            cout <<  errorMessage.what() << endl;;
          }

        }

      return 0;
}
