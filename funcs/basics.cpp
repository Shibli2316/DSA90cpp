// find the power of a raised to power of b
// This program is done using functions in power.cpp

#include <iostream>
using namespace std;

int main(){
    int a, b;

    cin >> a>> b;

    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans*a;
    }

    cout << "ans is " << ans ;
    
}