#include <iostream>
using namespace std;

int adding(int x, int y){
    while(y!=0){
        int carry = x & y;
        x = x^y;
        y = carry << 1;
    }
    return x;
}

int main(){
    int num1, num2;
    cout << "Enter a number: " << endl;
    cin >> num1;
    cout << "Enter the number to be added: " << endl;
    cin >> num2;
    cout << "The sum of " << num1 << " and " << num2 << " is " << adding(num1, num2);
}