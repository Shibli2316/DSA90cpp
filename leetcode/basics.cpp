#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "enter the numbers: "<< endl;
    cin >> a;
    int sum = 0;
    int product = 1;
    while (a>0)
    {
        int z = a%10;
        sum += z;
        product *= z;
        a/=10;
    }
    int ans = product - sum ;
    cout << ans;
    
}