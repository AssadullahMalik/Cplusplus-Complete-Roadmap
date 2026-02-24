#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;   // dynamic allocation
    *ptr = 50;

    cout << "Value: " << *ptr << endl;

    delete ptr; // free memory
    return 0;
}
