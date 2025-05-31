#include <iostream>
using namespace std;

/*
Synatx:
    class main{
        public:
            friend class class_name;
    };

    class another_class_name{
        // syntax to access or modify the private/protected data of main class
    };
*/

class First
{
private:
    int a;

protected:
    int b;

public:
    First()
    {
        a = 10;
        b = 20;
    }

    friend class Second;
};

class Second
{
public:
    void accessData(First &obj)
    {
        cout << "Private Data: " << obj.a << endl;
        cout << "Protected Data: " << obj.b << endl;
    }
    // OR

    // (not prefered)
    void accessdata(First obj)
    {
        cout << "Private Data: " << obj.a << endl;
        cout << "Protected Data: " << obj.b << endl;
    }
};

int main()
{
    First obj1;
    Second obj2;
    obj2.accessData(obj1);
    cout<<endl;
    obj2.accessdata(obj1);  //not prefered
    return 0;
}
