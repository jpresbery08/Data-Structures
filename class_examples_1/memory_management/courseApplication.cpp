/*****************************************************************
 * The application program is very simple. The user instantiates *
 * an object of the class and passes the number of students and  *
 * name of the input file where the scores are stored. 	   	   *
 * Everything is done by the constructor of the class. 	   	   *
 *****************************************************************/
#include "course.h"

int main()
{
    // Instantiation of the Course object
    Course course(10,"scores.dat");
    return 0;
}
