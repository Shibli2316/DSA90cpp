// Pair sum leet code

#include <iostream>
using namespace std;

int pairSum(int arr[], int size, int ans){
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        temp = temp + arr[i];
        if(temp<ans){
            continue;
        }
        else if(temp = ans){
            break;
        }
        else{
            break;
        }
    }
    return temp;
    

}

int main(){
    int ansToBe=23;
    int arr[10] = {1,2,4,5,82,13,54,10,9,0};
    cout << pairSum(arr, 10, ansToBe);
}