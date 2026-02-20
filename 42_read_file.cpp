#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("data.txt");

    if (!file)
    {
        cout << "File not found!";
        return 1;
    }

    string line;

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();

    return 0;
}