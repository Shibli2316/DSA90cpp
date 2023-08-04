#include <iostream>
using namespace std;

// Tail recursion

// void print(int n){
//     // base case
//     if(n == 0){
//         return ;
//     }

//     cout << n << endl;
//     print(n-1);
// }

// Head recurssion

void print(int n){
    // base case
    if(n == 0){
        return ;
    }

    print(n-1);
    cout << n << endl;
}

int main(){
    int n;
    cin >> n;

    print(n);
}