#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    char count = 'A';
    int i =1;
    while(i<=n){
        int j =1;
        while(j<=n){
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}