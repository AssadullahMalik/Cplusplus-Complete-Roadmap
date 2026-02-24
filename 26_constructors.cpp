#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) {   // constructor
        name = n;
        age = a;
    }

    void display() {
        cout << name << " - " << age << endl;
    }
};

int main() {
    Student s1("Asad", 20);
    s1.display();
    return 0;
}
