// This program gives an example application section for a SLL

#include <iostream>
#include "intSLList.h"
using namespace std;

int main()
{
    IntSLList myList;

    myList.addToHead(2);
    myList.addToHead(4);
    myList.addToTail(6);
    myList.addToTail(8);
    myList.addToHead(10);

    myList.printAll();

    return 0;
}
