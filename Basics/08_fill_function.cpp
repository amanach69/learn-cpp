#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    string names[SIZE];
    fill(names, names + SIZE, "Ayush");
    for (string name : names)
    {
        cout << name << '\n';
    }
    return 0;
}