#include <iostream>
using namespace std;
/*
class Base_Class{
    attributes/methods etc;
}

class Derived_Class : visibility_mode Base_Class{
    attributes/methods etc;
}

Note:
    1. Visibility mode can be private and public
    2. By default visibility mode is private
    3. Private Visibility: It means the public and protected members of Base_Class becomes private members of Derived_Class
    4. Public Visibility: It means the public members of Base_Class becomes public members of Derived_Class and protected members becomes the
                            protected members of Derived_Class 
    5. Protected Visibility: It means the public and protected members of Base_Class becomes protected members of Derived_Class
    5. Private members of Base_Class is never inherited to Derived_Class


    Table:
                                    Method (Visibility Mode)
    Members     Public Inheritance      Protected Inheritance      Private Inheritance
    Private     Not Inhereted           Not Inhereted              Not Inhereted
    Public      Public                  Protected                  Private
    Protected   Protected               Protected                  Private
*/

// Base Class
class Employee
{
private:
    int age;

public:
    int id;
    string name;
};

class Programmer : Employee
{
public:
    string lang;

    Programmer(int id, string name, string lang)
    {
        this->id = id;
        this->name = name;
        this->lang = lang;
    }

    void disply_details()
    {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Language: " << lang << endl;
    }
};

class programmer : public Employee
{
public:
    string lang;

    programmer(int id, string name, string lang)
    {
        this->id = id;
        this->name = name;
        this->lang = lang;
    }

    void disply_details()
    {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Language: " << lang << endl;
    }
};

int main()
{
    Programmer p1(1, "Harry", "Python");
    p1.disply_details();
    // cout<<p1.id<<endl;  //will give error as the derived class Programmer has the visibility mode of private

    programmer p2(2, "Jack", "Ruby");
    p2.disply_details();
    // cout<<p2.id; // it will work as the derived class programmer has the visibility mode of public
    return 0;
}