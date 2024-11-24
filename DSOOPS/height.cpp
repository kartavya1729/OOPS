/* Three brothers want to take a family photo, and the photographer is capturing the image from a considerable distance. 
Due to the distance,some family members are standing behind the brothers and are not visible to the photographer.

The photographer is having difficulty determining the heights of the three brothers and asks, "Who is the tallest person among you three?"
 However, no one responds clearly. Can you assist the photographer in identifying the tallest among the three brothers?

Constraint: 60≤ bro1 ≤ 80 , 60 ≤ bro2 ≤ 80 , 60 bro3 ≤ 80

Input Format: The only line of input contains three integers, bro1, bro2, and bro3, separated by a space. representing the heights of the three brothers

Output Format: The output is an integer representing the height of the tallest person among three brothers.

Test Case 1: 61 70 79

Expected Output: 79 */

#include <iostream>
using namespace std;

int main() 
{
    int bro1, bro2, bro3;
    
    cin >> bro1 >> bro2 >> bro3;
    
    if (bro1 < 60 || bro1 > 80 || bro2 < 60 || bro2 > 80 || bro3 < 60 || bro3 > 80) 
    {
        cout << "Invalid input. Heights should be between 60 and 80." << endl;
    } 

    else 
    {
        int tallest = max(bro1, max(bro2, bro3));
        
        cout << tallest << endl;
    }
    
    return 0;
}
