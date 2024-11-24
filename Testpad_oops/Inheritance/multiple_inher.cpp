#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

class Red
{
  public:

  Red( )
  {
    cout << "Red + ";
  }
};


class Yellow
{
  public:

  Yellow()
  {
    cout << "Yellow ";
  }
};


class Orange : public Red, public Yellow
{
  public:

  Orange()
  {
    cout << "= Orange";
  }
};

int main ( )
{
  Orange O1;
  return 0;
}