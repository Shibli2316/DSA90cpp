// Double pointer


#include <iostream>
using namespace std;

void update(int **p){
   // p = p+1;  //No change occurs

    //*p = *p+1; //change hua hai

    **p = **p + 1; //change hoga
}

int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << endl << "Sab sahi" << endl;

    cout << "Printing p: " << p << endl;
    cout << "Address of p: " << &p << endl;

    cout << *p2 << endl;
    cout << "same value" << endl;
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;
    cout << endl;

    cout << "same value again" << endl;
    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    cout << "same value again" << endl;
    cout << &p << endl;
    cout << p2 << endl;

    cout << endl;

    cout << "Before: " << i << endl;
    cout << "Before: " << p << endl;
    cout << "Before: " << p2 << endl;
    cout << endl;
    update(p2);
    cout << "After: " << i << endl;
    cout << "After: " << p << endl;
    cout << "After: " << p2 << endl;
    cout << endl;
}