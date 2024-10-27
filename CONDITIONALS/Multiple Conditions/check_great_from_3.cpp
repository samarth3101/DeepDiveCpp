#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter first number : ";
    cin>>b;
    cout<<"Enter first number : ";
    cin>>c;
    if ((a>b) && (a>c)){
        cout<<"A is greater.";
    }
    else if ((b>a) && (b>c)){
        cout<<"B is greater.";
    }
    else{
        cout<<"C is greates.";
    }
}