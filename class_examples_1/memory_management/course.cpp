/***************************************************************
* The implementation file gives the definition of all private *
* and public member functions. 				 			 *
***************************************************************/

    #include "course.h"
    #include <iomanip>
    #include <cmath>

/***************************************************************
* The constructor is responsible for initializing student’s   *
* number and the name of the input file containing scores.    *
* The constructor then opens the input file and creates       *
* an array in the heap. The rest of the job is done by helper *
* functions that set the scores, the grades, the average and  *
* deviations and prints the results. 			 			 *
***************************************************************/

    Course :: Course(int num, const char* ifn)
    :numOfStds (num), inputFileName (ifn)
    {
        inputFile.open(inputFileName);
        students = new Student [numOfStds];
        getInput();
        setGrades();
        setAverage();
        setDeviations();
        printResult();
    }

/***************************************************************
* The destructor is reponsible for deleting the array created *
* in the heap using the corresponding pointer. It also closes *
* the input file opened by the constructor. 		 		 *
***************************************************************/

    Course :: ~ Course()
    {
        delete [] students;
        inputFile.close();
    }

/***************************************************************
* The getInput function is responsible for reading the input 	 *
* file containg the identity and score of students. 		 	 *
***************************************************************/

    void Course :: getInput()
    {
        for (int i=0; i<numOfStds; i++)
        {
            inputFile >> students[i].id;
            inputFile >> students[i].score;
        }
    }

/***************************************************************
* The getGrades function uses the score for each student and  *
* changes it to the grade using an array of chars. 		 	 *
***************************************************************/

    void Course :: setGrades()
    {
        char charGrades[] = {'F', 'F', 'F' , 'F' , 'F' , 'F', 'D' , 'C' , 'B' , 'A' , 'A'};

        for (int i = 0; i < numOfStds; i++)
        {
            int index = students[i].score / 10;
            students[i].grade = charGrades[index];
        }
    }

/***************************************************************
* The setAverage function processes scores in the array and   *
* creates the average for the class. 			 			 *
***************************************************************/

    void Course :: setAverage()
    {
        int sum = 0;
        for (int i = 0; i < numOfStds; i++)
        {
            sum += students[i].score;
        }
        averageScore = static_cast <double> (sum) / numOfStds;
    }

/***************************************************************
* The setDeviation function reprocess the score to determine  *
* the deviation of each student’s score from the average. 	 *
***************************************************************/

    void Course :: setDeviations()
    {
        standardDeviation = 0.0;
        for (int i=0; i < numOfStds; i++)
        {
            students[i].deviation = students[i].score - averageScore;
            standardDeviation += pow(students[i].deviation , 2);
        }
        standardDeviation = sqrt(standardDeviation) / numOfStds;
    }

/***************************************************************
* The printResult function prints all information about the   *
* the course. 						 					 *
***************************************************************/

    void Course :: printResult() const
    {
        cout << endl;
        cout << "Identity Score Grade Deviation" << endl;
        cout << "-------- ----- ----- ---------" << endl;
        for (int i=0; i<numOfStds; i++)
        {
            cout << setw(4) << noshowpoint << noshowpos;
            cout << right << students[i].id;
            cout << setw(14) << noshowpoint << noshowpos;
            cout << right << students[i].score;
            cout << setw(10) << right << students[i].grade;
            cout << fixed << setw(20) << right << setprecision(2);
            cout << showpoint << showpos;
            cout << students[i].deviation << endl;
        }
        cout << "Average score: " << fixed << setw(4);
        cout << setprecision(2) <<averageScore << endl;
        cout << "Standard Deviation: " << standardDeviation;
    }
