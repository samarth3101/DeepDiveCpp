#include<iostream>
using namespace std;
int main(){
    float area,peri,l,b;
    cout<<"Enter lenght of rectangle : ";
    cin>>l;
    cout<<"Enter breadth of rectangle : ";
    cin>>b;
    area = l*b;
    peri = 2*(l+b);
    if(area>peri){
        cout<<"Area of rectangle is Greater.";
    }
    else if(area==peri){
        cout<<"Both area and perimeter is same.";
    }
    else{
        cout<<"Perimemter is Greater.";
    }
}