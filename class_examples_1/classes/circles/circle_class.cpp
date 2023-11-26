// Introduction to Classes
// This program uses a class to introduce you to object-oriented programming!
// This program DOES include constructors/destructors/etc!

    #include <iostream>
    using namespace std;

// ---------------------------- Class Definition ---------------------------- //

    class Circle    // Begin with capital letter by convention
    {
        private:
            double radius;                  // Data Member
        public:
            // Member Functions
            Circle(double radius);          // Parameter Constructor
            Circle();                       // Default Constructor
            Circle(const Circle& circle);   // Copy Constructor
            ~Circle();                      // Destructor
            double get_radius() const;      // Accessor (getter)
            double get_area() const;        // Accessor (getter)
            double get_perimeter() const;   // Accessor (getter)
            void set_radius(double value);  // Mutator  (setter)
    };

// ----------------------- Member Function Definitions ---------------------- //

    // Note - The symbol "::" is called the "class scope" symbol.
    //        The symbol "~" is called a "tilde".
    //        The symbol "." is called the "member selector operator".

    // Definition of Parameter Constructor
    Circle :: Circle(double rds)
    : radius (rds)
    {
        cout << "The parameter constructor was called."  << endl;
    }

    // Definition of the Defualt Constructor
    Circle :: Circle()
    : radius (0.0)
    {
        cout << "The default constructor was called."  << endl;
    }

    // Definition of the Copy Constructor
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

// ------------------------ Object Application Section ---------------------- //

int main()
{
    {
    cout << endl;

    float radiuss;

    cout << "Enter a radius: " << endl;
    cin >> radiuss;

    // Instantiation of a Circle object using the parameter constructor
    cout << "Info for Circle #1" << endl;
    Circle circle_1(radiuss);
    cout << "Radius Circle #1: " << circle_1.get_radius() << endl; // The "." is the member selector operator which esstentially accesses a member function
    cout << "Area Circle #1: " << circle_1.get_area() << endl;
    cout << "Perimeter Circle #1: " << circle_1.get_perimeter() << endl;

    cout << endl;

    // Instantiation of a Circle object using the copy constructor
    cout << "Info for Circle #2" << endl;
    Circle circle_2(circle_1);
    cout << "Radius Circle #2: " << circle_2.get_radius() << endl;
    cout << "Area Circle #2: " << circle_2.get_area() << endl;
    cout << "Perimeter Circle #2: " << circle_2.get_perimeter() << endl;

    cout << endl;

    // Instantiation of a Circle object using the default constructor
    cout << "Info for Circle #3" << endl;
    Circle circle_3;
    cout << "Radius Circle #3: " << circle_3.get_radius() << endl;
    cout << "Area Circle #3: " << circle_3.get_area() << endl;
    cout << "Perimeter Circle #3: " << circle_3.get_perimeter() << endl;

    cout << endl;

    // STATEMENT - ASKS ABOUT NUM OF OBJECTS CURRENTLY OUT: 3
    }

    // STATEMENT - ASKS ABOUT NUM OF OBJECTS CURRENTLY OUT: 0

    return 0;
}
