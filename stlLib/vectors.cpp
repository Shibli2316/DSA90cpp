#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    vector<int> a(5,1);
    vector<int> last(a);
    cout << "print a: "<<endl;
    for(int i:a){
        cout << i << " ";
    }
    cout << endl;
    cout << "print last: "<<endl;
    for(int i:a=last){
        cout << i << " ";
    }
    cout << endl;
    cout << "size: " << v.capacity() << endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout <<"Size: "<< v.capacity() << endl;

    cout << "Size: "<< v.size() << endl;

    cout << "Element at: " << v.at(2) << endl;

    cout << "front: " << v.front() << endl;
    cout << "back: " << v.back() << endl;

    cout << " before pop" << endl;
    for (int i:v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();

      cout << " after pop" << endl;
    for (int i:v)
    {
        cout << i << " ";
    }
    cout <<endl;
    
    cout << "before clear: "<< v.size() << endl;
    v.clear();
    cout << "after clear: " << v.size() << endl;
}