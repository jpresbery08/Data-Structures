/***************************************************************
 * A program that checks if a string is a palindrome 		 	 *
 ***************************************************************/
#include <iostream>
#include <string>
using namespace std;

// Declaration of recursive function
bool isPalindrome (string strg);

int main()
{
    // Instantiation of some strings
    string strg1("");
    string strg2("rotor");
    string strg3("hello");

    // Checking for palindromes
    cout << boolalpha << endl;
    cout << "Is ’’ a palindrome? " << isPalindrome(strg1) << endl;
    cout << "Is  ’rotor’ a palindrome? " << isPalindrome(strg2) << endl;
    cout << "Is ’hello’ a palindrome? " << isPalindrome(strg3) << endl << endl;

    return 0;
}

// Definition of recursive function
bool isPalindrome(string strg)
{
    if (strg.size() <= 1)
    {
        return true;
    }
    else if (strg[0] != strg[strg.size()-1])
    {
        return false;
    }
    return isPalindrome(strg.substr(1,strg.size()-2));
}
