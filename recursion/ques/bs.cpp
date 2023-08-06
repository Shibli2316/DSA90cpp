#include <iostream>
using namespace std;

void print(int arr[], int s, int e){
    for (int i = s; i <e; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
    
}

bool binarySearch(int arr[], int start, int end, int target){

    print(arr, start, end);
    // base case
    if(start>end){
        return false;
    }
    int mid = start + (end - start)/2;
    cout << "Value of mid element is: " << arr[mid]  << endl;

    if(arr[mid] == target){
        return true;
    }

    if(arr[mid] < target){
        return binarySearch(arr, mid+1, end, target);
    }
    else{
        return binarySearch(arr, start, mid-1, target);
    }

}

int main(){
    int arr[6] = {2,4,6,8,9,10};
    int size = 6;
    int target = 4;
    bool ans = binarySearch(arr, 0, 6, target);

    if(ans){
        cout << "Element present" << endl;
    }
    else{
        cout << "Element absent" << endl;
    }
}