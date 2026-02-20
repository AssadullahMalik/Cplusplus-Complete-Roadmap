#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;  // Pure virtual function
};

class Circle : public Shape
{
public:
    void area()
    {
        cout << "Area of Circle" << endl;
    }
};

int main()
{
    Circle c;
    c.area();

    return 0;
}