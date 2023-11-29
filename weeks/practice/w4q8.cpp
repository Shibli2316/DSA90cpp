#include <iostream>
#include <math.h>
using namespace std;

bool isArm(int n){
    int compare = n;
    int temp;
    int sum = 0;
    while(n>0){
        temp = n%10;
        sum += pow(temp, 3);
        n/=10;
    }
    if(compare==sum){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int number;
    cout <<"Enter the number you want to check: ";
    cin >> number;
    if(isArm(number)){
        cout <<"Yes, It is an Armstrong number";
    }else{
        cout << "No, it is not an Armstrong number";
    }
}