#include<iostream>
using namespace std;
int main(){
    // rows --> m
    // cols --> n
    int m;
    cout<<"Enter no. of rows : ";
    cin>>m;
    int n;
    cout<<"Enter no. of cols : ";
    cin>>n;
    for(int i=1; i<=m;i++){ //rows
        for(int j=1; j<=n; j++){ //cols
            cout<<" * ";
        }
        cout<<endl;
    }
}