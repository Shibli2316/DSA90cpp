#include <iostream>
using namespace std;

void reverse(string& str, int i, int j){

    cout << "Call received for: " << str << endl;
    // base case;
    if(i>j){
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;

    reverse(str, i, j);
    // cout << str<< endl;
}

int main(){
    string name = "abcde";
    reverse(name, 0, name.length()-1);
    cout << name << endl; 
}