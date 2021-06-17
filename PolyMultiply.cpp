#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> polyMultiply(int arr1[], int arr2[], int M, int N)
  {
    vector<int> ans(M + N - 1);

    for (int i = 0; i < M + N - 1; i++)
      ans[i] = 0;

    for (int i = 0; i < M; i++)
    {
      for (int j = 0; j < N; j++)
      {
        ans[i + j] += arr1[i] * arr2[j];
      }
    }
    return ans;
  }
};

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int M, N;
    cin >> M >> N;
    int arr1[M], arr2[N];
    for (int i = 0; i < M; i++)
      cin >> arr1[i];
    for (int i = 0; i < N; i++)
      cin >> arr2[i];

    Solution ob;
    vector<int> ans = ob.polyMultiply(arr1, arr2, M, N);

    for (int i = 0; i < M + N - 1; i++)
      cout << ans[i] << " ";
  }
}