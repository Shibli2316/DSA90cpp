// TODO

// x x x x
//   x x x
//     x x
//       x

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;

    while(i<=n){
        int spaces = i-1;
        while(spaces <= i){
            cout << " ";
            spaces++;
        }
        int j = n-i+1;
        while(j>0){
            cout << 'x';
            j--;
        }
        cout << endl;
        i++;
    }
}