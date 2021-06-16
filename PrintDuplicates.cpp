#include <bits/stdc++.h>
#define NO_OF_CHARS 256

using namespace std;

void printDuplicate(string s)
{
  int count[NO_OF_CHARS] = {};
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  for (int i = 0; i < s.size(); i++)
    count[s[i]]++;

  for (int i = 0; i < s.size(); i++)
  {
    if (count[s[i]] > 1)
    {
      cout << s[i] << "count = " << count[s[i]] << endl;
      count[s[i]] = 0;
    }
  }
}

int main()
{
  string s;
  cin >> s;

  cout << "String is: " << s << endl;
  printDuplicate(s);
  return 0;
}