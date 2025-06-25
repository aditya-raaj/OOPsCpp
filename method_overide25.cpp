#include<iostream>
using namespace std;

class A{
    public:
        void fun(){
            cout<<"Class A"<<endl;
        }

        void fool(){
            cout<<"Class A'2"<<endl;
        }
};

class B : public A{
    public:
        void fun(){         //   Method Overriding : same name , same arguement
            cout<<"Class B"<<endl;
        }
        // e.g. shiftGear() agar hum SportsCar mei bhi karna chahte hai but the mechanism is different

        void fool(int){     //   Method Hiding : same name, different arguement
            cout<<"Class B'2"<<endl;

            // Method Overloading : same name , different arguement in same class.
        }
};

int main(){
        B b;
        b.fun();
        // b.fool();   #error
        // the above statement is showing error because 
        // jab koi function child class mei nahi hota to parent class mei bhi usko dhundhte hai
        // In a particular case when child class mei function match ho jata hai to we don't go in parent class
        // And according to child class function we need an arguement
        b.fool(5);
        b.A::fool();
    return 0;
}