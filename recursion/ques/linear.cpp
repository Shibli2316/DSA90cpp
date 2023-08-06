#include <iostream>
using namespace std;

void print(int arr[], int size){
    cout << "Size of array is: " << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
    
}

bool isFound(int arr[], int size, int target){
    // base case
    print(arr, size);
    if(size == 0){
        return false;
    }

    if(arr[0] == target){ 
        return true;
    }
    else{
        bool remainingPart = isFound(arr+1, size-1, target);
        return remainingPart;
    }
    
}

int main(){
    int arr[5] = {2,4,6,8,9};
    int size = 5;
    int target = 2;
    bool ans = isFound(arr, size, target);

    if(ans){
        cout << "Element found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
}