#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks : ";
    cin>>marks;
    if ((marks>80) && (marks<=100)){
        cout<<"Very good";
    }
    else if ((marks>60) && (marks<=80)){
        cout<<"Good";
    }
    else if ((marks>40) && (marks<=60)){
        cout<<"Average";
    }
    else{
        cout<<"Fail..!";
    }
}