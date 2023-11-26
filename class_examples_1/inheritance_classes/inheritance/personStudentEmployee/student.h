/***************************************************************
 * The interface file to define the Student class 		 	 *
 ***************************************************************/

    #ifndef STUDENT_H
    #define STUDENT_H
    #include "person.h"

    // Definition of the Student class
    class Student : public Person
    {
        private:
            string name;
            double gpa;
        public:
            Student(string name, double gpa);
            ~Student();
            void print() const;
    };
    #endif
