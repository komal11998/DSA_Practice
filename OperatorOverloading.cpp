#include <iostream>
using namespace std;

class Complex
{
private:
  int a, b;

public:
  void setdata(int x, int y)
  {
    a = x;
    b = y;
  }

  void showdata()
  {
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
  }

  Complex add(Complex c) //methos 1 to add the non primitive type
  {
    Complex temp;
    temp.a = a + c.a;
    temp.b = b + c.b;
    return (temp);
  }

  Complex operator+(Complex c) //operator overloading
  {
    Complex temp;
    temp.a = a + c.a;
    temp.b = b + c.b;
    return (temp);
  }
  Complex operator-() //unary operator overloading
  {
    Complex temp;
    temp.a = -a;
    temp.b = -b;
    return (temp);
  }
};

int main()
{
  Complex c1, c2, c3;

  c1.setdata(3, 4);
  c2.setdata(6, 7);

  c3 = c1.add(c2); //method 1

  c3 = c1 + c2; //binary operator

  c3 = -c1; //unary operator
  c3.showdata();

  return 0;
}