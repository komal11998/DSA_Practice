#include <iostream>
using namespace std;

int mian()
{
  int row, col;
  cin >> row >> col;

  for (int i = 0; i <= row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (i == 0 || i == row || j == 0 || j == col)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}