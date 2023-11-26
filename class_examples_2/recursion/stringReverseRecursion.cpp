/***************************************************************
    A program that reverses a string recursively
***************************************************************/
#include <iostream>
#include <string>
using namespace std;

// Declaration of recursive function
string reverse(string str);

int main()
{
    // Calling reverse function using some strings
    cout << "Reverse of ’ABCD’: " << reverse("ABCD") << endl;
    cout << "Reverse of ’Hello’: " << reverse("Hello") << endl;
    cout << "Reverse of ’Bye’: " << reverse("Bye") << endl;

    return 0;
}

// Definition of recursive function
string reverse(string str)
{
    if (str.length() <= 1)
    {
        return str;
    }
    else
    {
        return reverse(str.substr(1, str.length() - 1)) + str.substr(0, 1);
    }
}
