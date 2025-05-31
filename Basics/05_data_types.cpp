#include<iostream>

using namespace std;

int main(){
    // primitive data types (int, double, float, void, char, bool)
    int x=10;
    float pi=3.14;
    double pii=3.1514678923;
    char grade='A';
    bool is_holday=true;

    cout<<x<<'\n'<<pi<<'\n'<<pii<<'\n'<<grade<<'\n'<<is_holday<<'\n';


    // derived data types(array, pointer, reference, function)

    int marks[5]={10,20,35,40,55};//array initialization
    int *ptr;  //pointer initialization

    //printing the values in array and addres of them using pointer
    for (int i = 0; i < 5; i++)
    {
        ptr = &marks[i];
        cout<<"Number i: "<<marks[i]<<'\n';
        cout<<"Address: "<<ptr<<'\n';
    }

    // referencing changes the existing values (alias for an existing variable)
    int &ref = x;
    ref += 1;
    cout<<ref<<'\n'<<x<<'\n';

    // others: user defined data types(struct, union, class, enum)

    
    return 0;
}