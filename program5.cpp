#include <iostream>
using namespace std;

class Print {
public:
    void show(int a) {
        cout << "Integer: " << a << endl;
    }
    void show(double a) {
        cout << "Double: " << a << endl;
    }
    void show(string a) {
        cout << "String: " << a << endl;
    }
};



