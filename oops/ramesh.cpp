#include <iostream>
// #include "Hero.cpp"
using namespace std;

class Hero{
    // properties
    // public:
    private:
    char name[100];
    int health;

    public:
    char level;

    Hero(){
        cout << "constructor called" << endl;
    }

    // Parameterised connstructor
    Hero(int health){
        // "this" acts like a pointer to the object that is accessing the class at the moment
        // cout << "This: " << this << endl;
        this -> health = health;
    }

    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }

    void print(){
        cout << level << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }
};

int main(){
    // Static creation of object
    // cout <<"hi" << endl;
    Hero ramesh(10);
    cout << "Address of ramesh: " << &ramesh << endl;
    // cout << "Hello" << endl;

    // Dynamic
    Hero *h = new Hero();

    Hero temp(10, 'A');
    cout << temp.getLevel() << endl;
    cout << temp.getHealth() << endl;


      
}  

// constructor is called first ramesh.Hero()
// it doesent even have a input parameter. The object creation constructor
// And no return type


// Once you make your own constructor the default constructor is removed

// Parameterized constructor - > use this keyword
// This is a pointer that points to current object