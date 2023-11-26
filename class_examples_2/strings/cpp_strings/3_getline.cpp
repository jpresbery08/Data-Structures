/***************************************************************
 * A program to test the getline function with strings. 	 	 *

The getline Function.

To allow the user to have more control, the istream object has a function named
getline with two versions.

The first version uses ’\n’ as the delimiter, which means it can read the whole
line; the second version allows users to define their own delimiter character.

 ***************************************************************/

    #include <string>
    #include <iostream>
    using namespace std;

    int main()
    {
        // Constructing a default object
        string strg;

        // Creating a string made of a single line
        cout << "Enter a line of characters: " << endl;
        getline(cin, strg);
        cout << strg << endl << endl;

        // Creating a string made of multiple lines
        cout << "Enter lines of characters ended with $: " << endl;
        getline(cin, strg, '$');
        cout << strg;

        return 0;
    }
