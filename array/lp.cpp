#include <iostream>
using namespace std;

bool search(int arr[], int size, int target){
    bool isPresent = false;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == target){
            isPresent = true;
        }
    }
    return isPresent;
    
}

int main(){
    int size;
    cin >> size;
    int target;
    cin >> target;
    int arr[10] = {5, 7, -1, 10, 0, 3, 22, 1, 5, 11};
    if(search(arr, size, target)){
        cout << "Number is present";
    }
    else{
        cout << "Number not found";
    }
}