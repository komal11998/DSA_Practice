#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
  int dounion(int a[], int n, int b[], int m)
  {
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
      s.insert(a[i]);

    for (int i = 0; i < m; i++)
      s.insert(b[i]);

    cout << "Number of elements in the Union: ";
    return s.size();
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
    cout << ob.dounion(a, n, b, m);
  }
  return 0;
}