#include <iostream>
using namespace std;

// This is a bad practice as the memory will be cleared once the function is executed. Hence the lifespan of the variable does not exceed the function so technically we are returning a dead variable. So it may not work and more importantly it is a dangerous practice. As you may not be able to access the memory

int& func(int n){
    int num = 5;
    int& ans = num;
    return ans;
}

// Same problem is with pointers

int* fun(int n){
    int*ptr = &n;
    return ptr;
}

int main(){
    int n = 5;
    cout << func(n) << endl;
}
 