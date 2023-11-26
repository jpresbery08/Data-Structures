/*
    The C string is an array of null-terminated characters; the C++ string is a class
    that matches the idea of object-oriented programming.

    To use C strings, we need the <cstring> library header file.

    Since the name of an array is a pointer to the first element in the array,
    the name of a C string is a pointer to the first character in the string.
    However, we must remember that the name of a C string does not define a variable;
    it defines a pointer value.  In other words, it is not an lvalue; it is an rvalue.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    /*  C String Construction
        To construct a C string, we must create an array of characters and set
        last element to the null character '\0'.
    */
    char str1[] = {'A', 'B', 'C', 'D', '\0'};        // Nonconstant
    char str2[] = "ABCD";                            // Nonconstant compact
    const char str3[] = {'A', 'B', 'C', 'D', '\0'};  // Constant
    const char str4[] = "ABCD";                      // Constant compact

    /*  The name of a string is an rvalue pointer, not a variable.  If you want to
        create a variable, we must declare a variable of type char* (or const char*)
        and assign the name of the string to that variable (see below):
    */
    char str5[] = "ABCD";
    char* p5 = str5;

    const char str6[] = "ABCD";
    const char* p6 = str6;

    // Below is an exmaple of a string literal
    cout << "This is a string literal." << endl;

    // C++ forbids assigning a string literal to a nonconstant pointer to a character
    // char* str7 = "Hello";    // Compilation error. Literal is a constant.
    const char* str8 = "Hello";

    // Use the compact initialization method shown below
    char str9[] = "Hello";
    const char str10[] = "Hello";
    const char* str11 = "Hello";

    // Construction/Destruction in Heap Memory
    char* str12 = new char[3];
    const char* str13 = new char[3];

    delete [] str12;
    delete [] str13;

    return 0;
}
