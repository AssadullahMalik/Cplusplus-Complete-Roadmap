#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    char name[50];
    int age;
};

int main()
{
    Student s;

    cout << "Enter name: ";
    cin.getline(s.name, 50);

    cout << "Enter age: ";
    cin >> s.age;

    ofstream outFile("student.dat", ios::binary);
    outFile.write((char*)&s, sizeof(s));
    outFile.close();

    Student s2;
    ifstream inFile("student.dat", ios::binary);
    inFile.read((char*)&s2, sizeof(s2));
    inFile.close();

    cout << "\nData Read from File:" << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Age: " << s2.age << endl;

    return 0;
}