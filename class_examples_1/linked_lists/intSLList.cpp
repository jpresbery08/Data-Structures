//************************  intSLList.cpp  **************************

#include <iostream>
#include "intSLList.h"
using namespace std;

// Destructor ( Understand how this is deleted its simple that it deletes the first head and points )
IntSLList::~IntSLList() {
    for (IntSLLNode *p; !isEmpty(); )
     {
        p = head->next; // Point to next head
        delete head;    // Delete fist head
        head = p;  // Set the next head t0 (p = head->next;) which, is the next head pointed too
    }
}

// Function takes in a element to add too linked list
void IntSLList::addToHead(int el)
{
    head = new IntSLLNode(el,head);  // Create a new node in heap, pass new element too, and then will point at the first head of the list
    if (tail == 0)    // if list is empty the head and the tail are pointing to one single node too the list
       tail = head;
}

void IntSLList::addToTail(int el) {
    if (tail != 0) {      // if list not empty;
         tail->next = new IntSLLNode(el);  // Create a new node with a null pointer on the right side  [][X]---->
         tail = tail->next;  //  Tail points too the new object [tail] -----> [new ele][X]
    }
    else head = tail = new IntSLLNode(el);  // Once again if list is empty the head and the tail are pointing to one single node too the list
       tail = head;
}

int IntSLList::deleteFromHead()
    {
    int el = head->info;  // Declairng a random node being pointed too from the head node
    IntSLLNode *tmp = head;  // Storing node into temp node
    if (head == tail)     // if only one node on the list;
         head = tail = 0;  // Then that node head and tail will equal too null pointer
    else head = head->next;   // Redirected head to the next node, once that this redirected
    delete tmp;   // Delete the empty node with null pointers
    return el;    
}

int IntSLList::deleteFromTail() {
    int el = tail->info;
    if (head == tail) {   // if only one node on the list;
         delete head;
         head = tail = 0;
    }
    else {                // if more than one node in the list,
         IntSLLNode *tmp; // find the predecessor of tail;
         for (tmp = head; tmp->next != tail; tmp = tmp->next);  // temp head will keep iterating through list until it reachs the node before the last node
         delete tail;     // Delete the tail from the node before the
         tail = tmp;      // the predecessor of tail becomes tail;
         tail->next = 0;  // Add the null pointer too the end of the predecessor of the of the tail which now you cna consdert eh new tail
    }
    return el;
}

void IntSLList::deleteNode(int el) {
    if (head != 0)                     // if non-empty list;
         if (head == tail && el == head->info) { // if only one
              delete head;                       // node on the list;
              head = tail = 0;
         }
         else if (el == head->info) {  // if more than one node on the list
              IntSLLNode *tmp = head;  // and head node is to be deleted
              head = head->next;
              delete tmp;              // and old head is deleted;
         }
         else {                        // if more than one node in the list, delete middle/end node
              IntSLLNode *pred, *tmp;
              for (pred = head, tmp = head->next; // and a non-head node
                   tmp != 0 && !(tmp->info == el);// is deleted;
                   pred = pred->next, tmp = tmp->next);
              if (tmp != 0) {
                   pred->next = tmp->next;
                   if (tmp == tail)
                      tail = pred;
                   delete tmp;
              }
         }
}

bool IntSLList::isInList(int el) const {
    IntSLLNode *tmp;
    for (tmp = head; tmp != 0 && !(tmp->info == el); tmp = tmp->next); // For loops are very similar for (Start at head, run through list if tmp doesnt equal too the last nod, technically the i++)
    return tmp != 0;
}

void IntSLList::printAll() const {
    for (IntSLLNode *tmp = head; tmp != 0; tmp = tmp->next)
        cout << tmp->info << " ";
	cout << endl;
}
