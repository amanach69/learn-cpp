#include <iostream>
using namespace std;

int main()
{
    /*
    Operators in CPP:
    1. Arithmetic : +, -, *, /, %
    2. Relational: ==, <, >, !=, >=, <=
    3. Logical: &&, ||, !
    4. Bitwise: &, ^, ~, >>, << (not use in common cases)
    5. Increment/Decrement: ++, --;
    6. Assignment: =, +=, -=, /=, *=, %=
    7. Conditional(ternary): check? true statement: false statement
    8. size of: sizeof(variable)
    9. comma: (var1,var2,var3)
    */
   int x, y;
   cout << "Enter any two numbers:\n";
   cin >> x >> y;

    // arithmetic operation
    cout << "The sum is " << x + y << '\n';
    cout << "The difference is " << x - y << '\n';
    cout << "The product is " << x * y << '\n';
    cout << "The division is " << float(x) / y << '\n';
    cout << "The modulo is " << x % y << '\n';

    // relational operation
    if (x==y)
    {
        cout<<"Both are equal \n";
    }
    else if (x > y){
        cout<<"X greater than Y \n";
    }
    else if (x < y){
        cout<<"X less than Y \n";
    }
    else{
        cout<<"Both are not equal \n";
    }

    // increment decrement operator
    x++; //post-increment
    --y; //pre-increment
    cout<<"Value of X after decrement: "<<x<<'\n';
    cout<<"Value of Y after decrement: "<<y<<'\n';

    // asignment operator
    x+=5;
    y-=10;
    cout<<"Value of X after adding 5 using assignment operator: "<<x<<'\n';
    cout<<"Value of Y after subtracting 10 using assignment operator: "<<y<<'\n';


    // // ternary operator (same as if statement)
    (x>y)? cout<<"X is greater \n": cout<<"Y is greater";
    
    return 0;
}