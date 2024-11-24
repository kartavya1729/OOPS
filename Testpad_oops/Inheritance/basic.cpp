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

class DR : public BS
{
	static const int y = 30;
	public:
	void showy( )
	{
		cout<<"Member of derived class :"<< y<<endl;
	}
};


int main ()
{
  DR d;
  d.showx();
  d.showy();
  return 0;
}