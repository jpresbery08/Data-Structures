/***************************************************************
 * The interface file to define the Student class 			 *
 ***************************************************************/

    #ifndef EMPLOYEE_H
    #define EMPLOYEE_H
    #include "person.h"

    // Definition of the Employee class
    class Employee : public Person
    {
        private:
            string name;
            double salary;
        public:
            Employee(string name, double salary);
            ~Employee();
            void print() const;
    };
    #endif
