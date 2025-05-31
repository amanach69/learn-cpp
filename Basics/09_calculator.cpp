#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;
    cout << "Enter any two numbers:\n";
    cin >> num1 >> num2;
    cout << "Enter the operand (+, -. *, /, %):\n";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "The sum is " << num1 + num2;
        break;
    case '-':
        cout << "The difference is " << num1 - num2;
        break;
    case '*':
        cout << "The product is " << num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << "The division is " << num1 / float(num2);
        }
        else
        {
            cout << "Zero divison not possible!!\n";
        }
        break;
    case '%':
        if (num2 != 0)
        {
            cout << "The modulus is " << num1 % num2;
        }
        else
        {
            cout << "Zero division not possible!!\n";
        }
        break;

    default:
        cout << "Please ender a valid operator (+, -, *, /, %)\n";
        break;
    }
    return 0;
}