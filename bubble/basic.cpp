#include <iostream>
using namespace std;

int main(){
    int arr[5] = {2,1,5,3,8};
    int n = 5;

    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n-i; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == true){
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    
}