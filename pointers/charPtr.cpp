#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";


// different implementation of cout based on int and char
    cout << arr << endl;
    cout << ch << endl;

    char *c = &ch[0];
    cout << c << endl;
    cout << *c << endl;
    cout << &c << endl;


    // pointer agar koi function mein jayega to as reference jayega so any update function will not work in it. Yani uska uncrement address mein kam nahi karega.
    // Still the value can be updated in the fucntion
}