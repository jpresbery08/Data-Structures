/***************************************************************
    The implementation file for the Student class
***************************************************************/

    #include "student.h"

// Default constructor
    Student :: Student()
    : Person (), gpa (0.0)
    {
    }

// Parameter constructor
    Student :: Student(long id, double gp)
    : Person (id), gpa (gp)
    {
        assert(gpa >= 0.0 && gpa <= 4.0);
    }

// Copy constructor
    Student :: Student(const Student& student)
    : Person (student), gpa (student.gpa)
    {
    }

// Destructor
    Student :: ~Student()
    {
    }

// Accessor member function
    void Student ::print() const
    {
        Person :: print();
        cout << "GPA: " << fixed << setprecision(2) << gpa << endl;
    }
