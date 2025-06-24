#include<iostream>

using namespace std;

// OVERLOADING OF BINARY OPERATOR CAN BE DONE USING FRIEND FUNCTION

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
        friend Complex operator +(Complex,Complex);
        
};

/*
    Jab bhi koi binary operator ko overload karte hai to ek arguement pass karte hai 
    lekin jab usi binary operator ko friend function ke taur par use karte hai to do( ek extra ) arguement bhejne padte hai


    Even jab unary opearator ko overload karte thhe tab hum zero arguement use karte thhe 
    lekin usi operator ko jab hum friend function ke taur  par use l

*/

Complex operator+(Complex c1,Complex c2){
            Complex temp;
            temp.a=c1.a+c2.a;
            temp.b=c1.b+c2.b;
            return temp;
        }

int main(){

    Complex c1,c2,c3;
    c1.set_data(2,3);
    c2.set_data(3,4);

    c3=c1+c2; // c3=operator+(c1,c2);


    // c4=c1.operator+(c2);

    c3.show_data();
    return 0;
}