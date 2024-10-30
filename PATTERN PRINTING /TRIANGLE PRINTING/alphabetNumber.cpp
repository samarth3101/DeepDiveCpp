#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of cols : ";
    cin>>n;
    for(int i = 1 ; i <= n ; i++ ){ //rows = n
        for(int j = 1 ; j <=  i ; j++ ){ //cols = n
            if( i%2!=0 ){  //even row - numbers 
                cout<<j<<" ";
            } else {  // odd row - alphabets
                cout<<(char)(j+64)<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}