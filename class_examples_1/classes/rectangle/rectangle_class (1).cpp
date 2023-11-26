/*

    This program shows how to declare, define, and use a Rectangle class.
    Also, static members are shown here.

    A static data member is a data member that belongs to all instances; it
    belongs to the class itself.  Declared using the "static" keyword.

    A static data member belongs to no instance, which means it cannot be
    initialized in a constructor.  Static data members must be initialized
    in the global area of the program using the class scope operator (::).

    Static data members can be accessed by both instance member functions, as
    well as static member functions.  Instance data members can be accessed by
    static member functions.
*/

    #include <iostream>
    #include <cassert>
    using namespace std;

/*  Class Definition (Declaration of data members and member
    functions) for a Rectangle class. */

    class Rectangle
    {
        private:
            double length;                          // Data member
            double height;                          // Data member
            static int count;                       // Static data member
        public:
            Rectangle(double length, double height);// Parameter Constructor
            Rectangle();                            // Default Constructor
            Rectangle(const Rectangle& rect);       // Copy constructor
            ~Rectangle();                           // Destructor
            void print() const;                     // Accessor member function
            double getArea() const;                 // Accessor member function
            double getPerimeter() const;            // Accessor member function
            static int getCount();                  // Static member function
    };

/*  Initialize Static Data Member (Global Function)  */
    int Rectangle :: count = 0;

/***************************************************************
 * Definitions of constructors, destructor, and the accessor   *
 * instance member functions 				 				 *
 ***************************************************************/

    // Parameter constructor
    Rectangle :: Rectangle(double len, double hgt)
    : length (len), height (hgt)
    {
        if ((length <= 0.0) || (height <= 0.0 ))
        {
            cout << "No rectangle can be made!" << endl;
            assert (false);
        }
        count++; // Everytime an object is created the static member count will increase by 1
    }

    Rectangle :: Rectangle()
    : length (1.0), height (1.0)
    {
        count++;
    }

    // Copy constructor
    Rectangle :: Rectangle(const Rectangle& rect)
    : length (rect.length), height (rect.height)
    {
        count++;
    }

    // Destructor
    Rectangle :: ~Rectangle()
    {
        count--;
    }

    // Static Member Function Definition
    int Rectangle :: getCount()
    {
        return count;
    }

    // Accessor member function: Print length and heigth
    void Rectangle :: print() const
    {
        cout << "A rectangle of " << length << " by " << height << endl;
    }

    // Accessor member function: Get area
    double Rectangle :: getArea() const
    {
        return (length * height);
    }

    // Accessor member function: Get perimeter
    double Rectangle :: getPerimeter() const
    {
        return (2 * (length + height));
    }

/***************************************************************
 * Application to instantiate three objects and use them 	 	 *
 ***************************************************************/
    int main()
    {
        // Instantiation of three objects
        Rectangle rect1(3.0, 4.2); // Using parameter constructor
        Rectangle rect2(5.1, 10.2); // Using parameter constructor
        Rectangle rect3(rect2); // Using copy constructor
        Rectangle rect4;

        // Operations on first rectangle
        cout << "Rectangle 1: ";
        rect1.print();
        cout << "Area: " << rect1.getArea() << endl;
        cout << "Perimeter: " << rect1.getPerimeter() << endl << endl;

        // Operations on second rectangle
        cout << "Rectangle 2: ";
        rect2.print();
        cout << "Area: " << rect2.getArea() << endl;
        cout << "Perimeter: " << rect2.getPerimeter() << endl << endl;

        // Operations on third rectangle
        cout << "Rectangle 3: ";
        rect3.print();
        cout << "Area: " << rect3.getArea() << endl;
        cout << "Perimeter: " << rect3.getPerimeter() << endl << endl;

        // Operations on fourth rectangle
        cout << "Rectangle 4: ";
        rect4.print();
        cout << "Area: " << rect4.getArea() << endl;
        cout << "Perimeter: " << rect4.getPerimeter() << endl << endl;

        // Get count
        cout << "Count of objects: " << rect4.getCount() << endl;
        // Can access static member through an instantiated object
        cout << "Count of objects: " << Rectangle :: getCount() << endl;

        return 0;
    }


    // Notes
    // Static Members belong all instances
    // Data members are stored for each object
    // Only the defintions of a member function is stored in only one plac ein memory
