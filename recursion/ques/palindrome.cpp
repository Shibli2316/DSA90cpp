#include <iostream>
using namespace std;

bool check(string str, int start, int end){

    if(start>end){
        return true; 
    }

    if(str[start] != str[end]){
        return false;
    }else{
        return check(str, start+1, end-1);
    }

}

int main(){
    string name = "abcb";
    // cout << endl;
    bool isPalindrome = check(name, 0, name.length()-1);

    if(isPalindrome){
        cout << "It is a palindrome" << endl;
    } else{
        cout << "not a palindrome" << endl;
    }

}