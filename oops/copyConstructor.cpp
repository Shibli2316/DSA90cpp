#include <iostream>
#include <cstring>

using namespace std;

class Hero{
    // properties
    // public:
    private:
    int health;

    public:
    char* name;
    char level;

    Hero(){
        cout << "constructor called" << endl;
        name = new char[100];
    }

    // Parameterised connstructor
    Hero(int health){
        // "this" acts like a pointer to the object that is accessing the class at the moment
        // cout << "This: " << this << endl;
        this -> health = health;
        name = new char[100];
    }

    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
        name = new char[100];
    }

    // Copy constructor
    // Hero(Hero& temp){
    //     cout <<"Apna constructor" << endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    //     name = new char[100];
    //     strcpy(name, temp.name);
    // }

    // Deep copy
    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
    }

    void print(){
        cout <<"health: " << this->health << endl;
        cout << "level: " << this->level << endl;
        cout <<"Name: " << this->name << endl;
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

    void setName(char name[]){
        strcpy(this->name, name);
    }
};

int main(){

    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[] = "Babbar";
    hero1.setName(name);

    hero1.print();

    // using default copy constructor

    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'G';
    hero1.print();

    hero2.print();
    delete[] hero1.name;

}


// Default copy constructor makes shallow copy
// If we use deep copy new address is returned and in shallo copy the same address is returned giving a problrm.