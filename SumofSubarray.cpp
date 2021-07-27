#include <iostream>
using namespace std;

//num of subarray= n*(n+1)/2
int main()
{
  int n, sum = 0, i, j;
  cin >> n;

  int arr[n];
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (i = 0; i < n; i++)
  {
    sum = 0;
    for (j = i; j < n; j++)
    {
      sum += arr[j];
      cout << sum << endl;
    }
  }
}