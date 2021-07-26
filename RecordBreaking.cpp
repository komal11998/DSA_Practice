#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, i;
  cin >> n;

  int arr[n];

  int counter = 0;
  int recordbreaker = arr[0];

  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  if (n == 1)
  {
    cout << "1" << endl;
    return 0;
  }
  for (i = 1; i < n; i++)
  {
    if (arr[i] > recordbreaker)
    {
      counter++;
      recordbreaker = arr[i];
    }
  }

  cout << counter << endl;
  return 0;
}