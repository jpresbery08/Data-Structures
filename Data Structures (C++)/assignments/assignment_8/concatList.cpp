
#include "intSLList.h"
#include <iostream>
using namespace std;


int main()
{
  IntSLList myList;
  IntSLList my2ndList;

  cout << endl;

  // Numbers of the 1st Linked List
  cout << "First Linked List: " << endl;

    myList.addToTail(3);
    myList.addToHead(6);
    myList.addToHead(4);
    myList.addToHead(2);

  // Prints the Elements of the 1st Linked List
    myList.printAll();
    cout << endl;

/*----------------------------------------------------------------------------*/

  // Numbers of the 2nd List
  cout << "Second Linked List: " << endl;

    my2ndList.addToTail(40);
    my2ndList.addToHead(30);
    my2ndList.addToHead(20);
    my2ndList.addToHead(10);

  // Prints the Elements of the 2nd Linked List
    my2ndList.printAll();
    cout << endl;

/*----------------------------------------------------------------------------*/

    cout << "Concatenated List: " << endl;
    myList.concatList(my2ndList);
    myList.printAll();
    cout << endl;


  return 0;
}
