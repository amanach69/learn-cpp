#include <iostream>
using namespace std;

int main() {
    int a=5;
    // multiplication table (for loop)
    for (int i = 1; i <= 10; i++)
    {
        cout<<a<<" X "<<i<<" = "<<a*i<<endl;
    }

    // factorial (while loop)
    int i=0, x=0, y=1, z;
    while(i<10){
        cout<<x<<"\t";
        
        z = x+y;
        x=y;
        y=z;
        i++;
    }
    
    // fibonacci series (do-while loop)
    int fact =1, i =1;
    do{
        fact *= i;
        i++;
    }while(i<=a);

    cout<<fact;
    return 0;
}