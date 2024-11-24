#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

class Circle
{
  private:
  double radius;

  public:
  double getRadius( ) // Member function (Setter)
  {
    radius = 1.5;
  }

  double showArea() // Member function
  {
    return radius * radius * 3.1416;
  }
};

int main( )
{
  Circle C1;

  C1. getRadius( );

  cout << "area = " << C1.showArea();
  return 0;
}