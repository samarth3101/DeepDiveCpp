#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter random number between 99 to 1000 : ";
    cin>>n;
    if ((n>99) && (n<1000)){
        cout<<"The Number is Three Digit.";
    }
    else{
        cout<<"The Number is Not Three Digit.";
    }
}