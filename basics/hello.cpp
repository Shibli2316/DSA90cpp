#include <iostream>
using namespace std;

int main(){
    cout << "Hello" << endl; 

    int a = -123;
    cout << a << endl;

    char b = 'v';
    cout << b << endl;

    bool bl = true;
    cout << bl << endl;

    float f = 1.2;
    cout << f << endl;

    double d = 1.23;
    cout << d << endl;

    int size = sizeof(a);
    cout << "size of a is: " << size << endl;

    unsigned int a2  = 112;
    cout << a2 << endl;

    int a3 = 2/5;
    cout << a3 << endl;

    bool first = (a==b);
    cout << first << endl;

    cout << !a << endl;
}

// the number of bits required to store a variable is filled and remaining bits are filled with 0
// Char are converted into ascii value and then stored
// Typecasting is done both implicitly and explicitly.
// If we try to convert big value into small value the last bits that fill the space will be printed rest will be ignored
// To store negative numbers:
// We ignore the negative sign
// convert into binary
// take 2's complement and store it
// To display negative number take 2's complement
// Unsigned int are used to store only positive number