#include <iostream>
using namespace std;

int fibo(int term){
    int ans = 0;
    if(term == 1){
        return ans;
    }
    else if(term==2 || term==3){
        ans = 1;
        return ans;
    }
    else{
        int first = 1;
        int second = 1;
        int sum = 1;
        for (int i = 2; i < term; i++)
        {
            sum = first+second;
            first = second;
            second = sum;
        }
        ans = sum;
        return sum;
    }

}

int main(){
    int n;
    cin >> n;
    cout << fibo(n);
}