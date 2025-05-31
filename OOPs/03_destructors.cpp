#include <iostream>
using namespace std;

class Person{
    string name;
    int age;

    public:
        int *pbalance;
        // constructor
        Person(string name, int age, int balance){
            cout<<"Constructor Called.\n";
            this->name = name;
            this->age = age;
            pbalance = new int;
            *pbalance = balance;
        }

        void display(){
            cout<<"Name: "<<name<<"\n";
            cout<<"Age: "<<age<<"\n";
            cout<<"Balance: "<<*pbalance<<"\n";
            cout<<"Balance Address: "<<pbalance<<"\n";
            cout<<"Pointer Address: "<<&pbalance<<"\n";
        }

        // destructor (releases dynamically allocated memory)
        ~Person(){
            cout<<"Destructor Called.\n";
            delete pbalance;
        }
};

int main() {
    Person person1("Hari", 20, 3000);
    person1.display();
    return 0;
}