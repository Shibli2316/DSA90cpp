#include <iostream>
#include <math.h>
using namespace std;

void rootQuad(int a, int b, int c){
    if(a==0){
        cout <<"Equation is not quadratic" << endl;
    }else{
        int d = (b*b) - (4*a*c);
        int rootD = sqrt(abs(d));
        if(d>0){
            cout << "The roots are real and distict" << endl;
            cout << (double)(-b + rootD)/(2*a) << endl;
            cout << (double)(-b - rootD)/(2*a);
        }
        else if(d == 0){
            cout << "The roots are real and equal" << endl;
            cout << -(double)b/(2*a);
        }
        else{
            cout << "The roots are distinct but imaginary" << endl;
            cout <<-(double)b/(2*a) << "+i" << rootD/(2*a) << endl;
            cout <<-(double)b/(2*a) << "-i" << rootD/(2*a) << endl;
        }
    }

}

int main(){
    int a, b, c;
    cout << "Enter the polynomial value: " << endl;
    
    cout << "Term for x(sq) is -> " << endl;
    cin >> a;
    
    cout << "Term for x is -> " << endl;
    cin >> b;
    
    cout << "Constant term is -> " << endl;
    cin >> c;

    rootQuad(a, b, c);

}