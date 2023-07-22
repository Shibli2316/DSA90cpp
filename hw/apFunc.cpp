#include <iostream>
using namespace std;

int ap(int firstTerm, int position, int cd){
    int ans = firstTerm+((position-1)*cd);
    return ans;
}

int main(){
    int a, b, c;
    cout << "Enter the first term, the nth term and the common difference in order:"<< endl;
    cin >> a>>b>>c;
    int ans = ap(a, b, c);
    cout << "The ans is " << ans << endl;
}