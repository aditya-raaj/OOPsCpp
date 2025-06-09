#include<iostream>

using namespace std;

// Destructer is an instance member function i.e it can be used only if an instance is created i.e an object is created
// it can never be static function as you can not use it throughout the code as you can't do anything incase when there is no object created
// no return type
// takes no arguement

// agar aap destructor nahi banayenge to class khud banayega ,  aap bana doge to nahi banayega

// destructor object ki zindagi mei chalne wala aakhiri function hota hai
// destructor object ko destroy nahi karta

class Complex{
    private:
        int a,b;
    public:
        ~Complex(){
            cout<<"Destructor invoked";
        }

};
void fun(){
    Complex obj;
}

// It should be defined to release resource allocated to an object.

// Sometimes it's beneficial to use it while creating a memory management.
// If a pointer of your code has access to resouces then later that full code is deleted it becomes impossible to free that resource.

int main(){
    fun();
    return 0;
}