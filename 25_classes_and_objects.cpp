#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    void display() {
        cout << "Brand: " << brand << ", Speed: " << speed << endl;
    }
};

int main() {
    Car c1;
    c1.brand = "BMW";
    c1.speed = 220;

    c1.display();
    return 0;
}
