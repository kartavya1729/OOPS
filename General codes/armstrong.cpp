#include <iostream>  
using namespace std;  

int main()  
{  
    
int n,r;
int sum=0,temp; 

cin >> n;    
temp = n;   

while(n > 0)    
{    
r = n % 10;    
sum = sum + ( r * r * r);    
n = n / 10;    
}    

if(temp == sum)    
cout<<"Armstrong Num."<<endl;    

else    
cout<<"Not Armstrong Num."<<endl;   

return 0;  
}  