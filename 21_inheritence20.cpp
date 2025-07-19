#include<iostream>

using namespace std;

class Car{
    private:
        int gear;
    public:
        void incementGear(){
            if(gear<5)  gear++;
        }
};

class SportsCar: public Car{

};


int main(){

    // Both public leads to easy association of child with base class 
    // SportsCar is a Car
    // Banana is a fruit




    /*
        When to do Protected and Private Inheritence?

        next part inheritence 21
    
    */

    return 0;
}