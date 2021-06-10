#include <iostream>
using namespace std;

int main()
{
  int row, col;

  std::cin >> row >> col;

  for (int i = 1; i <= row; ++i)
  {
    for (int j = 1; j <= col; ++j)
    {
      std::cout << "*";
    }
    std::cout << endl;
  }
  return 0;
}