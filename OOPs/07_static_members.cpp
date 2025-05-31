#include <iostream>
using namespace std;

class Customer
{
    string name;
    int acc_id, balance;
    static int total_user, total_balance;

public:
    // static int total_user, total_balance;
    Customer(string name, int acc_id, int balance)
    {
        this->name = name;
        this->acc_id = acc_id;
        this->balance = balance;
        total_user++;
        total_balance += balance;
    }
    void display()
    {
        cout << "Name: " << name << "\n";
        cout << "Account Id: " << acc_id << "\n";
        cout << "Balance: " << balance << "\n\n";
    }

    void display_total_user()
    {
        cout << "Total users in bank: " << total_user << "\n";
    }

    void display_total_balance()
    {
        cout << "Total balance in bank: " << total_balance << "\n";
    }

    // class level functions (static functions)
    static void dis_total_balance()
    {
        cout << "Total Balance: " << total_balance << "\n";
    }

    static void dis_total_user()
    {
        cout << "Total User: " << total_user << "\n";
    }
};

int Customer::total_user = 0;
int Customer::total_balance = 0;

int main()
{
    Customer c1("Hari", 3456, 600);
    c1.display();
    Customer c2("Gopal", 323, 400);
    c2.display();

    // c2.display_total_user();
    // c2.display_total_balance();

    // // OR (If ststic members are public - Class level data types)
    // cout<<"Total User: "<<Customer::total_user<<"\n";
    // cout<<"Total Balance: "<<Customer::total_balance<<"\n";

    // Class Level function calling (Not object level)
    Customer::dis_total_user();
    Customer::dis_total_balance();

    return 0;
}