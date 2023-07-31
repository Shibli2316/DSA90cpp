#include <iostream>
using namespace std;

int main(){
    int num = 5;
    cout << num << endl;

    //  address of operator
    cout << "address of num is: " << &num << endl;

    // pointer stores address
    int *ptr = &num;
    cout << "Value of num is: "<< *ptr << endl;
    cout << "Address of num is: "<< ptr << endl;
    cout << "Address of ptr is: "<< &ptr << endl;

    double d = 4.3;
    double *p2 = &d;
    cout << "Value of d is: "<< *p2 << endl;
    cout << "Address of d is: "<< p2 << endl;

    cout << "Size of integer is: " << sizeof(num) << endl;
    cout << "Size of pointer is: " << sizeof(ptr) << endl;

    // this will give segmentation fault
    // int *p = 0;
    // cout <<*p << endl; 

    int i = 5;
    int *p1 = 0;
    p1 = &i;
    cout << p1 << endl;
    cout << *p1 << endl;

    int number = 5;
    int a = number;
    a++;
    cout << number <<" "<< a << endl;

    int *pp = &num;
    cout << "Befor: " << num << endl;
    (*pp)++;
    cout << "After: " << num << endl;

    // Copy a pointer
    int *q = pp;
    cout << pp << " - " << q << endl;
    cout << *pp << " - " << *q << endl;



}