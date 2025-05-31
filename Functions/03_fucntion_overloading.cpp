/*
Function overloadig means have multiple function with same name but different attributes like different return types, different args or args d-types*/

#include <iostream>
using namespace std;

// having different data types and retun type
int sum(int x, int y)
{
    return x + y;
}

double sum(double x, double y)
{
    return x + y;
}

// having different no. of args
int sub(int x, int y)
{
    return x - y;
}

int sub(int x, int y, int z)
{
    return x - y - z;
}

int main()
{

    double a = 10.11, b = 20.11;
    int x = 2, y = 3;
    cout << "The sum is " << sum(a, b) << '\n';
    cout << "The sum is " << sum(x, y) << '\n';

    int m = 30, n = 20, p = 5;
    cout << endl
         << "The sub is " << sub(m, p) << '\n';
    cout << "The sub is " << sub(m, n, p) << '\n';

    return 0;
}