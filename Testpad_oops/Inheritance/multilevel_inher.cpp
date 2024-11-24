#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

class Student
{
  protected:

  int Rollno;

  public:

  void get_no(int rn)
  {
    Rollno = rn;
  }

  void show_no ( )
  {
    cout<<"Roll No. "<<Rollno;
  }

};


class Test : public Student
{
  protected:

  float marks1, marks2;

  public:

  void get_marks(float a, float b)
  {
    marks1 = a;
    marks2 = b;
  }

  void show_marks()
  {
    cout<<"\n marks in subject 1 : "<<marks1;
    cout<<"\n marks in subject 2 : "<<marks2;
  }

};


class Result : public Test
{
  float total;

  public:

  void display_result()
  {
    total = marks1 + marks2;
    cout<<"\n Marks of Roll no. "<<Rollno<<" is "<<total;
  }
};


int main()
{
  Result st1;
  st1.get_no(101);
  st1.get_marks(67.0, 81.0);
  st1.display_result();
  return 0;
}
