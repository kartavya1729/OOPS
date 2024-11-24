#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

class BS
{
  static const int x = 15;
  public:
  void showx( )
  {
    cout<<"Member of base class : "<<x<<endl;
  }
};


class DR : private BS
{
  static const int y = 30;
  public:
  void showy( )
  {
    showx();
    cout << "Member of derived class : " << y;
  }
};


int main ()
{
  DR d;
  d.showy();
  return 0;
}