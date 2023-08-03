
// We have to allocate a size of the array because it is to be defined during compile time and not in run time. It is a bad practice. Size should always be defined. Stack memory is defined by the compiled program. It will prevent from crashing the program.
// Memory for array is assigned from stack

// Use heap to make dynamic array and use new keyword for that

#include <iostream>
using namespace std;

int main(){
    char ch = 'q';
    cout << sizeof(ch) << endl;

    char* c = &ch;
    cout << sizeof(c) << endl;
}