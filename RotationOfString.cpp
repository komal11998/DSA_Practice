#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool checkRotation(string s1, string s2)
{
  transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
  if (s1.length() != s2.length())
    return false;

  string temp = s1 + s1;

  int m = temp.length();
  int n = s2.length();

  for (int i = 0; i < m - n; i++)
  {
    int flag = 1;

    for (int j = 0; j < n - 1; j++)
    {
      if (s2[j] != temp[i + j])
      {
        flag = 0;
        break;
      }
    }
    if (flag == 1)
      return true;
  }
  return false;
}

int main()
{
  string s1, s2;
  cin >> s1;
  cin >> s2;
  if (checkRotation(s1, s2))
    cout << "Strings are rotation of each other";
  else
    cout << "Strings are not rotation of each other";

  return 0;
}