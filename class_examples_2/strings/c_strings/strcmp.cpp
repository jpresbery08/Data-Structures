/***************************************************************
* The program shows how we can compare two strings using the  *
* strcmp and strncmp functions 				 			 *

We can compare two strings using the strcmp and strncmp functions.

The first compares the two strings; the second compares only the first n characters
of two strings.

Comparison is done character by character until a character that is not the same
is reached (note that the null character is also used in the comparison).

When unequal characters are found, the comparison stops and the functions returns
a negative number if the character in the first string is smaller than the second.

It returns a positive integer if the character in the first string is larger than
the second.  If different characters were not found, the functions return 0.

***************************************************************/

    #include <cstring>
    #include <iostream>
    using namespace std;

    int main()
    {
        // Declaration of two C-strings
        const char* str1 = "Hello Alice.";
        const char* str2 = "Hello John.";
        const char* str3 = "Hello Betsy.";

        // Comparison use the whole length
        cout << "Comparing str1 and str2: ";
        cout << strcmp(str1, str2) << endl;
        cout << "Comparing str2 and str3: ";
        cout << strcmp(str2, str3) << endl;

        // Comparison using one the first characters
        cout << "Comparing first 5 characters of str1 and str2: ";
        cout << strncmp(str1, str2, 5);

        return 0;
    }
