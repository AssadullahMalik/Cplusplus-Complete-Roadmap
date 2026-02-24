#include <iostream>
using namespace std;

class Person {
private:
    int age;

protected:
    string religion;

public:
    string name;

    void setAge(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }

    void setReligion(string r) {
        religion = r;
    }

    void display() {
        cout << name << endl;
        cout << age << endl;
        cout << religion << endl;
    }
};

class Student : public Person {
public:
    void showProtected() {
        cout << religion << endl;
    }
};

int main() {
    Person p;
    p.name = "Asadullah";
    p.setAge(20);
    p.setReligion("Islam");
    p.display();

    Student s;
    s.name = "Ali";
    s.setAge(18);
    s.setReligion("Islam");
    s.showProtected();

    return 0;
}
