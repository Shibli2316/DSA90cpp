#include <iostream>
using namespace std;

void entryArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout <<"Enter the number for " << i+1 << " place: " << endl;
        cin >> arr[i];
    }
}

void printArray(int arr[], int size){
    cout << "[";
    for(int i = 0; i<size; i++){
        if(i==size-1){
            cout << arr[i];
        }else{
            cout << arr[i] << ", ";
        }
    }
    cout << "]";
}

int main(){
    int arr[100];
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    entryArray(arr, size);
    printArray(arr, size);
}