#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num)
{
  for (int i = 2; i < sqrt(num); i++)
  {
    if (num % i == 0)
    {
      return false;
    }
    return true;
  }
}

int main()
{
  int a, b, i;
  cin >> a >> b;

  for (i = a; i < b; i++)
  {
    if (isPrime(i))
    {
      cout << i << endl;
    }
  }
}