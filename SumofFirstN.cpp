#include <bits/stdc++.h>
using namespace std;

int SumN(int n)
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }
  return sum;
}

int32_t main()
{
  int n;
  cin >> n;

  cout << SumN(n) << endl;
  return 0;
}