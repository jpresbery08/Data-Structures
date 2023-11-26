/***************************************************************
 * The implementation file for Name class 			 		 *
 ***************************************************************/

    #include "name.h"

    // Constructor
    Name :: Name(string fst, string i, string lst)
    : first (fst), init (i), last (lst)
    {
        assert (init.size() == 1);
        toupper(first[0]);
        toupper(init [0]);
        toupper(last[0]);
    }

    // Destructor
    Name :: ~Name()
    {
    }

    // Print member function
    void Name :: print() const
    {
    	cout << "Emplyee name: " << first << " " << init << ". ";
    	cout << last << endl;
    }
