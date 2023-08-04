#include <iostream>
using namespace std;

void reachHome(int src, int dest){
    cout << "Source: " << src << " Destination: " << dest << endl;

    // base case
    if(src == dest){
        cout << "Pahuch gaya " << endl;
        return;
    }

    // processing - one step at a time
    src++;

    // recursion call
    reachHome(src, dest);
}

int main(){
    int dest = 10; 
    int src = 1;

    reachHome(src, dest);
}