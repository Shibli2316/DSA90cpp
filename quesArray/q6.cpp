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

}