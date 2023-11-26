/***************************************************************
* A program to search for a given character using forward 	 *
* search to find the first occurrence or backward search to 	 *
* to find the last occurrence. 				 			 *

We can search a string to find a character. The search can return a pointer of the
first occurrence (forward search) or the last occurrence (backward search).

The first search uses the strchr function; the second uses the strrchr function.

After a pointer to the character is set we can use it to change the character if
the string is not constant.

If the character cannot be found, a null pointer is returned.

***************************************************************/

    #include <cstring>
    #include <iostream>
    using namespace std;

    int main()
    {
        // Declaration of a string
        char str[] = "Hello friends.";

        // Capitalizing the first occurrence of character e
        char* cPtr = strchr(str, 'e');
        *cPtr = 'E' ;
        cout << "str after first change: " << str << endl;

        // Capitalizing the last occurrence of character e
        cPtr = strrchr (str, 'e');
        *cPtr = 'E' ;
        cout << "str after last change: " << str << endl;

        return 0;
    }
