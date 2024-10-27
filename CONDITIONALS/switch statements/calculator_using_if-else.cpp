#include<iostream>
using namespace std;
int main(){
    int x,y;
    char symb;
    cout<<"Enter first number : ";
    cin>>x;
    cout<<"Enter second number : ";
    cin>>y;
    cout<<"Enter the operator (+ - * /) : ";
    cin>>symb;
    if (symb=='+') cout<<x+y;
    if (symb=='-') cout<<x-y;
    if (symb=='*') cout<<x*y;
    if (symb=='/') cout<<x/y;
}