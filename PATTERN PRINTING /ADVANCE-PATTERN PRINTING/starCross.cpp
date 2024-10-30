#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the cross (n x n): ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            // Print '*' if on either diagonal
            if(i == j || i + j == n + 1){
                cout << " * ";
            }
            else{
                cout << "   "; // spaces for non-diagonal parts
            }
        }
        cout << endl;
    }

    return 0;
}