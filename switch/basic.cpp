#include <iostream>
using namespace std;

int main(){
    int num = 2;
    char ch = 'a';

    cout << endl;

    switch (ch)
    // switch (num)
    {
    case 1: cout << "First" << endl;
        break;
    
    case 2: cout << "Second" << endl;
        break;

    case 'a': cout << "Charachter" << endl;
        break;
    
    default: cout << "It is a default case" << endl;
    }
}