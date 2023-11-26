/***************************************************************
 * The application file to test the template class Fun 	 	 *
 ***************************************************************/

    #include "fun.cpp"

    int main()
    {
        // Instantiation of four classes each with different data type
        Fun <int> Fun1(23);
        Fun <double> Fun2(12.7);
        Fun <char> Fun3('A');
        Fun <string> Fun4("Hello");

        // Displaying the data values for each class
        cout << "Fun1: " << Fun1.get() << endl;
        cout << "Fun2: " << Fun2.get() << endl;
        cout << "Fun3: " << Fun3.get() << endl;
        cout << "Fun4: " << Fun4.get() << endl;

        // Setting the data values in two classes
        Fun1.set(47);
        Fun3.set('B');

        // Displaying values for newly set data
        cout << "Fun1 after set: " << Fun1.get() << endl;
        cout << "Fun3 after set: " << Fun3.get() << endl;

        return 0;
    }
