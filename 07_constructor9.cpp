#include<iostream>

using namespace std;

// It's a memeber function of the class.
// There's no return type so nothing is returned.
// The name of constructor is same as that of the class name.
//  It's an instance memeber function. Can't be made static.
class Complex{
    private:
        int a,b;
    public:
        Complex(){
            cout<<"Hello Constructor"<<endl;
        }
};
// Constructor is never called. It happens automatically( IMPLICITLY INVOKED ) as object is created.

// It's used to tackle the problem of initilisation.
int main(){
    Complex c1,c2,c3;
    // Constructor object ko object banata hai.


    // A "constructor" in programming is called that because it's responsible for constructing (or building) an object. 
    // If i want to represent a car using OOPS concept
    // 1. PROBLEM OF INITIALISATION
    // solution 1. when we create the object the Garbage value never represent a real car.
    // 2. HOW THE CONSTRUCTOR SOLVE THIS PROBLEM
    // solution 2. when we create the constructor it initialise the object with some default value of class.
}