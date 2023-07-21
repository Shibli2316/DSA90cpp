#include <iostream>
using namespace std;

int getMax(int num[], int n){
    int max = INT_MIN;

    for (size_t i = 0; i < n; i++)
    {
        if(num[i] > max){
            max = num[i];
        }
    }
    return max; 
}

int getMin(int num[], int n){
    int min = INT_MAX;

    for (size_t i = 0; i < n; i++)
    {
        if(num[i] < min){
            min = num[i];
        }
    }
    return min; 
}

int main(){
    int n;
    cin >> n;

    int num[100];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    cout << "Maximum is " <<getMax(num, n) << endl;
    cout << "Maximum is " <<getMin(num, n) << endl;
    return 0;
}