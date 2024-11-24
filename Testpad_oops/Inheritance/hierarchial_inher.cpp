#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

class Account
{
  protected:

  int accno;

  public:

  void get_accno(int an)
  {
    accno = an;
  }

  void show_accno()
  {
    cout<<"Account no. : "<<accno;
  }

};


class Saving_Account: public Account
{
  float Amount;

  public:

  void get_data(int a, float b)
  {
    get_accno(a);
    Amount = b;
  }

  void show_data()
  {
    show_accno();
    cout<<" Balance:"<<Amount<<endl;
  }

};


class Fixed_Account: public Account
{
  float Amount;

  public:
  void get_data(int a, float b)
  {
    get_accno(a);
    Amount = b;
  }

  void show_data()
  {
    show_accno();
    cout<<" Balance:"<<Amount<<endl;
  }

};


class Current_Account: public Account
{
  float Amount;

  public:

  void get_data(int a, float b)
  {
    get_accno(a);
    Amount = b;
  }

  void show_data()
  {
    show_accno();
    cout<<" Balance:"<<Amount<<endl;
  }

};


int main()
{
  Saving_Account s1;

  Current_Account c1;

  Fixed_Account f1;

  s1.get_data(32560, 8190.0);

  c1.get_data(01560, 29150.0);

  f1.get_data(00630, 50000.0);

  s1.show_data();

  c1.show_data();

  f1.show_data();
  return 0;
}