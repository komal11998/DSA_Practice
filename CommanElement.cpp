#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int n, m, o;
  cin >> n >> m >> o;
  int a[n], b[m], c[o];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int j = 0; j < m; j++)
  {
    cin >> b[j];
  }
  for (int k = 0; k < o; k++)
  {
    cin >> c[k];
  }

  int i = 0, j = 0, k = 0;
  int last = INT_MIN;

  while (i < n && j < m && k < o)
  {
    if (a[i] == b[j] && b[j] == c[k])
    {
      cout << a[i] << " ";
      i++;
      j++;
      k++;
    }

    else if (a[i] < b[j])
      i++;

    else if (b[j] < c[k])
      j++;

    else
      k++;
  }
}