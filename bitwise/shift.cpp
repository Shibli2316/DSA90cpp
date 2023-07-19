#include <iostream>
using namespace std;

int main(){
    cout << (17>>1) << endl;
    cout << (17>>2) << endl;
    cout << (19<<1) << endl;
    cout << (19<<2) << endl;

    int i = 7;
    cout << (i++) << endl;
    cout << (++i) << endl;
    cout << (--i) << endl;
    cout << (i--) << endl;
}

// in LSO or RSO padding is always 0
// In -ve number it depends on compiler