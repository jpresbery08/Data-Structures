/***************************************************************
 * The application file to use classes 						 *
 ***************************************************************/

    #include "student.h"
    #include "employee.h"

    int main()
    {
        // Instantiation and using an object of the Person class
        cout << "Person: " << endl;
        Person person("John");
        person.print();
        cout << endl << endl;

        // Instantiation and using an object of the Student class
        cout << "Student: " << endl;
        Student student("Mary", 3.9);
        student.print();
        cout << endl << endl;

        // Instantiation and using an object of the Employee class
        cout << "Employee: " << endl;
        Employee employee("Juan", 78000.00);
        employee.print();
        cout << endl << endl;

        return 0;
    }
