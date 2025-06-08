
#include<iostream>

using namespace std;


class Complex{
    private:
        int a,b;
    public:
        Complex(int x,int y){ // PARAMETERISED CONSTRUCTOR
            a=x;b=y;
        }
        Complex(int k){// Constructor Overloading : function overloading -> function name same , arguements difference
            a=k;b=0;
                        // PARAMETERISED CONSTRUCTOR
        }
        Complex(){
            a=0;b=0;
        }
        /*
        Complex(){
            DEFAULT CONSTRUCTOR
        }
        
        */
        void output(){
            cout<<"\na="<<a<<"\tb="<<b;
        }
};

int main(){
    //Complex c1; error occurs because there's no function in complex class that creates object with empty class
    Complex c1(3,4),c2(5),c3;
    Complex c4=Complex(4,8); // Constructor call 
    Complex c5=5; // this style is valid only for one arguement
    c1.output();
    c2.output();
    c3.output();
    c4.output();
    c5.output();
    // Object banta hai to constructor call to hota hi hai 
    // Jab koi bhi object banta hai , constructor call hota hai 
    // EVEN if there's no user defined constructor ,"IMPLICIT DEFAULT CONSTRUCTOR" are invoked.
    // us default constructor mei kuch nahi no arguements, and no body 



    // Agar user ek bhi constructor bana leta hai to default constructor khatam .
    // There won't be any constructor with 0 arguements for example if i create a constructor with 2 arguements.
}