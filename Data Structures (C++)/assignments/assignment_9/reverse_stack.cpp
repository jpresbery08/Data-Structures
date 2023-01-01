// Name: Jermaine Presbery
// File Name: reverse_stack.cpp
// Date: 15 November 2020

#include <iostream>
#include <stack>
#include <queue>
using namespace std;




int main()
{
  // Creating Stack with 10 integers
  stack<int> my_stack;

  // Creating the 2 other Stacks
  stack<int> other_stack_1;
  stack<int> other_stack_2;

  for (int i = 0; i < 10; i++)
  {
    my_stack.push(i);
  }


  for (int i = 0; i < 10; i++)
  {
    other_stack_1.push(my_stack.top());
    my_stack.pop();
  }


  for (int i = 0; i < 10; i++)
  {
    other_stack_2.push(other_stack_1.top());
    other_stack_1.pop();
  }

  for (int i = 0; i < 10; i++)
  {
    my_stack.push(other_stack_2.top());
    other_stack_2.pop();
  }

  cout << "Reversal One: " << endl;
  cout << "my_stack contains: " << endl;

  while(!my_stack.empty())
  {
    cout << my_stack.top() << endl;
    my_stack.pop();
  }



/* -------------------------- Creation of Queue ---------------------------- */

queue <int> my_queue;

for (int i = 9; i >= 0; i--)
{
  my_stack.push(i);
}

cout << endl;
for(int i = 0; i < 10; i++)
{
  my_queue.push(my_stack.top());
  my_stack.pop();
}

// while(!my_queue.empty())
// {
//   cout << my_queue.front() << endl;
//   my_queue.pop();
// }

for(int i = 0; i < 10; i++)
{
  my_stack.push(my_queue.front());
  my_queue.pop();
}



cout << endl;
cout << "Reversal Two: " << endl;
cout << "my_stack contains: " << endl;

while(!my_stack.empty())
{
  cout << my_stack.top() << endl;
  my_stack.pop();
}
  return 0;
}
