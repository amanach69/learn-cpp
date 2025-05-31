#include <iostream>
using namespace std;

void call_by_reference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
// OR
void call_by_value(int a, int b) //doesn't work for this problem
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;
    call_by_reference(a, b);
    cout << "Call by value\n";
    cout << "A: " << a << "\nB: " << b << "\n";
    int c = 10, d = 20;
    call_by_value(c, d);
    cout << "\nCall by reference\n";
    cout << "C: " << c << "\nD: " << d << "\n";
    return 0;
}