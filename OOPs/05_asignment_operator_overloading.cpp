#include <iostream>
using namespace std;

class Assignment
{

    int a;

public:
    Assignment() {
        a = 0;
        cout << "Default Constructor called" << endl;
    }

    Assignment(int x)
    {
        a = x;
    }

    Assignment operator+=(Assignment obj)
    {
        return (a += obj.a);
    }
    Assignment operator-=(Assignment obj)
    {
        return (a -= obj.a);;
    }
    Assignment operator*=(Assignment obj)
    {
        return (a *= obj.a);
    }
    Assignment operator/=(Assignment obj)
    {
        return (a /= float(obj.a));
    }
    Assignment operator%=(Assignment obj)
    {
        return (a %= obj.a);
    }
    Assignment operator&=(Assignment obj)
    {
        return (a &= obj.a);
    }
    Assignment operator|=(Assignment obj)
    {
        return (a |= obj.a);
    }
    Assignment operator^=(Assignment obj)
    {
        return (a ^= obj.a);
    }
    bool operator!=(Assignment obj)
    {
        return (obj.a != a);
    }

    void display(string x)
    {
        cout << "The value of " << x << " is " << a << endl;
    }

    ~Assignment() {}    
};

int main()
{
    Assignment a1(50), a2(5);

    a1 += a2;
    a1.display("+=");
    
    a1 -= a2;
    a1.display("-=");
    
    a1 *= a2;
    a1.display("*=");
    
    a1 /= a2;
    a1.display("/=");
    
    a1 %= a2;
    a1.display("%=");

    a1&=a2;
    a1.display("&=");

    a1|=a2;
    a1.display("|=");

    a1^=a2;
    a1.display("^=");
    
    if(a1 != a2){
        cout<<"Unequal"<<endl;
    }
    else{
        cout<<"Equal"<<endl;
    }
    
    
    return 0;
}
