/***************************************************************
 * The application file to test the stack class with integers  *
 ***************************************************************/

    #include "stack.cpp"

    int main()
    {
        Stack <int> stack(10);

        stack.push(5);
        stack.push(6);
        stack.push(7);
        stack.push(3);

        cout << stack.pop() << endl;
        cout << stack.pop() << endl << endl;

        return 0;
    }
