#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    for (int i = 2; i <= n/2; i++){
        if(n%i==0){
            cout<<"COMPOSITE NUMBER";
            break;
        } else{
            cout<<"PRIME NUMBER";
            break;
        }
    }
}