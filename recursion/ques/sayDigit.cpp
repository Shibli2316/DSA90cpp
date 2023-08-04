#include <iostream>
using namespace std;

void digit(int n, string arr[]){
    // base case
    if(n == 0){
        return;
    }

    // processing 
    int d = n%10;
    n = n/10;

    // RC
    digit(n, arr);

    cout << arr[d] << " " << endl;
}

int main(){
    string arr[10] = {"zero" ,"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cin >> n;

    digit(n, arr);
    
}