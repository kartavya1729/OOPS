#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

class Circle
{
  private:
  double radius;

  public:
  void getRadius( ) ; // Prototype declaration
  double showArea( ) ; // Prototype declaration
};

void Circle :: getRadius()
{
  radius = 1.5;
}

double Circle :: showArea ()
{
  return radius * radius * 3.1416;
}

int main( )
{
  Circle c1;
  c1. getRadius( );

  cout<<"area = "<< c1.showArea();
  return 0;
}