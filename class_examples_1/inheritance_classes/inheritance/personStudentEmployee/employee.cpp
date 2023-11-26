/***************************************************************
 * The implementation file for the Employee class 			 *
 ***************************************************************/

    #include "employee.h"

    // Constructor for Employee class
    Employee :: Employee(string nm, double sa)
    : Person (nm), salary (sa)
    {
    }

    // Destructor for Employee class
    Employee :: ~Employee()
    {
    }

    // Definition of print member function
    void Employee :: print() const
    {
        Person :: print();
        cout << "Salary: " << salary << endl;
    }
