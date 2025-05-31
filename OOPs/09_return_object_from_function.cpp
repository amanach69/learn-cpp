#include <iostream>
using namespace std;

class Vehicle{
    public:
        string type, brand, year;
        int windows, doors, wheels;
};

Vehicle setter(Vehicle A){
    A.type = "Car";
    A.brand = "BMW";
    A.year = "2015";
    A.windows = 4;
    A.doors = 4;
    A.wheels = 4;
    return A;
};

int main() {

    Vehicle car1;
    car1 = setter(car1);
    cout<<"Vehicle Type: "<<car1.type<<"\n";    
    cout<<"Brand: "<<car1.brand<<"\n";    
    cout<<"Year: "<<car1.year<<"\n";    
    cout<<"Windows: "<<car1.windows<<"\n";    
    cout<<"Doors: "<<car1.doors<<"\n";    
    cout<<"Wheels: "<<car1.wheels<<"\n";    
    return 0;
}