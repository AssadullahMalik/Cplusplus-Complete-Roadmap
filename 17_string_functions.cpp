#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    cout << "Length of first string: " << str1.length() << endl;
    cout << "Concatenation: " << str1 + str2 << endl;
    cout << "Compare strings (0=equal): " << str1.compare(str2) << endl;

    return 0;
}
