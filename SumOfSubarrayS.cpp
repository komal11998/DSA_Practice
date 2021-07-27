//Find sum of all possible subarrays.If any of the sum equates to S,output the starting and ending index of the subarray.

#include <iostream>
using namespace std;

int main()
{
  int n, S;

  cin >> n >> S;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int i = 0, j = 0, st = -1, en = -1, sum = 0;

  while (j < n && sum + arr[j] <= S)
  {
    sum += arr[j];
    j++;
  }

  if (sum == S)
  {
    cout << i + 1 << " " << j << endl;
    return 0;
  }

  while (j < n)
  {
    sum += arr[j];

    while (sum > S)
    {
      sum -= arr[i];
      i++;
    }

    if (sum == S)
    {
      st = i;
      en = j;
      break;
    }
    j++;
  }

  cout << st << " " << en << endl;
}
