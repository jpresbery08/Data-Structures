/***************************************************************
 * A program that check if a string is a palindrome by using 	 *
 * a helper function to avoid creating substring objects. 	 *
 ***************************************************************/

    #include <string>
    #include <iostream>
    using namespace std;

    // Function declaration
    bool isPalindrome (const string& strg);
    bool isPalindrome (const string& strg, int left, int right);

    int main()
    {
        // Checking if the strings are palindromes
        cout << boolalpha << endl;
        cout << "Is 'rotor' a palindrome? " << isPalindrome("rotor") << endl;
        cout << "Is 'madam' a palindrome? " << isPalindrome("madam") << endl;
        cout << "Is 'Hello' a palindrome? "<< isPalindrome("Hello") << endl << endl;

        return 0;
    }

    // Function definition for non-recursive isPalindrome
    bool isPalindrome(const string& strg)
    {
        return isPalindrome(strg, 0, strg.size()-1);
    }

    // Function definition for helper recursive isPalindrome
    bool isPalindrome(const string& strg, int left, int right)
    {
        if (right <= left)
        {
            return true;
        }
        else if (strg[left] != strg[right])
        {
            return false;
        }
            return isPalindrome(strg, left+1, right-1);
    }
