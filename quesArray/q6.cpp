// Intersection of 2

#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(int arr1[], int arr2[], int size){
    vector<int> ans;
    for (int i = 0; i < size; i++)
    {
        int element = arr1[i];

        for (int j = 0; j <= size; j++)
        {
            if(element < arr2[j]){
                break;
            }
            if(element == arr2[j]){
                ans.push_back(element);
                arr2[j] = -112233;
                break;
            }
        }
    }
    return ans;
}

int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[2] = {2,5};
    int size;
    cin >> size;
    // int ans = intersection(arr1, arr2, size);
}