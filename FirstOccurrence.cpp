//Given an array of size N. The task is to find the first element in the array of integers,i.e., an element that occurs more than once and whose index of first occurrence is smallest.

//asked in amazon and oracle

#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int n, i;
  cin >> n;

  int arr[n];

  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  const int N = 1e6 + 2;

  int idx[N];

  for (i = 0; i < N; i++)
  {
    idx[i] = -1;
  }

  int minidx = INT_MAX;

  for (i = 0; i < n; i++)
  {
    if (idx[arr[i]] != -1)
    {
      minidx = min(minidx, idx[arr[i]]);
    }

    else
    {
      idx[arr[i]] = i;
    }
  }

  if (minidx == INT_MAX)
  {
    cout << "-1" << endl;
  }

  else
  {
    cout << minidx + 1 << endl;
  }

  return 0;
}