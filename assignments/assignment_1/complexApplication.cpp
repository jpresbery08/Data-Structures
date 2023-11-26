/*
  File Name: complexApplication.cpp
  Name: Jermaine Presbery
  Date: 09-01-20

  This file is the Application File where I will apply / use objects from
  the implentation file. As well as the member functions defintions from
  the complex.cpp file.
*/

// This Preprocessor includes the complex.h file which contaions the Complex Class
  #include "complex.h"

  #include <iostream>
  using namespace std;

  int main(){

    cout << endl;
    //Complex Numbers (x value)
    Complex x1(1.23, 8.25);

    //Complex Numbers (y value)
    Complex x2(7.08, 9.11);

    /*----Member functions and the operations for the member functions---*/

      // Addition Member Function
    x1.add_complex(x2);

    cout << endl;

      // Subtraction Member Function
    x2.sub_complex(x1);

    cout << endl;

      // Division Member Function
    x1.divide_complex(x2);

    cout << endl;

      // Multiplcation Member Function
    x1.multi_complex(x2);


    print.print_equ();

      //Program is stopped
    ~Complex();
    return 0;
  }
