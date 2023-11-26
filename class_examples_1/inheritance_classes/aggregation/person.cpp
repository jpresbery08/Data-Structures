/***************************************************************
 * The implementation file for Person concrete class 		 	 *
 ***************************************************************/

    #include "person.h"

    // Constructor
    Person :: Person(long id, Date bd)
    : identity (id), birthDate (bd)
    {
        assert(identity > 111111111 && identity < 999999999);
    }

    // Destructor
    Person :: ~Person()
    {
    }

    // Print function
    void Person :: print() const
    {
        cout << "Person Identity: " << identity << endl;
        cout << "Person date of birth: ";
        birthDate.print();
        cout << endl << endl;
    }
