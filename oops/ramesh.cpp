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
      
}  