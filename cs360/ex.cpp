#include <iostream>
using namespace std;

int main(){
    int p = 23;
    int *add = &p;
    cout << &add << endl;
    cout << add << endl;
}