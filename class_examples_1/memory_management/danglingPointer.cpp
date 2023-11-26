#include <iostream>
using namespace std;

int main()
{
    double* pX = new double;
    delete pX;
    *pX = 35.3;
    cout << endl << *pX << endl;

    return 0;
}
