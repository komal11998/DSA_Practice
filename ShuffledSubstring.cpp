#include <bits/stdc++.h>
using namespace std;

bool Substring(string str1, string str2)
{
  int n = str1.length();
  int m = str2.length();

  if (n > m)
  {
    return false;
  }
  else
  {
    sort(str1.begin(), str1.end());

    for (int i = 0; i < m; i++)
    {
      if (i + n - 1 >= m)
        return false;

      string s = "";

      for (int j = 0; j < n; j++)
      {
        s.push_back(str2[i + j]);
      }

      sort(s.begin(), s.end());

      if (s == str1)
        return true;
    }
  }
}

int main()
{
  string str1, str2;
  cin >> str1 >> str2;

  if (Substring(str1, str2))
    cout << "Given string is shuffled substring of another string";
  else
    cout << "given string is not a shuffled substring of another string";

  cout << endl;
  return 0;
}