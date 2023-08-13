//Multilevel inheritance: chain of inheritance

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

class GermanShepherd: public Dog{

};

int main(){
    GermanShepherd g;
    g.speek();
}