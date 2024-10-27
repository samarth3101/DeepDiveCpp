#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number to check : ";
    cin>>n;
    if(n%5==0){
        cout<<"The number is divisible by 5.";
    }
    else{
        cout<<"Number is not divisible by 5.";
    }
}