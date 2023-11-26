/****************************************************************
 * The program check to see if an input string is a palindrome. *
 ****************************************************************/

    #include <string>
    #include <iostream>
    using namespace std;

    // Declaration of two functions
    void reverse(string& strg);
    bool isPalindrome(string& strg);

    int main()
    {
        // Construction of a default string object
        string strg;

        // Inputting
        cout << "Enter a string: ";
        getline(cin, strg);

        // Checking for palindrome
        if (isPalindrome(strg))
        {
            cout << strg << " is a palindrome." << endl;
        }
        else
        {
            cout << strg << " is not a palindrome." << endl;
        }

        return 0;
    }

/***************************************************************
 * The isPalindrome function calls the reverse function 		 *
 * to compare its parameter with the its reversed parameter.   *
 ***************************************************************/

    bool isPalindrome(string& strg)
    {
        string temp(strg);
        reverse(temp);
        return (temp == strg);
    }

/***************************************************************
* The reverse function reverses the string parameter 	 	 *
***************************************************************/

    void reverse(string& strg)
    {
        string temp(strg);
        int size = strg.size() ;
        for (int i=0; i<size; i++)
        {
            strg[i] = temp[size-1-i];
        }
    }
