/***************************************************************
 * The program to test integral comparison. 			 		 *

The C++ string provides two ways to compare two strings: Integral and Boolean.

Integral Comparison.
The integral comparison compares two strings and returns one of three integral
values: zero when the two strings are equal, a positive number when the first
string is greater than the second, and a negative number when the first string
is less than the second.

The string parameter can be a C++ string or a C−string. Each can be a string or
a substring.

The substring of a C++ string can be defined giving the beginning index and the
length; the substring of a C−string must start from the first character.

 ***************************************************************/

    #include <string>
    #include <iostream>
    using namespace std;

    int main()
    {
        // Declaration of two C++ strings
        string strg1("Hello my friends");
        string strg2("Hello friends");

        // Comparing two C++ strings
        cout << strg1 << " compared with " << strg2 << ": ";
        cout << strg1.compare(strg2) << endl;

        // Comparing part of the two C++ strings
        cout << "Hello compared with Hello: ";
        cout << strg1.compare(0, 5, strg2, 0, 5) << endl;

        // Comparing part of the first C++ string and a C-string
        cout << "Hello compared with Hello: ";
        cout << strg1.compare(0, 5, strg2) << endl;

        // Comparing part of a C++ string and part of a C-string
        cout << "Hel compared with Hell: ";
        cout << strg2.compare(0, 3, "Hello", 4) << endl;

        return 0;
    }
