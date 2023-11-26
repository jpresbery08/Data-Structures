/*  This program teaches you about vectors from the STL.    */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    cout << endl;
    cout << "Enter a list of positive integers separated by spaces." << endl
         << "To stop accepting numbers enter the sentinal value, 0." << endl;
    cout << endl;

    int next;
    cin >> next;

    while (next > 0)
    {
        v.push_back(next);
        cout << next << " added.";
        cout << " v.size = " << v.size() << endl;
        cin >> next;
    }

    cout << endl << "Your vector looks lke: ";
    for (int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    cout << endl << endl;

    return 0;

}
