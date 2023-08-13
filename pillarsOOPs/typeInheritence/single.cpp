// Single inheritance : A class gave some property to class B

#include <iostream>
using namespace std;

class Animal{
    public:
        int age;
        int weight;

    public:
        void speek(){
            cout << "Speaking" << endl;
        }
};

class Dog: public Animal{

};

int main(){
    Dog d;
    d.speek();
    cout << d.age << endl;
}