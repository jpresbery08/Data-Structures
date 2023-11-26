/*
    This program creates a class to represent complex numbers.  Include a default
    constructor, a copy constructor, two different parameter constructors, and a
    destructor.  Include four member functions to add, subtract, multiply, and
    divide a complex number by the host object.  Each of these arithmetic
    operations should print the resultant host object to the screen after each
    computation.  Include a member function to calculate the argument/modulus of
    the complex-number-represented host object.  Also, include a member function
    to print out the complex number in the form "x + i y", where x and y have
    accuracy to the hundredths place.

    A complex number is defined as: z = x + i*y

    Use the following relations to solve this problem:

    (x1 + i*y1) + (x2 + i*y2) = (x1 + x2) + i*(y1 + y2)
    (x1 + i*y1) - (x2 + i*y2) = (x1 - x2) + i*(y1 - y2)
    (x1 + i*y1) * (x2 + i*y2) = (x1*x2 - y1*y2) + i*(x1*y2 + x2*y1)
    (x1 + i*y1) / (x2 + i*y2) = [(x1*x2 + y1*y2) + i*(x2*y1 - x1*y2)] / (x2^2 +y2^2)

    Argument/Modulus:   r = |z| = sqrt( x^2 + y^2 )
*/

    #include <iostream>
    #include <cmath>
    #include <iomanip>
    using namespace std;

/* ---------------------------- Class Interface ----------------------------- */

    class Complex
    {
        private:
            double real;       // Real Part
            double imag;       // Imaginary Part
        public:
            Complex(double x, double y);                // Parameter Constructor 1
            Complex(double x);                          // Parameter Constructor 2
            Complex();                                  // Default Constructor
            Complex(const Complex& complex);            // Copy Constructor
            ~Complex();                                 // Destructor
            void add(const Complex& complex);           // Mutator Addition Function
            void subtract(const Complex& complex);      // Mutator Subtraction Function
            void multiply(const Complex& complex);      // Mutator Multiplication Function
            void divide(const Complex& complex);        // Mutator Division Function
            double modulus() const;                     // Accessor Modulus Function
            void print() const;                         // Accessor Print Function
    };

/* -------------------------- Class Implementation -------------------------- */

    // Parameter Constructor 1
    Complex :: Complex(double x, double y)
    : real (x), imag (y)
    {

    }

    // Parameter Constructor 2
    Complex :: Complex(double x)
    : real (x), imag (0.0)
    {

    }

    // Default Constructor
    Complex :: Complex()
    : real (0.0), imag (0.0)
    {

    }

    // Copy Constructor
    Complex :: Complex(const Complex& complex)
    : real (complex.real), imag (complex.imag)
    {

    }

    // Destructor
    Complex :: ~Complex()
    {

    }

    // Mutator Addition Function
    void Complex :: add(const Complex& complex)
    {
        //  Addition: (x1 + i*y1) + (x2 + i*y2) = (x1 + x2) + i*(y1 + y2)

        real = real + complex.real;
        imag = imag + complex.imag;

        print();
    }

    // Mutator Subtraction Function
    void Complex :: subtract(const Complex& complex)
    {
        //  Subtraction: (x1 + i*y1) - (x2 + i*y2) = (x1 - x2) + i*(y1 - y2)

        real = real - complex.real;
        imag = imag - complex.imag;

        print();
    }

    // Mutator Multiplication Function
    void Complex :: multiply(const Complex& complex)
    {
        //  Multiplication: (x1 + i*y1) * (x2 + i*y2) = (x1*x2 - y1*y2) + i*(x1*y2 + x2*y1)

        double real_temp;
        double imag_temp;

        real_temp = real*complex.real - imag*complex.imag;
        imag_temp = real*complex.imag + complex.real*imag;

        real = real_temp;
        imag = imag_temp;

        print();
    }

    // Mutator Division Function
    void Complex :: divide(const Complex& complex)
    {
        //  Division: (x1 + i*y1) / (x2 + i*y2) = [(x1*x2 + y1*y2) + i*(x2*y1 - x1*y2)] / (x2^2 + y2^2)

        double real_temp;
        double imag_temp;

        real_temp = (real*complex.real + imag*complex.imag) /
            (complex.real*complex.real + complex.imag*complex.imag);

        imag_temp = (complex.real*imag - real*complex.imag) /
            (complex.real*complex.real + complex.imag*complex.imag);

        real = real_temp;
        imag = imag_temp;

        print();
    }

    // Accessor Modulus Function
    double Complex :: modulus() const
    {
        // Modulus: r = |z| = sqrt( x^2 + y^2 )

        double modulus;

        modulus = sqrt(real*real + imag*imag);

        return modulus;
    }

    // Accessor Print Function
    void Complex :: print() const
    {
        cout << fixed << setprecision(2);

        cout << real << " + i " << imag  << endl;
    }

/* ---------------------------- Class Application --------------------------- */

    int main()
    {
        // Instantiate Objects using all Constructors
        Complex num1(2.56, 4.87);
        Complex num2(8.92, 3.69);
        Complex num3;
        Complex num4(num1);
        Complex num5(54.7);

        // Perform Operations
        num1.add(num2);
        num2.subtract(num1);
        num1.multiply(num1);
        num1.divide(num2);

        cout << num1.modulus() << endl;

        return 0;
    }



 