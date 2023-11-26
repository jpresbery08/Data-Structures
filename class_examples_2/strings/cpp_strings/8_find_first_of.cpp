/***************************************************************
 * The program uses search functions to find and extract words *
 * in a line of text. 					     				 *

Forward and Backward Search for a given Character.
We can use two member functions (find and rfind) to search for a specific character.

Forward or Backward Search for A Character Belonging to a Set.
A more interesting search is when need to find any character in a set.
Another alternative is that we want to look for a character not in a set.


 ***************************************************************/

    #include <string>
    #include <iostream>
    using namespace std;

    int main()
    {
        // Declaration of variables, types, and constants
        string text, word;
        string delimiter(" \n");
        string:: size_type wStart, wEnd;
        string :: size_type npos;

        // Input a line of text from keyboard
        cout << "Enter a line of text: " << endl ;
        getline(cin, text);

        // Search, find, and print words
        cout << "Words in the text:" << endl;
        wStart = text.find_first_not_of(delimiter, 0);
        while (wStart < npos)
        {
            wEnd = text.find_first_of(delimiter, wStart);
            cout << text.substr(wStart, wEnd - wStart) << endl;
            wStart = text.find_first_not_of(delimiter, wEnd);
        }

        return 0;
    }
