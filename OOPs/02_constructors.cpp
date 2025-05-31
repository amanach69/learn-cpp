#include <iostream>
using namespace std;

class Bank
{
public:
    string name;
    int acc_id, balance;
    // Bank()
    // {
    //     cout << "Default constructor called";
    // }; // default constructor

    // OR Default value set constructor
    Bank()
    {
        name = "Ayush";
        acc_id = 123;
        balance = 1000;
    };

    // Parameterized Constructor
    Bank(string name, int acc_id, int balance)
    {
        this->name = name;
        this->acc_id = acc_id;
        this->balance = balance;
    };

    // // OR (Not Prefered)
    // Bank(string x, int y, int z){
    //     name = x;
    //     acc_id = y;
    //     balance = z;
    // };

    // inline constructor
    inline Bank(string a, int b) : name(a), acc_id(b)
    {
        name = a;
        acc_id = b;
        //  balance will have garbage value
    };

    // // copy constructor
    
    // // There is already a default copy constructor present (created by compiler itself)
    
    // user define copy constructor
    Bank(Bank &C){
        name = C.name;
        acc_id = C.acc_id;
        balance = C.balance;
    };

    // // Another way

    // Bank(Bank *C){
    //     name = C->name;
    //     acc_id = C->acc_id;
    //     balance = C->balance;
    // };

    void display()
    {
        cout << "Name: " << name << "\n";
        cout << "Account Number: " << acc_id << "\n";
        cout << "Balance: " << balance << "\n\n";
    };
};

int main()
{
    Bank cust1, cust2("Hari", 456, 3000), cust3("Shyam", 3212);
    cust1.display();
    cust2.display();
    cust3.display();

    // calling copy constructor
    Bank cust4(cust3);
    cust4.display();
    // // For another method (Pointer method)
    // Bank cust5(&cust3);
    // cust5.display();

    // OR
    Bank cust5;
    cust5=cust3;
    cust5.display();

    // cust3.name = "Gopi";
    // cust3.display();
    // cust4.display();
    // cust5.display();
    return 0;
}