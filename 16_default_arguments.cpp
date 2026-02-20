#include <iostream>
using namespace std;

int multiply(int a, int b = 2)
{
    return a * b;
}

int main()
{
    cout << "Multiply 5 * default 2 = " << multiply(5) << endl;
    cout << "Multiply 5 * 4 = " << multiply(5, 4) << endl;
    return 0;
}
