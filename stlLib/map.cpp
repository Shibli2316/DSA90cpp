#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, string> m;
    m[1] = "babbar";
    m[2] = "love";
    m.insert( {5, "bheem"} );

    cout << "Before erase: "<< endl;
    for(auto i:m){
        cout << i.second << endl;
    }
    cout << endl;

    cout << "Finding 13: " << m.count(13) << endl;

    m.erase(5);
    cout << "after erase: "<< endl;
    for(auto i:m){
        cout << i.first << endl;
    }
    cout << endl;

    auto it = m.find(5);
    for(auto i = it; i!=m.end(); i++){
        cout << (*i).first<< endl;
    }
}