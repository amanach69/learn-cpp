#include <iostream>
using namespace std;

class Animal{
    public:
        string category, color;
        int legs, hands;
    
        Animal(string category, string color, int legs, int hands){
            this->category = category;
            this->color = color;
            this->legs = legs;
            this->hands = hands;
        };
};

void display(Animal A){
    cout<<"Category: "<<A.category<<"\n";
    cout<<"Color: "<<A.color<<"\n";
    cout<<"Legs: "<<A.legs<<"\n";
    cout<<"Hands: "<<A.hands<<"\n";
}

// OR
// void display(Animal &A){
//     cout<<"Category: "<<A.category<<"\n";
//     cout<<"Color: "<<A.color<<"\n";
//     cout<<"Legs: "<<A.legs<<"\n";
//     cout<<"Hands: "<<A.hands<<"\n";
// }

int main() {
    Animal animal1("Cat", "brown", 4, 0);
    display(animal1);   
    return 0;
}