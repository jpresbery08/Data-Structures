/***************************************************************
 * The interface file to define the Person class 		 	 *
 ***************************************************************/

    #ifndef PERSON_H
    #define PERSON_H
    #include <iostream>
    #include <string>
    using namespace std;

    // Definition of Person class
    class Person
    {
        private:
            string name;
        public:
            Person(string nm);
            ~Person();
            void print() const;
    };
    #endif
