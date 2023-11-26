/***************************************************************
 * The program shows how to access a character in a string 	 *
 * using the subscript operator. 				 			 *

 We can use the subscript operator to access a character if we know its position
 in the string.

 Accessing means only retrieving if the string is a constant string.

 Accessing can mean retrieving or changing if the string is a non-constant string.

 ***************************************************************/

    #include <cstring>
    #include <iostream>
    using namespace std;

    int main()
    {
        // Creation of two C-strings
        const char* str1 = "Hello my friends.";
        char str2[] = "This is the second string.";

        // Retrieving character at a given position
        cout << "Character at index 6 in str1: " << str1[6] << endl;

        // Changing character at a given position
        str2[0] = 't';
        cout << "str2 after change: " << str2 << endl;
        return 0;
    }
