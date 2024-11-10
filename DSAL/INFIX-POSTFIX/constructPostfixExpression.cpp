#include <iostream>
#include <stack>
#include <cctype>
#include <string>

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

int main() {
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}

// Enter infix expression: A*(B+C)

