#include <iostream>
using namespace std;

int globalVar = 10; // global scope

void demo() {
    int localVar = 5; // local scope
    cout << "Inside function: " << localVar << endl;
}

int main() {
    demo();
    cout << "Global variable: " << globalVar << endl;
    // cout << localVar; // Error! localVar not visible here
    return 0;
}
