#include <iostream>
#include <math.h>
using namespace std;

int power(int n, int p)
{
  if (p == 0)
  {
    return 1;
  }

  int prev = power(n, p - 1);
  return n * prev;
}

int main()
{
  int n, p;
  cin >> n >> p;

  cout << power(n, p);
}