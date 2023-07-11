#include <iostream>
using namespace std;

int main(){
    int a = 2;
    int b = 3;

    if(a>b){
        cout << "ans is a" << endl;
    }
    else{
        cout << "ans is b" << endl;
    }

    int n;
    // cin >> n;
    n = cin.get();
    cout << "Value of n is " << n << endl;

    int z = 2;
    int y = z+1;
    if((z=3)==y){
        cout << a;
    }
    else{
        cout<<a+1;
    }
}

// When taking multiple variable as input it will work when we hit enter, space or even tab
// cin does not read tab, enter or spaces
// To over come this we use cin.get()