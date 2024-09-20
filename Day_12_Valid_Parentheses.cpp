// Valid Parentheses with Multiple Types

// You are given a string s consisting of different types of parentheses: (), {}, and []. Your task is to determine whether the given string is valid.
// A string is considered valid if:
// 1. Every opening bracket has a corresponding closing bracket of the same type.
// 2. The brackets are closed in the correct order. This means that a closing bracket must close the most recent unmatched opening bracket.

#include <iostream>
#include <stack>

using namespace std;

bool isValidParentheses(string input)
{
    stack<char> charStack;

    for (char i : input)
    {
        if ((i == '(') || (i == '[') || (i == '{'))
        {
            charStack.push(i);
        }
        else
        {
            if (!charStack.empty() && ((charStack.top() == '(' && i == ')') ||
                                       (charStack.top() == '[' && i == ']') ||
                                       (charStack.top() == '{' && i == '}')))
            {
                charStack.pop();
            }
            else
            {
                return false;
            }
        }
    }

    return charStack.empty();
}

int main()
{
    string input;
    cout << "Enter the input: ";
    cin >> input;

    if (isValidParentheses(input))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}