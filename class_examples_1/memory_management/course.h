/***************************************************************
 * We have private data members and public member functions.   *
 * The private member functions are helper functions called    *
 * by the constructor to do its job. The constructor is        *
 * responsible for everything. The destructor deletes arrays   *
 * created in the heap and closes the input file. 		 	 *
 ***************************************************************/
#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <fstream>
using namespace std;

class Course
{
private:
int numOfStds;
const char* inputFileName;
ifstream inputFile;
struct Student {int id; int score; char grade;
    double deviation;};
    Student* students;
    double averageScore;
    double standardDeviation;
    // Private member functions
    void getInput ();
    void setGrades ();
    void setAverage ();
    void setDeviations();
    void printResult() const;
    public:
    Course (int numOfStds, const char* inputFileName);
    ~Course ();
    };
    #endif
