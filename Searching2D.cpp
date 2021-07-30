#include <iostream>
using namespace std;

int main()
{
  int n, m, i, j;

  cin >> n >> m;
  int a[n][m];

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }

  int x;
  cin >> x;

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      if (a[i][j] == x)
      {
        cout << i << " " << j << " ";
      }
    }
  }
  return 0;
}