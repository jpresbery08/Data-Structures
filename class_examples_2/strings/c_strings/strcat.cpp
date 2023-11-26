/***************************************************************
* We use strcat and strncast to concatenate a string at the   *
* end of another string. 					 				 *

We can add a string at the end of another string.
In this case the destination string will be changed, but the source remains unchanged.

The library defines two member functions for this purpose: the strcat and  strncat functions.

The first function concatenates all characters in str2 at the end of str1.

The second function concatenates only the first n characters of the second string
at the end of the first string.

However, we need to be sure that the str1 has enough memory allocation to accept
the concatenation 

***************************************************************/

    #include <cstring>
    #include <iostream>
    using namespace std;

    int main()
    {
        // Using strcat function
        char str1[20] = "This is ";
        const char* str2 = "a string.";
        strcat(str1, str2);
        cout << "str1: " << str1 << endl;

        // Using strncat function
        char str3[20] = "abcdefghijk";
        const char* str4 = "ABCDEFGHIJK";
        strncat(str3, str4, 4);
        cout << "str3: " << str3 << endl;

        return 0;
    }
