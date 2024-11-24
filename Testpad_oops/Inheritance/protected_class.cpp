#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

class BS
{
  protected:
  static const int x = 15;

  public:
  void showx( )
  {
    cout<<"Member of base class : "<<x<<endl;
  }
};

class DR : protected BS
{
  static const int y = 30;

  public:
  void showy()
  {
    cout<<"Member of base class in derived: "<<x<<endl;
    cout<<"Member of derived class : "<<y;
  }
};


int main ()
{
  DR d;
  d.showy();
  return 0;
}