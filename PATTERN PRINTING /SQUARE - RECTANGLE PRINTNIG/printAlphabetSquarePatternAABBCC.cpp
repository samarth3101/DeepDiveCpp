#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. sides of square : ";
    cin>>n;
    for(int i=1; i<=n;i++){ //rows = n
        for(int j=1; j<=n; j++){ //cols = n
            cout<<(char)(j+64)<<" ";  //TypeCasting (ASCII)
        }
        cout<<endl;
    }
}