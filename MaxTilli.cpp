#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int n, mx = INT_MIN, i;
  cin >> n;
  int arr[n];

  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (i = 0; i < n; i++)
  {
    mx = max(mx, arr[i]);

    cout << mx << endl;
  }

  return 0;
}