#include <iostream>
using namespace std;

int fibo(int num){
    if(num == 1 || num == 2){
        return 1;
    }
    return fibo(num-1) + fibo(num-2);
}

int main(){
    cout <<"What is the fibo number: "<< endl;
    int num;
    cin >> num;
    for(int i = 1; i <= num; i++){
        cout << fibo(i) << endl;
    }
}