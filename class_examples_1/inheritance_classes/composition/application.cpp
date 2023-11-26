/***************************************************************
 * The application file to test the Employee class 			 *
 ***************************************************************/

    #include "employee.h"

    int main()
    {
        // Instantiation
        Employee employee1("Mary", "B", "White", 22120.00);
        Employee employee2("William", "S", "Black", 46700.00);
        Employee employee3("Ryan", "A", "Brown", 12500.00);

        // Output
        employee1.print();
        employee2.print();
        employee3.print();

        return 0;
    }
