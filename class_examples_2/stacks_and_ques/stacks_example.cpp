#include <iostream>
#include <stack>
using namespace std;


int main()
{

// Creation of Stack
  stack<int> s;
  stack<int> s1;
  int num;

  // cout << "Enter in the number of values you want in stack: " << endl;
  // cin >> num;

  for(int i = 0; i < 5; i++)
  {
    s.push(i);
  }

  while(!s.empty())
  {
    cout << s.top() << endl;
    s.pop();
  }

  cout << endl;
/* ------------------------------ Stack #1 --------------------------------- */
  for(int i = 0; i < 10; i++)
  {
    s1.push(i);
  }

  while(!s1.empty())
  {
    cout << s1.top() << endl;
    s1.pop();
  }
  cout << endl;
  // Swap S and S1
  swap(s, s1);

  cout << s.size() << endl;
  cout << s1.size() << endl;

  return 0;
}
