/***************************************************************
* The program shows how we can use strtok function to extract *
* tokens from a date. 					 				 *

One of the common operations on a string is to find tokens embedded in a string.
Tokens are substrings separated by delimiters (such as whitespace).
The library defines the strtok function.
To find all tokens in a string, we need to call the strtok function multiple times.

When the strtok function is called, it does three specific tasks:

1)  It searches the string for the first occurrence of a character not in the delimiter set.
    The search starts from the character pointed to by the first parameter.
    If a character is found, it sets the pointer p to that character.
    If not found, it does nothing.
2)  It then searches for the first occurrence of a character in the delimiter set.
    If the character is found, it changes that character to a null character.
3)  It returns the pointer set in the first task.

***************************************************************/

    #include <cstring>
    #include <iostream>
    using namespace std;

    int main()
    {
        // Declaration of a sentence and a pointer
        char str[ ] = "July 15, 2015";
        char* p;

        // Use strtok to extract all words
        p = strtok(str, ", "); // first call
        while (p)
        {
            cout << p << endl;
            p = strtok(0, ", "); // second, third, and fourth calls
        }
        return 0;
    }

/*
The above code works as follows:

The strtok function finds the first character not in the delimiter set and points
p to that character.

It then finds a character in the delimiter set and changes that character to a null
character.  This means a string has been created by p that spans from p to the null
character.

In the second and the following calls, the first parameter is the null pointer
and the strtok function starts its search from the null pointer created in the
previous call.  When the function reaches the end of the string, p is null.
*/
