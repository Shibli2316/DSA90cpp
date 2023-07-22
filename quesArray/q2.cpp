// Duplicate in array


#include <iostream>
using namespace std;

bool search(int arr[], int size, int target){
    bool isUnique = false;
    int foundTimes = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==target){
            foundTimes++;
        }
    }
    // cout << foundTimes << endl;
    if(foundTimes>1){
        isUnique = false;
    }else{
        isUnique = true;
    }
    return isUnique;
}

int main(){
    int size;
    cout << "Enter the number of inputs you want in array: "<< endl;
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    

    for (int i = 0; i < size; i++)
    {
        if(!search(arr, size, arr[i])){
            cout << arr[i] << " has repetitions" << endl;
        }
        
    }
    
}