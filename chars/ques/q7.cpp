#include <iostream>
using namespace std;

string remove(string s, string port){
    while(s.length()!=0 && s.find(port) < s.length()){
        s.erase(s.find(port), port.length());
    }
    return s;
}

int main(){
    string s;
    cin >> s;
    cout << remove(s, "bab");
}