// Number of set bits ???? coudnt do try again




#include <iostream>
using namespace std;

int main(){
    __UINT32_TYPE__ n;
    cout << "ENter a number: ";
    cin >> n;

    int count = 0;
    while (n!=0){
        if(n&1){
            count++;
        }
        n = n >> 1;
    }
    cout << count;
}