#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> a;

    a.push("love");
    a.push("babbar");
    a.push("XYZ");

    cout <<"First element: "<< a.front() << endl;

    a.pop();

    cout << "Size after pop: "<< a.size()<< endl;
}