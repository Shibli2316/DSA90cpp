#include <iostream>
using namespace std;

class A{
    public:
        void fun(){
            cout << "i am A" << endl;
        }
};

class B{
    public:
        void fun(){
            cout << "i am B" << endl;
        }
};

class c: public A, public B{

};

int main(){
    c obj;

    //obj.fun();  this gives error as same function is in both the classes that it is inheriting from


    // Use scope resolution opeator
    obj.A::fun();
}