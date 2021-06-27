#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

class Stack
{
  int top;

public:
  int a[MAX];
  Stack() { top = -1; }
  bool push(int x);
  int peek();
  int pop();
  bool isempty();
};

bool Stack::push(int x)
{
  if (top >= (MAX - 1))
  {
    cout << "stack overflow";
    return false;
  }
  else
  {
    a[++top] = x;
    cout << "pushed in stack";
    return true;
  }
}

int Stack::pop()
{
  if (top < 0)
  {
    cout << "stack underslow";
    return 0;
  }
  else
  {
    int x = a[top--];
    return x;
  }
}
int Stack::peek()
{
  if (top < 0)
  {
    cout << "Stack is Empty";
    return 0;
  }
  else
  {
    int x = a[top];
    return x;
  }
}

bool Stack::isempty()
{
  return (top < 0);
}

int main()
{
  class Stack s;
  s.push(30);
  s.push(3);
  s.push(40);
  s.push(90);

  cout << s.pop() << "Poped from stack ";
  cout << "Elements present in stack : ";
  while (!s.isempty())
  {
    cout << s.peek() << " ";
    s.pop();
  }
  return 0;
}