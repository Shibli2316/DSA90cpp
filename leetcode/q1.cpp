#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 0;
    int ans = 0;
    while(n>0){
        int mid = n%10;
        if((ans>(INT_MAX/10)) || (ans<(INT_MIN/10))){
            cout << 0;
        }
        ans = (ans*10) + mid;
        n/=10;
        i++;
    }

    cout << ans;
}