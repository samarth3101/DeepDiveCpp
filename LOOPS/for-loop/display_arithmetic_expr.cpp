#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of your choice : ";
    cin>>n;
    // 1 3 5 7 9
    for (int i = 1 ; i <= 2*n-1 ; i+=2){
        cout<<i<<" ";
    }    
}