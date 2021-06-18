#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
  int intersection(int a[], int n, int b[], int m)
  {
    unordered_set<int> in;

    for (int i = 0; i < n; i++)
      in.insert(a[i]);

    for (int i = 0; i < m; i++)
    {
      if (in.find(b[i]) != in.end())
        cout << b[i] << " ";
    }

    return 0;
  }
};

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];

    for (int i = 0; i < n; i++)
      cin >> a[i];

    for (int i = 0; i < m; i++)
      cin >> b[i];

    solution ob;

    cout << ob.intersection(a, n, b, m);
  }
  return 0;
}