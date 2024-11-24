#include <iostream>  
using namespace std;  

int main()  
{  
  int n,r;
  int sum = 0,temp;    
  cin >> n;  

 temp = n; 

 while(n > 0)    
{    
 r = n % 10;    
 sum = (sum * 10) + r;    
 n = n / 10;    
}   

if(temp == sum)    
cout << "Num is Palindrome";    

else    
cout<< "Num is not Palindrome.";   
  return 0;  
}  