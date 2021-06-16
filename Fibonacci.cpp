#include <iostream>
#include <math.h>
using namespace std;

void fibo(int num)
{
  int t1 = 0;
  int t2 = 1, nextterm, i;

  for (i = 1; i < num; i++)
  {
    cout << t1 << endl;
    nextterm = t1 + t2;
    t1 = t2;
    t2 = nextterm;
  }
  return;
}

int main()
{
  int n;
  cin >> n;

  fibo(n);
  return 0;
}