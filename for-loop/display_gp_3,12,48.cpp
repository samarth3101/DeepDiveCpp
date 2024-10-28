#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of your choice : ";
    cin>>n;
    int a = 3;
    for (int i = 1 ; i<=n ; i++){
        cout<<a<<" ";
        a = a*4;
    }
}