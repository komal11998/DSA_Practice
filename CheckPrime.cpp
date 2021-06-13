#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n;
  cin >> n;
  bool flag = 0;

  for (int i = 0; i < n; i++)
  {
    if (n % i == 0)
    {
      cout << "non-prime";
      flag = 1;
      break;
    }
  }

  if (flag == 0)
    cout << "Prime";
  return 0;
}