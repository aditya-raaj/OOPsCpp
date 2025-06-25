#include<iostream>
using namespace std;

// Base class pointer can point to the object of any of its descendant class

//  Jab hum base class ko point karta hua pointer banate hai
//  With the help of that pointer we can point to any child class of the Base class too
// CONVERSE is NOT TRUE.

// Car class ka pointer SportsCar class ke object ko point kar sakta hai
// Par SportsCar ka pointer Car class ke object ko point nahi kar sakta


/*
    Output Difference:
    Early Binding:
        Class B
        Class A
    Late Binding:
        Class B
        Class B
*/


class A{
    public:
        virtual void fun(){ // fun function ki late binding karni hai
                            // We mark the fun function to bind late 
                            //Point ke type ko nahi point ke content ko aadhar mana jayega
            cout<<"Class A"<<endl;
        }
};

class B : public A{
    public:
        void fun(){     //  FUNCTION OVERLOADING
            cout<<"Class B"<<endl;
        }
};

int main(){

    A *p1,o1;
    B *p2,o2;
    p1=&o1;
    p1=&o2;

    p2=&o2;
    // p2=&o1;      #error
    // Converse Condition

    // Function ke call ko dekh kar usko bind karne ka kaam compiler karta hai 
    // usko EARLY BINDING bolte hai

    o2.fun();
    // compiler o2 ke class ko dekh kar early binding karta hai 


    // yaha compiler ko ye nahi pata ki yaha address kiska rakha hai
    // isiliye fun ke sahi version ko dhundhne ke liye compiler ye nahi jaan payega ki ye p1 ke andar o1 ka address hai ya o2 ka
    //compile time pe we don't know the address. wo to jab run hone waqt jo address allocate honge 
    // compiler ke content ko 
    p1->fun();  // currently pointing to class B
    // output is still class A
    // uske according hum pointer ke type ko dekhega naki because during compile time 

    /*
        PROBLEM: EVEN AFTER OVERRIDING, WE DON'T GET THE DESIRED RESULT.
        i.e we wanted to have method overriding.

        We want late binding in place of early binding.
        late binding -> Late Binding, Run time pe binding.
    
    */

    return 0;
}