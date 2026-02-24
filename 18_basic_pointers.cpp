#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Pointer ptr stores: " << ptr << endl;
    cout << "Value using pointer: " << *ptr << endl;

    *ptr = 20;  // modifying value using pointer
    cout << "Modified value of num: " << num << endl;

    return 0;
}
