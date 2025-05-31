#include <iostream>
using namespace std;

class Relation{
    
     int a;

    public:
        Relation() {
            a = 0;
            cout << "Constructor called" << endl;
        }

        Relation(int x){
            a = x;
        }

        bool operator==(Relation obj){
            return a==obj.a;
        }

        bool operator>(Relation obj){
            return a>obj.a;
        }

        bool operator<(Relation obj){
            return a<obj.a;
        }

        bool operator>=(Relation obj){
            return a>=obj.a;
        }

        bool operator<=(Relation obj){
            return a<=obj.a;
        }

        ~Relation() {}
};

int main() {
    Relation r1(10), r2(20);

    if(r1==r2){
        cout<<"Both are equal"<<endl;
    }
    else{
        cout<<"Not Equal"<<endl;
    }

    if(r1>r2){
        cout<<"r1 is greater"<<endl;
    }
    else{
        cout<<"r2 is greater"<<endl;
    }

    if(r1<r2){
        cout<<"r1 is smaller"<<endl;
    }
    else{
        cout<<"r2 is smaller"<<endl;
    }

    if(r1>=r2){
        cout<<"r1 greater or equals to r2"<<endl;
    }
    else{
        cout<<"r2 is greater or equals to r1"<<endl;
    }

    if(r1<=r2){
        cout<<"r1 is smaller or equals to r2"<<endl;
    }
    else{
        cout<<"r2 smaller or equals to r1"<<endl;
    }
    return 0;
}