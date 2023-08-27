#include <iostream>
using namespace std;

int main(){
    int userInput = 0;
    while(userInput > 8 || userInput < 1){
        cout << "Input a number between 1-8:" << endl;
        cin >> userInput;
    }
    cout << "Height : " << userInput << endl;
    for (int i = 1; i <= userInput; i++)
    {
        for (int j = userInput-i; j > 0; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "#";
        }
        for (int l = 0; l < 2; l++)
        {
            cout << " ";
        }
        for (int m = 1; m <= i; m++)
        {
            cout << "#";
        }
        cout << endl;
    }
    
}
