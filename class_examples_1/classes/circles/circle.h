/* ------------------------------ Interface File ---------------------------- */

    /*  File Name: circle.h

    This is the interface file, which contain the class definition(s) (i.e. data
    member declarations and member function declarations). */

    /*  NOTES:
        1)  A class definition is comprised of a header, a body, and a semicolon.
        2)  User-defined class identifiers (i.e. names) should begin with a capital letter.
        3)  Data members must not be dependent upon eachother, so as to avoid data
            inconsistencies. (i.e. can't have radius, perimeter, and area as data members -
            just choose radius.)
        4)  Accessor member functions require the "const" keyword, since they don't
            change the state of the host object.
        5)  The access modifier for data members is set to private to enforce the
            notion of data encapsulation, but member functions are set to private.
            You use public member functions to access private data members.
    */


/* ------------------------- Preprocessor Directives ------------------------ */

    #ifndef CIRCLE_H                // Stop Multiple Header File Inclusion
    #define CIRCLE_H
    #include <iostream>
    #include <cassert>
    using namespace std;

/* ----------------------------- Class Definition --------------------------- */

    class Circle
    {
        private:
            double radius;
        public:
            Circle(double radius);          // Parameter Constructor
            Circle(const Circle& circle);   // Copy Constructor
            Circle();                       // Default Constructor
            ~Circle();                      // Destructor
            double get_radius() const;      // Accessor (getter)
            double get_area() const;        // Accessor (getter)
            double get_perimeter() const;   // Accessor (getter)
            void set_radius(double value);  // Mutator  (setter)
    };

    #endif
