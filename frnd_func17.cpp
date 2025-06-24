#include<iostream>

using namespace std;

// OVERLOADING OF UNARY OPERATOR CAN BE DONE USING FRIEND FUNCTION

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
        friend Complex operator -(Complex);
        
};

/*
    Similar to previous discussed point 

*/

Complex operator-(Complex c){
            Complex temp;
            temp.a=-c.a;
            temp.b=-c.b;
            return temp;
        }

int main(){

    Complex c1,c2;
    c1.set_data(2,3);


    //c2=-c1; //  c2=c1.operator-();

    c2=operator-(c1);

    c1.show_data();
    c2.show_data();
    return 0;
}