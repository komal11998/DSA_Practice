#include <iostream>
using namespace std;

int main()
{

  string first, last;

  cout << "Enter first name: ";
  cin >> first;

  cout << "Enter last name: ";
  cin >> last;

  cout << "full name is: " << first + " " + last;

  return 0;
}