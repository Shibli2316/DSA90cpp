// Wrapping data members and functions

// Fully encapsulated class - everything is marked private

// it helps in data hiding improving security
// if we want we can make class read only
// helps in unit testing

#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
        int height;

    public:
    int getage(){
        return this->age;
    }
};

int main(){
    Student first;

    cout <<"Working fine" << endl;

    return 0;
}