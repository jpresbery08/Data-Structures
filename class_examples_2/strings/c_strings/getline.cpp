/***************************************************************
* The program shows how to read a set of lines using the      *
* getline function and print them.				 			 *

To read a line of characters including whitespace, we need to use the function
defined for this purpose, the getline function.

The getline function is a member of the istream class which means that we need to
have an object of type cin to use it.

If the delim parameter is missing, the ’\n’ character is used.

***************************************************************/

    #include <iostream>
    #include <cstring>
    using namespace std;

    int main()
    {
        // Declaration of an array of strings
        char lines[3][80];

        // Inputting three lines
        for (int i=0; i<3; i++)
        {
            cout << "Enter a line of characters: ";
            cin.getline(lines[i], 80);
        }

        // Outputting three lines
        cout << endl;
        cout << "Output: " << endl;
        for (int i=0; i<3; i++)
        {
            cout << lines[i] << endl;
        }

        return 0;
    }
