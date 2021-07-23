#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int n, key;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Enter the element to search: ";
  cin >> key;

  cout << "Element Found at " << linearSearch(arr, n, key) << " index";

  return 0;
}