/***************************************************************
 * The program creates a string object and then tests the size,*
 * maximum size, and capacity before and after reservation.    *

    Resizing
    The resize function changes the size of the string.
    If n < size, characters are deleted from the end of the string;
    if n > size, copies of character c are added to the end of the string to make the size n.

    Capacity and Reserve.
    The capacity function returns the current capacity of the character array.
    We can call the reserve function to make the capacity larger than the size.

    Emptiness
    The empty function returns true if the size is 0;  false otherwise.

 ***************************************************************/

    #include <string>
    #include <iostream>
    using namespace std;

    int main()
    {
        // Creating a string object
        string strg("Hello my friends");

        // Test size, maimum size and capacity
        cout << "Size: " << strg.size() << endl;
        cout << "Maximum size: " << strg.max_size() << endl;
        cout << "Capacity: " << strg.capacity() << endl;
        cout << "Empty? " << boolalpha << strg.empty() << endl;
        cout << endl;

        // Making reservation and test again
        strg.reserve(20);
        cout << "Size: " << strg.size() << endl;
        cout << "Maximum size: " << strg.max_size() << endl;
        cout << "Capacity: " << strg.capacity() << endl;
        cout << "Empty? " << boolalpha << strg.empty() << endl;

        return 0;
    }
