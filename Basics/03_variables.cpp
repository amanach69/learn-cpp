#include <iostream>
using namespace std;

// 4 types of variables in cpp

// Gloabal variables ( declaread at the top outside any function)
int x = 10;

void show()
{
    int x = 10; // local variable
    cout << x << '\n';
    x++;
}

void show_static()
{
    static int x = 10; // local variable
    cout << x << '\n';
    x++;
}

int main()
{

    // Loacl variables (declared inside a function)
    int y = 20;

    cout << "Value of X: " << x << '\n'
         << "value of Y: " << y << '\n';

    // simple show
    cout << "simple show outputs:\n";
    show(); // output: 1
    show(); // output: 1 (x reset after function call ends)
    show(); // output: 1 (x reset after function call ends)

    // static show
    cout << "static show outputs:\n";
    show_static(); // output: 1
    show_static(); // output: 2 (x remains its previous state; caching of values)
    show_static(); // output: 3 (x remains its previous state; caching of values)

    // constant vaiables (values cant be changed after declaration)
    const double pi = 3.1415;
    cout << pi;

    // // try to change value
    // pi = 3.15;
    // cout << pi;

    return 0;
}