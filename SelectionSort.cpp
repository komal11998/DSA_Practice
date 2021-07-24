#include <iostream>
using namespace std;

int SelectionSort(int arr[], int n)
{
  int i, j, temp;

  for (i = 0; i < n - 1; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[i])
      {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }

  cout << "After Sorting ";
  for (i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int n, i;
  cin >> n;

  int arr[n];

  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Before Sorting ";
  for (i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;

  SelectionSort(arr, n);
}