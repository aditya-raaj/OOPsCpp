#include<iostream>
using namespace std;

/*
        In c++ when we create a 
*/

class A{
    int a;
    public:
        void f1(){};
        void f2(){};
        virtual ~A(){}
};

class B : public A {
    int b;
    public:
        void f2(){};
        virtual ~B(){} // Virtual by default ho jata hai because parent class ka destructor ko virtual bana diya gya 
};

int fun();

int fun(){
    A *p=new B;
    p->f1();
    p->f2();    // #error
    delete p;
}

int main(){
    fun();
    return 0;
}