#include<iostream>

using namespace std;

// STATIC LOCAL VARIABLE

void fun(){
    static int x; // Validity is throughout the code 
    // By default value of static is 0.
    // static int x; means the value is initialised with zero.
    int y; // Validity is till this function is there
}

// STATIC LOCAL MEMBER

class account{
    private:
        int balance; // Instance Member Variable
        static float discount; // Static Member Variable also k/a Class variable
    public:
        void setBalance(int b){
            balance=b;
        }
        static void setDiscount(float d){ // Static Member Function
            discount=d;
        }
        void show(){
            cout<<"Balance :"<<balance<<"\tDiscount: "<<discount<<endl;
        }

};

// This line is necessary to write to define the static member variable
float account :: discount=10.2f; // You can initialise with any by default value of your want.


int main(){
    account a1,a2;
    a1.setBalance(25);
    // Since the static member variable is declared in object and doesn't depends on object 
    // It's not instance based so it can be directly accessed too because even if we dont create or use objects it will be created
    // account :: discount =4.5f; THIS IS a valid syntax but it can only be used if and only if the discount variable would have been in public section
    a2.setDiscount(8.9f);
    // Static Member function are used and are in need to be used to change the state without creation of object.
    a1.show();
    a2.show();
    return 0;
}