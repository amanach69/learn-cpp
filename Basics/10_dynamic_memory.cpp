#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "How many values you want to enter?:";
    cin >> a;
    int *ptr = NULL;
    ptr = new int[a];
    for (int i = 0; i < a; i++)
    {
        cout << "Enter value " << i + 1 << " : ";
        cin >> ptr[i];
    }

    for (int i = 0; i < a; i++)
    {
        cout << ptr[i] << ' ';
    }
    cout << '\n';

    delete[] ptr;
    return 0;
}