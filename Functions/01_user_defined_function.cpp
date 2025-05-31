#include <iostream>
using namespace std;

int sum(int, int);

int main()
{
    int x, y;
    cout << "Enter any two numbers:\n";
    cin >> x >> y;
    cout << "The sum of " << x << " and " << y << " is: " << sum(x, y);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}