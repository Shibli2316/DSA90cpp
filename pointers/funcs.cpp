    // pointer agar koi function mein jayega to as reference jayega so any update function will not work in it. Yani uska uncrement address mein kam nahi karega.
    // Still the value can be updated in the fucntion

#include <iostream>
using namespace std;

void print(int *p){
    cout << *p << endl;
}

void update(int *p){
    // p = p+1;
    // cout << "Inside: " << p << endl; 
    //this cant be done as a new pointer is being made to be passed as the parameter of the fucntion. So the actual pointer remains the same. But the value can be chamged as shown below.
    *p = *p + 1;
}

int getSum(int *arr, int n){
    cout <<"Size of arr is: " << sizeof(arr) << endl;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += i[arr]; 
        // sum += arr[i]; 
    }
    return sum;
}

int main(){
    int value = 5;
    int *p = &value;
    
    print(p);
    cout << "Before: " << p << endl;
    update(p); // address cant be updated
    print(p);  //value can be changed using a fucntion
    cout << "After: " << p << endl;

    int arr[5] = {1,2,3,4,5};
    cout  << "Sum is : " << getSum(arr, 5) << endl;
}