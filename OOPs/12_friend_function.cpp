#include <iostream>
using namespace std;

// /*
// Global function as friend function example
// Syntax:
//     class name{
//         public:
//             friend data_type fn_name(args); //declaration
//     };

//     //definition of friend function (always done outside the main class)
//     data_type fn_name(args){
//         //syntax;
//     }
// */

// class Base
// {
// private:
//     int a;

// protected:
//     int b;

// public:
//     Base()
//     {
//         a = 10;
//         b = 20;
//     }

//     friend void accessData(Base &obj);
// };

// void accessData(Base &obj)
// {
//     cout << "Private value: " << obj.a << endl;
//     cout << "Protected value: " << obj.b << endl;
//     /*
//     OR we can pass the value instead of reference also (but that will not be memory efficient as it will create copy of the object)
//     cout << "Private value: " << obj.a << endl;
//     cout << "Protected value: " << obj.b << endl;
//     */
// }

// int main()
// {
//     Base obj1;
//     accessData(obj1);
//     return 0;
// }

// /*
// Member function of another class as friend function example
// Syntax:

//     class Second; //declaration is needed as it will be used in First class

//     class First{
//         public:
//             friend data_type class_name :: fn_name(args); //declaration
//     };

//     class Second{
//     //definition of friend function in another class
//     public:
//         data_type fn_name(args){
//             //syntax;
//         }
//     };
// */

// class First; //Early declaration

// class Second{
//     public:
//         void accessData(First &obj);
// };

// class First{
//     private:
//         int a;

//     protected:
//         int b;

//     public:
//         void setData(int a, int b){
//             this->a = a;
//             this->b = b;
//         }
//         friend void Second::accessData(First &obj);
// };

// void Second::accessData(First &obj){
//     cout<<"Private Data: "<<obj.a<<endl;
//     cout<<"Protected Data: "<<obj.b<<endl;
// }

// int main(){
//     First obj1;
//     obj1.setData(20,12);
//     Second obj2;
//     obj2.accessData(obj1);
// }

// /*
//     Global function for multiple classes
// */

class Second; //forward declaration

class First
{
    int x;
    public:
        void set_data(int x){
            this->x = x;
        }

        friend void max(First, Second);
};

class Second
{
    int y;
    public:
        void set_data(int y){
            this->y = y;
        }

        friend void max(First, Second);
};

void max(First o1, Second o2){
    if (o1.x>o2.y)
    {
        cout<<o1.x<<endl;
    }
    else{
        cout<<o2.y<<endl;
    }

}

int main()
{
    First obj1;
    obj1.set_data(2);
    Second obj2;
    obj2.set_data(23);
    max(obj1, obj2);

    return 0;
}