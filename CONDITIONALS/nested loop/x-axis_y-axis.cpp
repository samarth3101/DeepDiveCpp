#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter X Co-Ordinate : ";
    cin>>x;
    cout<<"Enter Y Co-Ordinate : ";
    cin>>y;
    if ((x>0) && (y>0)){
        cout<<"Points lie in 1st Quadrant.";
    }
    else if ((x<0) && (y>0)){
        cout<<"Points lie in 2nd Quadrant.";
    }
    else if ((x<0) && (y<0)){
        cout<<"Points lie in 3rd Quadrant.";
    }
    else{
        cout<<"Points lie in 4th Quadrant.";
    }
}