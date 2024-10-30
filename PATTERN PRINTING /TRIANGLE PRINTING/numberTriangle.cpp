#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of cols : ";
    cin>>n;
    for(int i=1; i<=n;i++){ //rows = n
        for(int j=1; j<=i; j++){ //cols = n
            cout<<j<<" ";
        }
        cout<<endl;
    }
}