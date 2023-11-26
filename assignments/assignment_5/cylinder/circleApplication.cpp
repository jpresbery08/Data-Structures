/* ----------------------------- Application File --------------------------- */

    /*
        File Name: circleApplication.cpp

        This is the application file, which contain the member function
        definitions)

        In order to get an executable program, compile all of the .cpp files and
        link them together by typing one of the following commands:

        g++ -o myExecutableProgram <file1.cpp> <file2.cpp> ... <main.cpp>
        g++ -o myExecutableProgram *.cpp 
    */

/* ----------------------- Object Application Section ----------------------- */

    #include "circle.h"

    int main()
    {
        cout << endl;

        float radiuss;

        cout << "Enter a radius: " << endl;
        cin >> radiuss;

        // Instantiation of a Circle object using the parameter constructor
        cout << "Info for Circle #1" << endl;
        Circle circle_1(radiuss);
        cout << "Radius Circle #1: " << circle_1.get_radius() << endl;
        cout << "Area Circle #1: " << circle_1.get_area() << endl;
        cout << "Perimeter Circle #1: " << circle_1.get_perimeter() << endl;

        cout << endl;

        // Instantiation of a Circle object using the copy constructor
        cout << "Info for Circle #2" << endl;
        Circle circle_2(circle_1);
        cout << "Radius Circle #2: " << circle_2.get_radius() << endl;
        cout << "Area Circle #2: " << circle_2.get_area() << endl;
        cout << "Perimeter Circle #2: " << circle_2.get_perimeter() << endl;

        cout << endl;

        // Instantiation of a Circle object using the default constructor
        cout << "Info for Circle #3" << endl;
        Circle circle_3;
        cout << "Radius Circle #3: " << circle_3.get_radius() << endl;
        cout << "Area Circle #3: " << circle_3.get_area() << endl;
        cout << "Perimeter Circle #3: " << circle_3.get_perimeter() << endl;

        cout << endl;

        return 0;
    }
