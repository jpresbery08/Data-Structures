/***************************************************************
 * The implementation file for the Person class 		 	  	 *
 ***************************************************************/

    #include "person.h"

    // Constructor for Person class
    Person :: Person(string nm)
    : name (nm)
    {
    }

    // Destructor for Person class
    Person :: ~Person()
    {
    }

    // Definition of print member function
    void Person :: print() const
    {
        cout << "Name: " << name << endl;
    }
