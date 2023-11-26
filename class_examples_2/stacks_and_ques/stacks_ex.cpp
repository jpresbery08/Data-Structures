#include <iostream>
#include <stack>
using namespace std;



int main()
{
  // Creation of Stack
    stack<int> s;
    // stack<int> s1;
    // int num;



    for(int i = 0; i < 10; i++)
    {
      s.push(i);
    }

    while(!s.empty())
    {
      cout << s.top() << endl;
      s.pop();
    }

    cout << endl;
  return 0;
}
