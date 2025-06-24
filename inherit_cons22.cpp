#include<iostream>
using namespace std;

// What happens when a child class's object is created. Whose Constructor runs?
// Kyunki child class to base class se inherit ho raha hai to kisko pehle run karana hoga
// Base class or Child class

// Constructor ka main kaam kya hai?
// Initialisation karana , class ke saare member variables ko initialise karana

// agar ek hi constructor chalega to kuch chize initialise hongi kuch nahi hongi par dono ko initialise karana zaroori hai

class A{
    private:
    int a;
    public:
    A(int x){
        a=x;
    }
    ~A(){
        cout<<endl<<"Class A";
    }
};

class B: public A{
    private:
    int b;
    public:
    B(int x,int y):A(x){ // Arguement agar paas ho rha hai to yaha pass karna hoga
        // in any case agar hum yaha B():A() likhna bhool jaate hai to it will give you error
        b=y;
    }
    ~B(){
        cout<<endl<<"Class B";
        // child class ke Last line tak code execute hoga and then the execution will go in hands of destructor of parent class
        // parent class ke destructor ka poora code execute hoga then Parent class destruct hoga 
        // uske baad wapis compiler child class ke paas aayega to delete the child class object


        // Child pehle apna destructor execute karega then Parent ka destructor execute hoga
    }
};

int main(){

    // Child class ka constructor hi Parent class ke constructor ko call karta hai
    // Pehle call Child hota hai phir Parent class
    // But Execute Pehle Parent then Child

    B b1(3,4);
    return 0;
}