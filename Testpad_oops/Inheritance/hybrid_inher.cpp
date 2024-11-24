#include<iostream>
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

  void show_no()
  {
    cout << " Roll No. = " << Rollno << endl;
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
    cout << "\n marks in subject 1 : " << marks1;
    cout << "\n marks in subject 2 : " << marks2;
  }
};


class Sports
{
  protected:
  float s_score ;

  public:
  void get_sscore(float s)
  {
    s_score = s;
  }

  void show_sscore()
  {
    cout << "\n sports wt: " << s_score;
  }
};


class Cultural
{
  protected:
  float c_score;

  public:
  void get_cscore(float c)
  {
    c_score = c;
  }

  void show_cscore()
  {
    cout << "\n cultural wt: " << c_score;
  }
};


class Result : public Test, public Sports, public Cultural
{
  float total;

  public:

  void display_result()
  {
    total = marks1 + marks2 + s_score + c_score;
    show_no();
    show_marks();
    show_sscore();
    show_cscore();
    cout << "\n Total Marks : " << total;
  }
};


int main()
{
  Result st1;

  st1.get_no(123);

  st1.get_marks(67.0, 81.0);

  st1.get_sscore(6);

  st1.get_cscore(7);

  st1.display_result();

  return 0;
}