// Palindrome HW
// Two pointer approach


#include <iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        if(toLowerCase(a[s]) != toLowerCase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        swap(name[s++], name[e--]);
    }
    cout << name;
}

int getLength(char name[]){
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;   
}

int main(){
    char name[20];
    cout << "Enter your name: ";
    cin >> name;

    cout <<"Your name is: ";
    cout << name << endl;

    cout << "Length of name is: " <<getLength(name) << endl;

    int length = getLength(name);
    reverse(name, length);
    cout << "Your name after reversal is: ";
    cout << name << endl;

    cout <<"palindrome or not: "<< checkPalindrome(name, length) << endl;

    cout << "Character is: " <<toLowerCase('b') << endl;
    cout << "Character is: " <<toLowerCase('C') << endl;
}