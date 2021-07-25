#include <iostream>
using namespace std;

int main()
{
  int n, i;
  cin >> n;

  int arr[n];

  cout << "Enter the elements of array ";
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (i = 1; i < n; i++)
  {
    int current = arr[i];
    int j = i - 1;

    while (arr[j] > current && j >= 0)
    {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = current;
  }

  cout << "After Insertion Sort ";
  for (i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}