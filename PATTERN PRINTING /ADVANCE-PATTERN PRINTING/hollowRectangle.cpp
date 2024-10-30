#include<iostream>
using namespace std;

int main(){
    // rows --> m
    // cols --> n
    int m;
    cout << "Enter no. of rows : ";
    cin >> m;
    int n;
    cout << "Enter no. of cols : ";
    cin >> n;

    for(int i = 1; i <= m; i++){ // rows
        for(int j = 1; j <= n; j++){ // cols
            // Print '*' on the borders (first or last row, first or last column)
            if(i == 1 || i == m || j == 1 || j == n){
                cout << " * ";
            }
            else{
                cout << "   "; // spaces for the hollow part
            }
        }
        cout << endl;
    }

    return 0;
}