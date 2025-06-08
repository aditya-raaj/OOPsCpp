#include<iostream>

using namespace std;


class Complex{
    private:
        int a,b;
    public:
        Complex(Complex &c){ // Complex(Complex c) : Without '&' the constructor call goes into a recursion such that it goes into infinite loop 
            // "reference variable creation is important to solve this issue of infinite loop"
            a=c.a;
            b=c.b;
        }
        Complex(int x,int y){ 
            a=x;b=y;
        }
        Complex(int k){
            a=k;b=0;
        }
        Complex(){ }
        void output(){
            cout<<"\na="<<a<<"\tb="<<b;
        }
};

int main(){
    Complex c1(3,4),c2(5);
    Complex c3(c1);
    // Yha konsa Constructor chalega ? kyunki code sahi se run ho raha hai
    // 1 , 2 , 3 to nahi ho sakta kyunki argument complex type ka hai aur constructor mei arguement complex
    // Yaha default constructor run ho raha hai 
    // par hamne jaisa padha default constructor kaam nahi karta hai jaise hi ham ek bhi constructor bana lete hai
    // par yaha kaam kar raha hai kaise ???
    // actually default constructor do tarah ke bante hai ek 
    /*
    01. default constructor  : ye bana diya to bhi copy constructor to banaye ga
        Complex{ }


    02. copy constructor : ye bana diya to kuch nahi banaye ga

    */

    c1.output();
    c2.output();
    c3.output();
}