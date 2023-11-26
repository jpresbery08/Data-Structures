/***************************************************************
    The implementation file for the Person class
***************************************************************/

    #include "person.h"

// Default constructor
    Person :: Person()
    : identity (0)
    {
    }

// Parameter constructor
    Person :: Person(long id)
    : identity (id)
    {
        assert(identity >= 100000000 && identity <= 999999999);
    }

// Copy constructor
    Person :: Person(const Person& person)
    : identity (person.identity)
    {
    }

// Destructor
    Person:: ~Person()
    {
    }

// Accessor member function
    void Person :: print() const
    {
        cout << "Identity: " << identity << endl;
    }
