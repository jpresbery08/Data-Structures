/***************************************************************
* The program shows how to use strcpy and strncpy to replace  *
* the whole string or part of it with the whole or part of    *
* another string. 					 					 *

The function strcpy replaces the first string with the whole of second string;
the function strncpy replaces the first n characters in the first string with the
first n characters of the second string.  Note that the copying changes the
destination string, but not the source string.

***************************************************************/

    #include <cstring>
    #include <iostream>
    using namespace std;

    int main()
    {
        // Copy the whole str2 to str1. String str1 is erased.
        char str1[] = "This is the first string.";
        char str2[] = "This is the second string.";
        strcpy(str1, str2);
        cout << "str1: " << str1 << endl;

        // Copy part of str4 to str3. str3 is partially erased.
        char str3[] = "abcdefghijk.";
        const char* str4 = "ABCDEFGHIJK";
        strncpy(str3, str4, 4);
        cout << "str3: " << str3 << endl;

        return 0;
    }
