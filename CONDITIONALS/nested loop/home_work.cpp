// ages of ram , shyam , ajay. determine the youngest one.

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Ram's age : ";
    cin>>a;
    cout<<"Enter Shyam's age : ";
    cin>>b;
    cout<<"Enter ajay's age : ";
    cin>>c;
    if (a<b){
        if(a<c){
            cout<<"Ram is youngest.";
        }
    }
    else{
        if (b<c){
            cout<<"Shyam is youngest. ";
        }
        else{
            cout<<"Ajay is youngest.";
        }
    }
}