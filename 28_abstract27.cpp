// PURE VIRTUAL FUNCTION : A do nothing function is pure virtual function
#include<iostream>
using namespace std;

class Person{
    public:
    // Virtual keyword isiliye use karna pada kyunki early binding ke kaaran 
    // the function should be dependent on the content i.e most probably Child class.
    // LATE BINDING
        virtual void fun()=0;   // DO NOTHING FUNCTION
        // This is an example of pure Virtual Function.
        // So, they can't be called.
};

/*
    ABSTRACT CLASS
        - any class with at least one pure virtual function is k/a Abstract Class.
        - No object can be created of such class.

    - In JAVA, there is a keyword named Abstract which can be used to create abstract class.
    - But in C++, the creation of pure virtual function determine whether the class is Abstract class or not

*/

class Student: public Person
            // To access Person class. It's necessary to implement a child class.
            // You can access parent class Person using child class only.
{
    public:
        void fun(){
            // In Child class it's necessary to do FUNCTION OVERRIDDING.
            // To prevent the object to access Pure Virtual Function


            /* 
                You have to do Method Overriding in any case :
                    - You can either create a function as i have done.
                    - Or you can again create that particular function as pure virtual function.

            */
        }
};

int main(){
    // Person p;
    // p.fun();
    return 0;
}