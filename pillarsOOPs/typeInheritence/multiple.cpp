// Multiple inheritance : A class inheriting from many class

#include <iostream>
using namespace std;

class Animal{
    public:
        int age;
        int weight;

    public:
        void bark(){
            cout << "Barking" << endl;
        }
};

class Human{
    public:
        string color;

    public:
        void speak(){
            cout <<"Speaking" << endl;
        }   
};

// Multiple inheritance
class Hybrid: public Animal, public Human{

};

int main(){
    Hybrid obj1;
    obj1.bark();
    obj1.speak();
}