#include<iostream>
using namespace std;

/*
 - Friend Function is not a member function of aclass to which it is a friend
 - Friend function is declared in the class withfriend keyword
 - It must be defined outside the class to which itis friend
*/

/*
Friend function can access any member of the class to which it is friend
Friend function cannot access members of the class directly
It has no caller object -> Object ke help se direct call nahi kar sakte is tarah ke functions ko
It should not be defined with membership label
*/

class Complex{
    private:
    int a,b;
    public:
    void setData(int x,int y){
        a=x;b=y;
    }
    void show_data(){
            cout<<"a: "<<a<<"\tb:"<<b<<endl;
        }
    friend void fun(Complex);
};

void fun(Complex c){
    // cout<<"sum:"<<a+b;
    // This form is also wrong as the friend function can't be called that easily like this directly.
    // pata hi nahi chal raha hai kiska a aur b add hoga
    cout<<"sum:"<<c.a+c.b;
}

int main(){
    Complex c1;
    // c1.fun();    Wrong way to do this
    c1.setData(2,6);
    fun(c1);
    return 0;
}