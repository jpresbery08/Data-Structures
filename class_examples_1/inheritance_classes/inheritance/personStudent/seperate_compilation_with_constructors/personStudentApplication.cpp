/***************************************************************
    The application to test the Person and Student classes
***************************************************************/

#include "student.h"

int main()
{
    // Instantiation and using a Person object
        Person person(111111111);
        cout << "Information about person: " << endl;
        person.print();
        cout << endl;

    // Instantiation and using a Student object
        Student student(222222222, 3.9);
        cout << "Information about student: " << endl;
        student.print();
        cout << endl;

    return 0;
}
