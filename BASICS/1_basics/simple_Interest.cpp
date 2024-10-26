#include<iostream>
using namespace std;
int main(){
    float p = 10000;
    float n = 3;
    float r = 12.5;

    float simple = (p*n*r) / 100;
    cout<<"The Simple Interest is : ";
    cout<<simple<<endl;

    cout<<"The total amount to pay is : ";
    cout<<p+simple;
}