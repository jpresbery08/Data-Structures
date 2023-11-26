/*****************************************************************
 * The program to test logical operators to compare two strings. *

The logical comparison compares two strings and returns a Boolean value (true or false).

Just like the integral comparison, two string are compared.

The first is always the host and the second is a C++ string or a C−string.
Unlike the integral comparison, we cannot compare two substrings.

If we want to do so, we need to make temporary C++ strings out of the substrings
and then compare them.

 *****************************************************************/

    #include <string>
    #include <iostream>
    using namespace std;

    int main()
    {
        // Creation of four C++ strings
        string strg1;
        string strg2(5, 'a');
        string strg3("Hello Friends");
        string strg4("Hi People", 4);

        // Using six logical operators (relational and equality)
        cout << "strg1 < strg2 : " << boolalpha << (strg1 < strg2);
        cout << endl;
        cout << "strg2 >= strg3: " << boolalpha << (strg2 >= strg3);
        cout << endl;
        cout << "strg1 == strg2: " << boolalpha << (strg1 == strg2);
        cout << endl;
        cout << "Hi P != strg4: " << boolalpha << ("Hi P" != strg4) << endl;

        return 0;
    }
