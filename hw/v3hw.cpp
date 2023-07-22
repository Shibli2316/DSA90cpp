#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter the char" << endl;
    cin >> ch;
    if(ch>96 && ch < 123){
        cout << "Lowercase";
    }
    else if(ch > 64 && ch < 91){
        cout <<"Uppercase";
    }
    else if (ch > 47 and ch <58){
        cout << "Number";
    }
    else{
        cout << "Not recognised";
    }
}