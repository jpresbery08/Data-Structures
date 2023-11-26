/***************************************************************
 * The implementation file for Employee class 		 		 *
 ***************************************************************/

    #include "employee.h"

    // Constructor
    Employee :: Employee(string fst, string i, string lst, double sal)
    : name (fst, i, lst), salary (sal)
    {
        assert(salary > 0.0 and salary < 100000.0);
    }

    // Destructor
    Employee :: ~Employee()
    {
    }

    // Print member function
    void Employee :: print() const
    {
        name.print();
        cout << "Salary: " << salary << endl << endl;
    }
