#include <iostream>
using namespace std;

void update(int n){
    n++;
}

void update2(int& n){
    n++;
}

int main(){
    int i = 5;

    // create a reference variable

    int& j = i;

    cout << i<< endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;

    // pass by value creates a copy

    int n = 5;
    cout << "Before: " << n << endl;
    update(n);
    cout << "After: " << n << endl;

 

    // pass by reference changes the value of the variable

    cout << "Before: " << n << endl;
    update2(n);
    cout << "After: " << n << endl;


}