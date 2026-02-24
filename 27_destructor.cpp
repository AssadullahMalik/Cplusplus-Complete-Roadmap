#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Constructor called" << endl;
    }

    ~Test() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Test obj;
    return 0;
}
