// This program demonstrates a basic implementation of a singly
// linked List

#include <iostream>
using namespace std;

class IntSLLNode
{
    public:
        IntSLLNode(){
            next = 0;
        }
        IntSLLNode(int i, IntSLLNode *in = 0){
            info = i; next = in;
        }
        int info;
        IntSLLNode *next;
};

int main()
{
    // Create pointer to first Node of Linked list
    IntSLLNode *p = new IntSLLNode(10);

    // Create pointer to second Node of Linked list
    p->next = new IntSLLNode(8);

    // Create pointer to third Node of Linked list
    p->next->next = new IntSLLNode(50);

    // Printing Info from Nodes
    cout << "Info Node 1: " << p->info << endl;
    cout << "Info Node 2: " << p->next->info << endl;
    cout << "Info Node 3: " << (*p->next->next).info << endl;

    return 0;
}
