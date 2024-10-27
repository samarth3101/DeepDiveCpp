#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    // if (n%2==0){
    //     cout<<"The number is even.";
    // }
    // else{
    //     cout<<"The number is odd.";
    // }
    // (condition) ? if true : if false
    (n%2==0) ? cout<<"EVEN NUMBER" : cout<<"ODD NUMBER";
}