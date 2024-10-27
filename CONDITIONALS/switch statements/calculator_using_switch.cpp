#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"Enter the first number : ";
    cin>>n1;
    int n2;
    cout<<"Enter the second number : ";
    cin>>n2;
    char op;
    cout<<"Enter the operator (+ - * /) : ";
    cin>>op;
    switch(op){
        case '+':
            cout<<"The addition of two number is : ";
            cout<<n1+n2;
            break;
        case '-':
            cout<<"The subtraction of two number is : ";
            cout<<n1-n2;
            break;
        case '*':
            cout<<"The multiplication of two number is : ";
            cout<<n1*n2;
            break;
        case '/':
            cout<<"The division of two number is : ";
            cout<<n1/n2;
            break;
        default:
            cout<<"ERROR!! wrong key selected";
    }
}