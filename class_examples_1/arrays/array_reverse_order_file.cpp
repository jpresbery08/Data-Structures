/***************************************************************
 * Use of an array to read a list of integers from a file, to  *
 * reverse the order of elements, and to write the reversed    *
 * elements to another file                                    *
 ***************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Declarations
        const int CAPACITY = 50;
        int numbers[CAPACITY];
        int size = 0;
        ifstream inputFile;
        ofstream outputFile;

    // Opening the input file
    // THIS IS SOMETHING NEW TO LEARN! COOL!
        inputFile.open("inFile.dat");
        if (!inputFile)
        {
            cout << "Error. Input file cannot be opened." << endl;
            cout << "The program is terminated";
            return 0;
        }

    // Reading the list of numbers from the input file into array
    // THE CONTENTS OF THE WHILE LOOP CONDITION IS COOL!
        while (inputFile >> numbers[size] && size <= 50)
        {
            size++;
        }

    // Closing the input file
        inputFile.close();

    // Openning the output file
        outputFile.open("outFile.dat");
        if (!outputFile)
        {
            cout << "Error. Output file cannot be opened." << endl;
            cout << "The program is terminated";
            return 0;
        }

    // Writing the elements of the reversed array into the output file
        for (int i=size-1; i>=0; i--)
        {
            outputFile << numbers[i] << " " ;
        }

    // Closing the output file
        outputFile.close();

    return 0;
}
