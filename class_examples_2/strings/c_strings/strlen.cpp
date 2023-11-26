/****************************************************************
* The program shows how to get the length of a C-string, which *
* is the number of characters before the null character        *

Each C-string has a size (length) that is the number of characters in the string
without counting the null character.

The C-string library defines the strlen function to find the length of the string.

The function accepts a C-string and returns its length as a size_t type,
which is defined as an unsigned int in the library.

****************************************************************/

    #include <cstring>
    #include <iostream>
    using namespace std;

    int main()
    {
        // Declaration and definition of four strings
        const char* str1 = "Hello my friends.";
        char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'} ;

        // Finding and printing the length of each string
        cout << "Length of str1: " << strlen(str1) << endl;
        cout << "Length of str2: " << strlen(str2) << endl;

        return 0;
    }
