#include<iostream>
using namespace std;
int main(){
    float sp, cp;
    cout<<"Enter Cost Price : ";
    cin>>cp;
    cout<<"Enter Selling Price : ";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit is "<<sp-cp;
    }
    else if(sp==cp){
        cout<<"No Profit No Loss.";
    }
    else{
        cout<<"loss is "<<cp-sp;
    }
}