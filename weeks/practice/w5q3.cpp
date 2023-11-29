#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> a){
    cout << "[";
    for(int i = 0; i<a.size(); i++){
        if(i==a.size()-1){
            cout << a[i];
        }else{
            cout << a[i] << ", ";
        }
    }
    cout << "]";
}

int main(){
    vector<int> arr;
    char enter;
    char yes;
    cout << "Do you want to enter elements in an array, type y to continue, n to quit: " << endl;
    cin >> yes;
    if(yes =='y'){

    while(enter!='q'){
        cout << "Enter the number you want to add in the array: ";
        int num;
        cin >> num;
        arr.push_back(num);
        cout << "Press q to quit and c to continue: " << endl;
        cin>>enter;
    }
        cout << "The array you made is as follows: "<< endl;
        printArray(arr);
    }else{

    cout << "The array you made is as follows: "<< endl;
    printArray(arr);
    }
    cout << endl;
    cout <<"The size of the array is: ";
    cout <<arr.size();
}