// using loops
#include <iostream>  
using namespace std; 

int main()  
{  
    int i,fact=1,num;    
    cin>>num;  

    for(i=1;i<=num;i++)
    {    
      fact=fact*i;    
    }    
  cout <<num << fact << endl;  
  return 0;  
}  
// using Recursion

#include<iostream>    
using namespace std;      

int main()    
{    

int facto(int);    
int fact,value;    
cin >> value;    
fact = facto(value);    
cout << fact << endl;    
return 0;    
}    

int facto(int n)    
{    
if(n < 0)    
return(-1); /*Wrong value*/   

if(n == 0)    
return(1);  /*Terminating condition*/   

else    
{    
return(n * facto (n-1));        
} 

}  