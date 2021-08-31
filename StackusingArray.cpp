#include <iostream>
using namespace std;

#define n 100

class stack
{
  int *arr;
  int top;

public:
  stack()
  {
    arr = new int[n];
    top = -1;
  }

  void push(int x)
  {
    if (top == n - 1)
    {
      cout << "stack overflow";
      return;
    }

    top++;
    arr[top] = x;
  }

  int pop()
  {
    if (top == -1)
    {
      cout << "stack underflow";
      return -1;
    }

    top--;
  }

  int Top()
  {
    if (top == -1)
    {
      cout << "No element in stack";
      return -1;
    }

    return arr[top];
  }

  bool empty()
  {
    return top == -1;
  }
};

int main()
{

  stack st;
  st.push(1);
  st.push(4);
  st.push(6);
  st.push(8);
  // cout << st.Top() << endl;
  st.pop();
  st.pop();
  st.pop();
  cout << st.Top() << endl;
  return 0;
}