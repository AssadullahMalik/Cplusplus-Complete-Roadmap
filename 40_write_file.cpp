#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("data.txt");

    if (!file)
    {
        cout << "Error creating file!";
        return 1;
    }

    file << "Hello Asadullah" << endl;
    file << "Welcome to C++ File Handling" << endl;

    file.close();
    cout << "Data written successfully.";

    return 0;
}