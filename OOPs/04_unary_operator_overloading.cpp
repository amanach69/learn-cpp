#include <iostream>
using namespace std;

class Sample
{

    int a;
    float b;

public:
    Sample(int x, float y)
    {
        a = x;
        b = y;
        cout << "Constructor called" << endl;
    }

    void operator++() // prefix
    {
        ++a;
        ++b;
    }

    // void operator++() // postfix
    // {
    //     a++;
    //     b++;
    // }

    void operator--() // prefix
    {
        --a;
        --b;
    }

    // void operator--() // postfix
    // {
    //     a--;
    //     b--;
    // }

    void display()
    {
        cout << "Value of a = " << a << endl
             << "Value of b = " << b << endl;
    }

    ~Sample() {}
};

int main()
{
    Sample s1(10, 2.35);
    s1.display();
    cout << "Values after increment" << endl;
    // prefix case
    ++s1; //s1.operator++();

    //postfix case
    // s1.operator++(); //s1++; will give error
    s1.display();

    cout << "Values after decrement" << endl;
    
    --s1; //for prefix
    // s1.operator--(); //for postfix
    s1.display();
    return 0;
}