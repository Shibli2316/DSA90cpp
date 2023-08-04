#include <iostream>
using namespace std;

int fibo(int n){

    // base case
    if(n==1 || n == 2){
        return 1;
    }

    // int choti = fibo(n-2);
    // int choti2 = fibo(n-1);
    // int badi = choti2 + choti;
    // return badi;

    return fibo(n-1) + fibo(n-2);
}

int main(){
    int n;
    cin >> n;

    int ans = fibo(n);

    cout << ans << endl;
}