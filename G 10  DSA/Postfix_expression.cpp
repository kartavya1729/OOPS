#include <iostream>
#include <stack>
#include <string>
#include <cctype>  // for isdigit function
using namespace std;

// Function to evaluate a postfix expression
int evaluatePostfix(string expression) 
{
    stack<int> s;

    for (char ch : expression) 
    {
        if (isdigit(ch)) 
        {
            // If the character is a digit, push it onto the stack
            s.push(ch - '0');
        } 

        else 
        {
            // The character is an operator, pop two elements from the stack
            int operand2 = s.top(); s.pop();
            int operand1 = s.top(); s.pop();
            
            // Perform the operation and push the result back onto the stack
            switch (ch) {
                case '+':
                    s.push(operand1 + operand2);
                    break;

                case '-':
                    s.push(operand1 - operand2);
                    break;

                case '*':
                    s.push(operand1 * operand2);
                    break;

                case '/':
                    s.push(operand1 / operand2);
                    break;
            }
        }
    }

    return s.top();
}

int main() 
{
    string expression = "23+";
    cout << "Input: " << expression << endl;
    cout << "Output: " << evaluatePostfix(expression) << endl;
    return 0;
}
