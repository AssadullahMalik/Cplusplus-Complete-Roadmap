#include <iostream>
using namespace std;

enum Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

int main()
{
    Day today = Wednesday;

    cout << "Today is day number: " << today << endl;

    return 0;
}