
// We have to allocate a size of the array because it is to be defined during compile time and not in run time. It is a bad practice. Size should always be defined. Stack memory is defined by the compiled program. It will prevent from crashing the program.
// Memory for array is assigned from stack

// Use heap to make dynamic array and use new keyword for that

#include <iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum = 0;
    for (int  i = 0; i < n; i++)
    {
        sum +=arr[i];
    }
    return sum;
    
}

int main(){
    char ch = 'q';
    cout << sizeof(ch) << endl;

    char* c = &ch;
    cout << sizeof(c) << endl;

    int n;
    cin >> n;
    int* arr = new int[n];

    // taking input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int ans = getSum(arr, n);

    cout << "Ans is: " << ans << endl;
    delete []arr;
}