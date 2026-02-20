#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("data.txt", ios::app);

    file << "Appending new line..." << endl;

    file.close();

    cout << "Data appended successfully.";

    return 0;
}