#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int l) {
        length = l;
    }

    friend void printLength(Box b);
};

void printLength(Box b) {
    cout << "Length: " << b.length << endl;
}

int main() {
    Box b1(10);
    printLength(b1);
    return 0;
}
