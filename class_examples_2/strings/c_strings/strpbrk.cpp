/***************************************************************
* The program shows how we can use the strpbrk function to 	 *
* find the location of any character in a set of characters 	 *

Sometimes we need to search a string to find the position of any character defined
in a set of characters.

In other words, we do not want to find the position of a specified character in
the string; we want to find the first position of any character in the set.

Later we learn that this operation is used to tokenize a string.
The set is also defined as a string.

The function strpbrk is used for this purpose.

If no character can be found, a null pointer is returned.

***************************************************************/

    #include <cstring>
    #include <iostream>
    using namespace std;

    int main()
    {
        // Creation of a string
        char str[] = "Hello friends of mine.";

        // Finding the first occurance of any character in a set
        char* pPtr = strpbrk(str, "pfmd");
        cout << "The character " << *pPtr << " was found." << endl ;
        cout << "It is at index: " << pPtr - str << endl;

        return 0;
    }
