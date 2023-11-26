/***************************************************************
 * The program shows how to retrieve a single character in a   *
 * string. 						 						 *

We can access an individual character to retrieve or change it if we know its index
(its positions in the string relative to zero).

The string class provides four member functions for this purpose.

The first two use the subscript operator [ ] to return a character as an rvalue
or lvalue.

The second two members use the at function to select a character.

 ***************************************************************/

    #include <string>
    #include <iostream>
    using namespace std;

    int main()
    {
        // Construction of a string
        string strg("A short string");

        // Retrieving and printing characters at index 5 and 8
        cout << "Character at index 5: " << strg[5] << endl;
        cout << "Character at index 8: " << strg.at(8) << endl;

        return 0;
    }
