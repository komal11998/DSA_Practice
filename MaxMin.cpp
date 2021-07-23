#include <iostream>
#include <climits>

using namespace std;

int main()
{
  int n, i, maxNo, minNo;

  cout << "Enter the value of n: ";
  cin >> n;
  int arr[n];

  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  maxNo = INT_MIN;
  minNo = INT_MAX;

  for (i = 0; i < n; i++)
  {
    maxNo = max(maxNo, arr[i]);
    minNo = min(minNo, arr[i]);
  }

  cout << "Maximum number is" << maxNo << " " << endl;
  cout << "Minimum number is" << minNo << " " << endl;
  return 0;
}