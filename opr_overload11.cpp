#include<iostream>

using namespace std;

class Complex{
    private:
        int a,b;
    public:
        void set_data(int x,int y){
            a=x;b=y;
        }
        void show_data(){
            cout<<"a: "<<a<<"\tb:"<<b<<endl;
        }
        Complex operator+(Complex c){
            Complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
};

// For using a valid operator as a operator for computing any value 
// in c++ we can do that using operator keyword before the symbol
// for e.g.     Complex operator+(Complex c){


// When an operator is overloaded with multiple jobs, it is known as operator overloading.
// It is a way to implement compile time polymorphism.


/*
Any symbol can be used as function name
— If it is a valid operator in C language
— If it is preceded by operator keyword
*/


//You can not overload "sizeof" and "?:"" operator

int main(){

    Complex c1,c2,c3,c4;
    c1.set_data(2,3);
    c2.set_data(3,4);
    // c3=c1+c2;        Gives error :  plus ko nahi pata non primitive data types ko add kaise karna hai
    c3=c1+c2;
    c4=c1.operator+(c2);

    c3.show_data();
    c4.show_data();
    return 0;
}