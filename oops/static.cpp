#include <iostream>
#include <cstring>

using namespace std;

class Hero{
    private:
    int health;

    public:
    char* name;
    char level;
    static int timeToComplete;

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

    static int random(){
        return timeToComplete;
    }
};

int Hero::timeToComplete = 5;

int main(){
    cout <<Hero::timeToComplete << endl;

    cout <<"Calling it from a function: " << endl;

    cout <<Hero::random() << endl;

    Hero a;
    cout <<a.timeToComplete << endl; //not recomended to do so

    Hero b;
    b.timeToComplete = 10;
    cout <<a.timeToComplete << endl;
    cout <<b.timeToComplete << endl;

}

// Static belongs to the class and does not need an object to be called

// initialise it outside the classs
// to initialise use this syntax 
// datatype className :: fieldName = value;
// the two dots are called scope resolution operator

// static function
// Does not need the creation of an obbject
// this keyword is not there as 'this' keyword is a pointer to current object and since there is no object there is no this keyword
// Static function can only access static members