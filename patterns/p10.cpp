#include <iostream>
using namespace std;

int main(){
    int n;
    cin>> n;

    int i = 1;
    while(i<=n){
        int k = 1;
        char j = 'A';
        while(k<=n){
            cout<<j<< " ";
            j++;
            k++;
        }
        cout << endl;
        i++;
    }
}