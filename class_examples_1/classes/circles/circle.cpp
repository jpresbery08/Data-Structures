/* --------------------------- Implementation File -------------------------- */

    /*  File Name: circle.cpp

    This is the implementation file, which contains the member function
    definitions. */

    /*  NOTES:
        1)  Accessor member functions require the "const" keyword, since they don't
            change the state of the host object.  It makes the host object read-only.
        2)  The name of the function must be qualified with the name of the class
            and the "class scope" operator (i.e "::").
        3) You access private data memebers through public member functions
    */

/* ----------------------- Member Function Definitions ---------------------- */

    #include "circle.h"

    // Definition of Parameter Constructor
    Circle :: Circle(double rds)
    : radius (rds) // radius = rds intilizing the data member
    {
        // Section 7.4.3 - Class Invariants - is a condition that all objects of a class is conditioned too
        if (radius <= 0.0)
        {
            cout << "No circle can be made!" << endl;
            cout << "The program is aborted." << endl;
            assert(false);
        }

        cout << "The parameter constructor was called."  << endl;
    }

    // Definition of the Defualt Constructor - called everytime you instantiate an object
    Circle :: Circle()
    : radius (0.0)
    {
        cout << "The default constructor was called."  << endl;
    }

    // Definition of the Copy Constructor - copies object that has already been created
    Circle :: Circle(const Circle& circle)
    : radius (circle.radius)
    {
        cout << "The copy constructor was called."  << endl;
    }

    // Definition of Destructor
    Circle :: ~ Circle()
    {
        cout << "The destructor was called with circle of radius: " << radius;
        cout << endl;
        // There is a typo in the book.  They forgot the radius data member.
    }

    double Circle :: get_radius() const
    {
        return radius;
    }

    double Circle :: get_area() const
    {
        const double PI = 3.14159;
        return (PI * radius * radius);
    }

    double Circle :: get_perimeter() const
    {
        const double PI = 3.14159;
        return (2.0 * PI * radius);
    }

    void Circle :: set_radius(double value)
    {
        radius = value;
    }
