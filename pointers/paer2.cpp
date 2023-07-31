#include <iostream>
using namespace std;

int main(){
    int arr[10] = {23, 122, 41, 67};
    cout <<"Address of first memory block is: " << arr << endl;
    cout << arr[0] << endl;
    cout <<"Address of first memory block is: " << &arr[0] << endl;

    cout << "4th: " << *arr << endl;
    cout << "5th: " << *arr + 1 << endl;
    cout << "6th: " << *(arr + 1) << endl;
    cout << "7th: " << (*arr) + 1 << endl;
    cout << "8th: " << arr[2] << endl;
    cout << "9th: " << *(arr+2) << endl;

    int i = 3;
    cout << i[arr] << endl;

    int temp[10]={1,2};
    cout << "Size of * temp: " << sizeof(*temp) << endl;
    cout << "Size of & temp: "<< sizeof(&temp) << endl;

    cout << "Size of array temp: "<< sizeof(temp) << endl;

    int *ptr = &temp[0];
    cout << "Size of ptr: " << sizeof(ptr) << endl;
    cout << "Size of *ptr: " << sizeof(*ptr) << endl;
    cout << "Size of &ptr: " << sizeof(&ptr) << endl;

    int a[20] = {1,2,93,4};
    cout << &a[0] << endl;
    cout <<&a << endl;
    cout << a << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;

    cout << "chechking: " << *(p+1) << endl;
    cout << "chechking: " << *p+1 << endl;
    cout << "chechking: " << p+1 << endl;
}