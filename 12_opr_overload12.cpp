#include<iostream>

using namespace std;

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
        Complex operator+(Complex c){
            Complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
        Complex operator-(){
            Complex temp;
            temp.a=-a;
            temp.b=-b;
            return temp;
        }
};



int main(){

    Complex c1,c2;
    c1.set_data(2,3);
    c2=-c1;     //      c3=c1+c2;       caller object is c1         BUT HERE DEPENDS ON THE OPERATOR
    c1.show_data();
    c2.show_data();
    return 0;
}