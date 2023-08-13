// hybrid inheritance : using more than one type of inheritance

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