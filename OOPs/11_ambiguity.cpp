#include<iostream>
using namespace std;

class Base1{
    public:
        void display(){
            cout<<"This is Base1 class."<<endl;
        }
};
class Base2{
    public:
        void display(){
            cout<<"This is Base2 class."<<endl;
        }
};
class Derived: public Base1, public Base2{
    public:
    Derived(){
        cout<<"Derived class constructor called."<<endl;
        // display();  //it will give ambiguity error
        
        // resolve ambiguity specifying the class name for the used function
        Base1::display();
        Base2::display();
    }
};

int main(){
    Derived d1;
    return 0;
}