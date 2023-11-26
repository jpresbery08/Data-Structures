/***************************************************************
 * The implementation file class template stack. 		 	 *
 ***************************************************************/

    #ifndef STACK_CPP
    #define STACK_CPP
    #include "stack.h"

    // Constructor
    template <typename T>
    Stack <T> :: Stack(int cap)
    : capacity (cap), size (0)
    {
        ptr = new T [capacity];
    }

    // Destructor
    template <typename T>
    Stack <T> :: ~Stack()
    {
        delete [] ptr;
    }

    // Push function
    template <typename T>
    void Stack <T> :: push(const T& element)
    {
        if (size < capacity)
        {
            ptr[size] = element;
            size++;
        }
        else
        {
            cout << "Cannot push; stack is full." << endl;
            assert(false);
        }
    }

    // Pop function
    template <typename T>
    T Stack <T> :: pop()
    {
        if (size > 0)
        {
            T temp = ptr[size-1];
            size--;
            return temp;
        }
        else
        {
            cout << "Cannot pop; stack is empty." << endl;
            assert(false);
        }
    }
    #endif
