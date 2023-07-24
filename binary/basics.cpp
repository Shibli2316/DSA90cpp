#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
        
    }
    printArray(arr, size);
}

int binarySearch(int arr[], int size, int key){
    
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return -1;
}

int main(){
    int arr[6] = {0,1,2,3,4,5};
    int ans = binarySearch(arr, 6, 5);
    cout << ans;
}
