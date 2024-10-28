#include<iostream>
using namespace std;
int main(){
    // using extra variable and keeping i for iteration purpose
    int n;
    cout<<"Enter the number of your choice : ";
    cin>>n;
    int a = 4;
    for (int i = 1 ; i<=n ; i++){
        cout<<a<<" ";
        a = a+3;
    }
}