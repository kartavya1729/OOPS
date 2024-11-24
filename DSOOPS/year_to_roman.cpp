/* convert a given year into roman equivalent using recursion 1-I , 5-V ,10-X , 50-L, 100 -C ,500-D ,1000-M
input 2 output II input 9 output VIIII  code in c++ using Recursion */ 

#include <iostream>
#include <string>
using namespace std;

string convertToRoman(int year) 
{
    string roman = "";
    
    if (year <= 0) 
    {
        return "";
    }
    
    if (year >= 1000) 
    {
        return "M" + convertToRoman(year - 1000);
    }

    if (year >= 900) 
    {
        return "CM" + convertToRoman(year - 900);
    }

    if (year >= 500) 
    {
        return "D" + convertToRoman(year - 500);
    }

    if (year >= 400) 
    {
        return "CD" + convertToRoman(year - 400);
    }

    if (year >= 100) 
    {
        return "C" + convertToRoman(year - 100);
    }

    if (year >= 90) 
    {
        return "XC" + convertToRoman(year - 90);
    }

    if (year >= 50) 
    {
        return "L" + convertToRoman(year - 50);
    }

    if (year >= 40) 
    {
        return "XL" + convertToRoman(year - 40);
    }

    if (year >= 10) 
    {
        return "X" + convertToRoman(year - 10);
    }

    if (year >= 9) {
        return "VIIII";
    }

    if (year >= 5) {
        return "V" + convertToRoman(year - 5);
    }

    if (year >= 4) {
        return "IIIII";
    }

    if (year >= 1) 
    {
        return "I" + convertToRoman(year - 1);
    }
    
    return roman;
}

int main() 
{
    int year;

    cout << "Enter a year: ";
    cin >> year;
    
    if (year <= 0 || year > 3999) 
    {
        cout << "Invalid year.";
    } 

    else 
    {
        cout << "Roman numeral equivalent: " << convertToRoman(year) << endl;
    }
    
    return 0;
}
