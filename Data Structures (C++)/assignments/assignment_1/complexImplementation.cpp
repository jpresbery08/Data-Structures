/*
  File Name: complex.h
  Name: Jermaine Presbery
  Date: 09-01-20

  This file is the Implemtation file which includes the mmeber functions
  definitions
*/

// This Preprocessor includes the complex.h file which contaions the Complex Class
  #include "complex.h"
  #include <cmath>

// Default Constructor
  Complex :: Complex()
  : real(0.0), img(0.0)
  {
    cout << "The default constructor was called. " << endl;
  }

// First Parameter Constructor

  Complex :: Complex(double x, double y)
  : real (x), img (y)
  {
    cout << "The first paramaeter constructor was called: " << endl;
  }

// Second Parameter Constructor
  Complex :: Complex(double x)
  : real (x), img (0.0)
  {
    cout << "The first paramaeter constructor was called: " << endl;
  }


// Copy Constructor

  Complex :: Complex(const Complex& complex)
  : real (complex.real), img (complex.img)
  {
    cout << "The copy constructor was called: " << endl;
  }

  // Destructor

  Complex :: ~Complex()
  {
    cout << "The destructor was called " << endl;
    cout << endl;
  }


  void Complex :: add_complex(Complex fred1)
  {
    real = real + real.complex;
    img = img + img. complex;

  }

  void Complex :: sub_complex(Complex fred2)
  {
    real = real - real.complex;
    img = img - img. complex;

  }

  void Complex :: divide_complex(Complex fred3)
  {
    real = real * real.complex;
    img = img * img complex;

    real_temp = real + img;
    img_temp = real - img;

    real_squ = real.complex * real.complex;
    img_squ = img.complex * img.complex;

    temp_squ = real_squ + img_squ;

    final = (real_temp + img_temp)/ temp_squ;

  }

  void Complex :: multi_complex(Complex fred4)
  {
    real = real * real.complex;
    img = img * img.complex;

    real_temp = real - img;

    real_temp_2 = real * img.complex;
    img_temp = real.complex * img;


    final = real_temp + (real_temp_2 + img_temp);

  }

  double Complex :: mod() const
  {
    modulus = sqrt((real * real) + (img * img));
    cout << modulus << endl;
  }

  void Complex :: print_equ() const;
  {
    cout << x1 << " + i" << x2 << endl;
    cout << endl;
  }
