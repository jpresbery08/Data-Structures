/***************************************************************
* The program shows how to create C-strings and use input and *
* output operations with them. 				 			 *

Overloaded Extraction and Insertion Operators:
The <cstring> library has overloaded the extraction operator (>>) and the
insertion operator (<<) to be used for string input and output.

The problem that we need to be aware of is that the character array that stores
the input needs to have allocated enough memory locations to store all characters
entered (before a whitespace) plus one for the null character.

***************************************************************/

    #include <iostream>
    using namespace std;

    int main()
    {
        // Create one constant and one non-constant string
        char str1[] = {'H', 'e', 'l', 'l', 'o', '\0'} ;
        const char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'};

        // Create two constant string types and use string literals
        const char* str3 = "Goodbye";
        const char* str4 = "Goodbye\0 my friend";

        // Create a pointer to print
        char* pStr = str1;

        // Printing four strings
        cout << "str1: " << str1 << endl;
        cout << "str2: " << str2 << endl;
        cout << "str3: " << str3 << endl;
        cout << "str4: " << str4 << endl;
        cout << "pStr: " << pStr << endl << endl;

        // Create and input a fifth string
        // NOTE: Why doesn't this work when you include whitespaces? (Need getline!)
        char str5[20];
        cout << "Enter the characters for str5: " ;
        cin >> str5;
        cout << "str5: " << str5 << endl;

        return 0;
    }
