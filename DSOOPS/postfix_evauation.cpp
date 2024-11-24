/* User
Evaluate postfix expression using Stack input string output final string  input 2 3 + output 5 code in c++ using stack
*/

#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

int evaluatePostfix(const string& expression) 
{
    stack<int> operands;

    for (char c : expression) 
    {
        if (isdigit(c)) 
        {
            operands.push(c - '0');
        } 
        else if (c == ' ') 
        {
            continue;
        } 
        else 
        {
            int operand2 = operands.top();
            operands.pop();

            int operand1 = operands.top();
            operands.pop();

            switch (c) 
            {
                case '+':
                    operands.push(operand1 + operand2);
                    break;

                case '-':
                    operands.push(operand1 - operand2);
                    break;

                case '*':
                    operands.push(operand1 * operand2);
                    break;

                case '/':
                    operands.push(operand1 / operand2);
                    break;

                default:
                    cout << "Invalid expression!" << endl;
                    return -1;
            }
        }
    }

    return operands.top();
}

int main() 
{
    string expression;
    
    cout << "Enter postfix expression: ";
    getline(cin, expression);

    int result = evaluatePostfix(expression);
    cout << "Result: " << result << endl;

    return 0;
}
