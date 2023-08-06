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
    // creating of onject
    Hero ramesh;
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout << "Level is: " << a.level << endl;
    cout <<"Health is: " << a.getHealth() <<endl;


    // Dynamic created hero
    Hero *b = new Hero;
    b->setHealth(70);
    b->setLevel('A');
    
    cout << "Level is: " << (*b).level << endl;
    cout << "Health is: " << (*b).getHealth() << endl;

    // alternate
    cout << "Level is: " << b->level << endl;
    cout << "Health is: " << b->getHealth() << endl;
    


    cout <<"Size of ramesh is: " << sizeof(ramesh) << endl;

    ramesh.setHealth(70);
    ramesh.level = 'A';

    cout << "Ramesh health is: " << ramesh.getHealth() << endl;

    // cout << "Health is: " << ramesh.health << endl;
    cout << "Level is: " << ramesh.level << endl;
    // cout << "Size: " << sizeof(h1) << endl;

     
}  