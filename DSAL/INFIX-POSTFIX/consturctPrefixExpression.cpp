#include <iostream>
#include <stack>
#include <cctype>
#include <string>
#include <algorithm>

using namespace std;

// Function to get the precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    }
    if (op == '*' || op == '/') {
        return 2;
    }
    return 0;
}

// Function to perform infix to postfix conversion
string infixToPostfix(string infix) {
    stack<char> s;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {
        char current = infix[i];

        // If the character is an operand, add it to the postfix expression
        if (isalnum(current)) {
            postfix += current;
        }
        // If the character is '(', push it to the stack
        else if (current == '(') {
            s.push(current);
        }
        // If the character is ')', pop and append to postfix until '(' is encountered
        else if (current == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop(); // Pop '('
        }
        // If the character is an operator
        else {
            while (!s.empty() && precedence(s.top()) >= precedence(current)) {
                postfix += s.top();
                s.pop();
            }
            s.push(current);
        }
    }

    // Pop remaining operators from the stack
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

// Function to convert infix to prefix expression
string infixToPrefix(string infix) {
    // Step 1: Reverse the infix expression
    reverse(infix.begin(), infix.end());

    // Step 2: Change '(' to ')' and vice versa
    for (int i = 0; i < infix.length(); i++) {
        if (infix[i] == '(') {
            infix[i] = ')';
        } else if (infix[i] == ')') {
            infix[i] = '(';
        }
    }

    // Step 3: Convert the modified infix to postfix
    string postfix = infixToPostfix(infix);

    // Step 4: Reverse the postfix expression to get the prefix expression
    reverse(postfix.begin(), postfix.end());

    return postfix;
}

int main() {
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;

    string prefix = infixToPrefix(infix);
    cout << "Prefix expression: " << prefix << endl;

    return 0;
}

// Enter infix expression: (A+B)*(C-D)
// Steps to convert infix to prefix:

// 	1.	Reverse the infix expression.
// 	2.	Change opening parentheses ( to closing parentheses ) and vice versa.
// 	3.	Convert the reversed infix expression to a postfix expression.
// 	4.	Reverse the resulting postfix expression to get the prefix expression.

// How it works:

// For the input infix expression (A+B)*(C-D):
// 	1.	Reverse the expression: )D-C(*+B-A(
// 	2.	Switch parentheses: )D-C(*+B-A(
// 	3.	Convert to postfix: AB+C-D*-
// 	4.	Reverse the result: *+AB-CD
