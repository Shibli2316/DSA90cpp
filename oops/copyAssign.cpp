#include <iostream>
#include <cstring>

using namespace std;

class Hero{
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

    Hero hero2(hero1);

    hero1.name[0] = 'G';
    hero1.print();

    hero2.print();
    hero1=hero2;

    hero1.print();
    hero2.print();
    
    delete[] hero1.name;

}