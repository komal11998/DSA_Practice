//We have an array of N non negative integers.The i=th integers of the array is Ai. We want to choose the contiguous arithmentic subarray from the array that has the maximum length. Find the length of longest contiguous arithmetic subarray.

#include <iostream>
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

  int ans = 2;
  int pd = arr[1] - arr[0];
  int curr = 2;
  int j = 2;

  while (j < n)
  {
    if (pd == arr[j] - arr[j - 1])
    {
      curr++;
    }
    else
    {
      pd = arr[j] - arr[j - 1];
      curr = 2;
    }
    ans = max(ans, curr);
    j++;
  }

  cout << ans << endl;

  return 0;
}