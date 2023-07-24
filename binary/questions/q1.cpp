// First and last element of sorted array

#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int s = 0;
    int e = size -1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s <= e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]){
            s = mid+1;
        }
        else if(key<arr[mid]){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key){
    int s = 0;
    int e = size -1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s <= e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]){
            s = mid+1;
        }
        else if(key<arr[mid]){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int arr[5] = {0,1,2,3,3};
    int ans = firstOcc(arr, 5, 3);
    cout  << ans << endl;
    cout << lastOcc(arr, 5, 3);
    
}