#include <iostream>
#include <math.h>

using namespace std;

int factorial(int n)
{
  int fact = 1;
  for (int i = 2; i <= n; i++)
  {
    fact *= i;
  }
  return fact;
}

int main()
{
  int n;
  cin >> n;

  int sol = factorial(n);
  cout << sol << endl;
  return 0;
}