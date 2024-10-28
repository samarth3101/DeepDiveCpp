#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     bool flag = true;  //number is prime

//     for (int i = 2; i <= n/2; i++){
//         if(n%i==0){
//             flag = false; //number is composite
//             break;
//         }
//     }
//     if (flag==1){
//         cout<<"NOT A PRIME NOT A COMPOSITE";
//     }
//     else if (flag==true){
//         cout<<"NUMBER IS PRIME";
//     } else{
//         cout<<"NUMBER IS COMPOSITE";
//     }
// }

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    bool flag = true;  //number is prime

    for (int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            flag = false; //number is composite
            break;
        }
    }
    if (flag==1){
        cout<<"NOT A PRIME NOT A COMPOSITE";
    }
    else if (flag==true){
        cout<<"NUMBER IS PRIME";
    } else{
        cout<<"NUMBER IS COMPOSITE";
    }
}