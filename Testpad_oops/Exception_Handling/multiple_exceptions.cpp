#include<iostream>
using namespace std;

void Number(int value)
{
  try
  {
    if (value == 0) throw 'x'; //char

    else
      if(value > 0) throw value; // int

    else
      if(value < 0) throw 1.0; // double

    cout<<"End of try block\n";
  }

  catch(...)
  {
    cout<<"Caught an exception\n";
  }

  cout<<"End of try-catch block\n";
}

int main()
{
  Number(7);
  Number(0);
  Number(-2);
  return 0;
}