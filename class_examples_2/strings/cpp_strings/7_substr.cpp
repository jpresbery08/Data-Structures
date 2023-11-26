/***************************************************************
 * The program shows how to retrieve two substrings from a 	 *
 * string object 						 					 *

 We can retrieve a substring, a set of consecutive characters, from a string by
 giving the index of the first character and the number of characters to be
 retrieved (length).

 Since only the left-most parameters can be set to default, if only one parameter
 is given it is taken as pos.

 If both parameters are missing, the whole string is returned.

 Note that the function is defined as constant, which means that the host object
 can not be changed.
 
 In the following result is a string that is created in the process.

 ***************************************************************/

    #include <string>
    #include <iostream>
    using namespace std;

    int main()
    {
        // Construction of a string
        string strg("The C++ language is fun to work with.");

        // Retrieving two substrings.
        cout << strg.substr(8) << endl ;
        cout << strg.substr(4,12) << endl;

        return 0;
    }
