// Pair sum leet code

#include <iostream>
using namespace std;

int pairSum(int arr[], int size, int ans){
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i]+arr[j]==ans){
                temp = temp + arr[i] + arr[j];
                return temp;
                
            }
        } 
    }
    return -1;
    

}

int main(){
    int ansToBe=23;
    int arr[10] = {11,1,4,5,82,13,54,10,9,0};
    cout << pairSum(arr, 10, ansToBe);
}