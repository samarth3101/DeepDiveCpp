#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of your choice ; ";
    cin >> n;
    int f = 1;
    // average case
    // for (int i=1; i<n;i++){
    //     if(n%i==0) f = i;
    // }
    // cout<<f<<endl;

    // good case
    // for (int i = 1; i <= n / 2; i++)
    // {
    //     if (n % i == 0)
    //         f = i;
    // }
    // cout << f << endl;

    for (int i = n/2; i >= 1; i--)
    {
        if (n % i == 0){
            f = i;
            break;
        }
    }
    cout << f << endl;
}