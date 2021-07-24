#include <iostream>
#include <climits>
using namespace std;

int maxSubarraySum(int arr[], int n)
{
  int temp = 0, maxI = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    temp += arr[i];

    maxI = max(temp, maxI);

    if (temp < 0)
      temp = 0;
  }
  return maxI;
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  cout << "enter the elements of the array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Max Sum is: " << maxSubarraySum(arr, n);
}