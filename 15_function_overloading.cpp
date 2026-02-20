#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int main()
{
    cout << "Sum of integers: " << add(5, 3) << endl;
    cout << "Sum of doubles: " << add(5.5, 3.3) << endl;
    return 0;
}
