/***************************************************************
* The program shows how to use the strstr member function to  *
* find the occurrence of a substring in a string. 		 	 *

We can search a string to find the position of a substring using the strstr function.

The function returns a pointer to the first character in the substring.

If the substring cannot be found in the string, a null pointer is returned.

***************************************************************/

    #include <cstring>
    #include <iostream>
    using namespace std;

    int main()
    {
        // Creating a string
        char str[] = "Hello friends of mine.";

        // Finding the location of the substring
        char* sPtr = strstr(str, "friends");
        cout << "The substring starts at index: " << sPtr - str << endl;

        return 0;
    }
