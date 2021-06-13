#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int sum = 0;
  int lastdigit;
  while (n > 0)
  {
    lastdigit = n % 10;
    sum += pow(lastdigit, 3);
    n = n / 10;
  }

  if (sum == n)
  {
    cout << "Armstrong Number" << endl;
  }
  else
  {
    cout << "not a Armstrong number" << endl;
  }
  return 0;
}
