// usimg LOOPS
// #include <iostream>  
// using namespace std;  
// int main() 
// {  
// int n1=0,n2=1,n3,i,num;    
//  cin >> num;    
//  cout << n1 << " " << n2 <<" "; //printing 0 and 1    
//  for(i=2;i < num; ++i)   
//  {    
//   n3 = n1 + n2;    
//   cout << n3 <<" ";    
//   n1 = n2;    
//   n2 = n3;    
//  }    
//    return 0;  
// }  

// Using Recursion

#include<iostream>    
using namespace std;  

void printFibo(int n)
{    
    static int n1 = 0, n2 = 1, n3;    
    if(n > 0)
    {    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         cout << n3 <<" ";    
         printFibonacci(n-1);    
    }    
}    

int main()
{    
    int n;    
    cin >> n;  

    cout<<" 0 "<<" 1 ";  
    
    printFibo(n-2);
     return 0;  
}  