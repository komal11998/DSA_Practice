#include <bits/stdc++.h>
using namespace std;

string sort(string s)
{
  sort(s.begin(), s.end());
  return s;
}

int main()
{
  string s;
  cin >> s;

  cout << sort(s) << endl;

  return 0;
}