// basic class
#include <iostream>
using namespace std;

// normal class
class Person //(class name)
{
    // private attributes
    string name, country;
    int age;

public:
    // public attribute
    float height;
    void set_values(string n, string ctr, int a, float h) // methods or class functions
    {
        name = n;
        country = ctr;
        age = a;
        height = h;
    }

    void display() // methods or class functions
    {
        cout << "\nName: " << name;
        cout << "\nCountry: " << country;
        cout << "\nAge: " << age;
        cout << "\nHeight: " << height;
    }
};

int main()
{
    Person person1;                                 // object of Person class
    person1.set_values("Ayush", "Nepal", 20, 5.11); // method calling
    person1.display();
    return 0;
}