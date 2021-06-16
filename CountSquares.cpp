#include <bits/stdc++.h>
using namespace std;

class test
{
public:
  int countSquares(int N)
  {
    int sol = sqrt(N - 1);
    return sol;
  }
};

int main()
{
  int t; //test cases
  cin >> t;

  while (t--)
  {
    int N; //Number to count the squares
    cin >> N;

    test t;
    cout << t.countSquares(N) << endl;
  }
  return 0;
}