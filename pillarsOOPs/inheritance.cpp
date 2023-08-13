// Properties of a class given to another class and used according to our use.

// The one giving properties is called parent class and the one inheriting is called child class

// Syntax: class childName : mode parentClass

// Private datamember of any class cannot be inherited

// protected: Similar to private, child class can access and is accessible inside own class. So we make getter and setter in the child class.

#include <iostream>
using namespace std;

class Human{
    public:
        int height;
        int weight;
        int age;

    public:
        int getAge(){
            return this->age;
        }

        void setWeight(int w){
            this->weight = w;
        }
};

class Male: protected Human{
    public:
        string color;
    
    void sleep(){
        cout << "Male sleeping" << endl;
    }

    int getHeight(){
        return height;
    }
};

int main(){
    Male obj1;
    // cant access due to the mode being protected

    // cout <<obj1.age << endl;
    // cout <<obj1.weight << endl;
    // cout <<obj1.height << endl;

    cout << obj1.getHeight() << endl;

    cout <<obj1.color << endl;
    // obj1.setWeight(84);
    // cout << obj1.weight << endl;
    obj1.sleep();
}