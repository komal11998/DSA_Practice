//smallest positive missing number

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

  const int N = 1e6 + 2;

  bool check[N];
  for (i = 0; i < N; i++)
  {
    check[i] = 0;
  }

  for (i = 0; i < n; i++)
  {
    if (arr[i] >= 0)
    {
      check[arr[i]] = 1;
    }
  }

  int ans = -1;

  for (i = 0; i < N; i++)
  {
    if (check[i] == 0)
    {
      ans = i;
      break;
    }
  }

  cout << ans << " " << endl;
  return 0;
}
