#include <iostream>
using namespace std;

class Arithmetic
{

    int a;

public:
    Arithmetic() {
        a = 0;
        cout << "Default Constructor called" << endl;
    }

    Arithmetic(int x)
    {
        a = x;
    }

    Arithmetic operator+(Arithmetic obj)
    {
        return Arithmetic(a + obj.a);
    }
    Arithmetic operator-(Arithmetic obj)
    {
        return Arithmetic(a - obj.a);
    }
    Arithmetic operator*(Arithmetic obj)
    {
        return Arithmetic(a * obj.a);
    }
    Arithmetic operator/(Arithmetic obj)
    {
        return Arithmetic(int(float(a) / (float)obj.a));
    }
    Arithmetic operator%(Arithmetic obj)
    {
        return Arithmetic(a % obj.a);
    }

    void display(string x)
    {
        cout << "The value of " << x << " is " << a << endl;
    }

    ~Arithmetic() {}
};

int main()
{
    Arithmetic a1(11), a2(30), a3;
    a3 = a1 + a2;
    // a3 = a1.operator+(a2);
    a3.display("addition");

    a3 = a1 - a2;
    // a3 = a1.operator-(a2);
    a3.display("subtraction");
    
    a3 = a1 * a2;
    // a3 = a1.operator*(a2);
    a3.display("multiplication");
    
    a3 = a1 / a2;
    // a3 = a1.operator+(a2);
    a3.display("division");
    
    a3 = a1 % a2;
    // a3 = a1.operator+(a2);
    a3.display("modulus");
    return 0;
}
