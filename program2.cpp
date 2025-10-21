#include <iostream>
using namespace std;

class Person {
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called\n";
    }

    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Destructor
    ~Person() {
        cout << "Destructor called for " << name << endl;
    }
};

