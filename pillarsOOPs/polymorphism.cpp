// existing in many forms


#include <iostream>
using namespace std;


class A{
    public:
        void sayHello(){
            cout <<"Hello Babbar" << endl;
        }

        void sayHello(string name){
            cout << "Hello "<< name<< endl;
        }
};
int main(){
    A obj;
    obj.sayHello();
}

// Compile time: Function overloading and operator overloading is done