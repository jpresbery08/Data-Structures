/***************************************************************
 * The interface file to define the Employee class 		 	 *
 ***************************************************************/

    #include "student.h"

    // Constructor for Student class
    Student :: Student (string nm, double gp)
    : Person (nm), gpa (gp)
    {
    }

    // Destructor for Student class
    Student :: ~Student()
    {
    }

    // Definition of the print member function
    void Student :: print() const
    {
        Person :: print();
        cout << "GPA: " << gpa << endl;
    }
