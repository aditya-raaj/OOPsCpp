#include<iostream>

using namespace std;

class complex{
    private:
        int a,b;
    public:
        void input(int x,int y){
            a=x;b=y;
        }
        void sum(int x,int y){
        a=x;b=y;
        cout<<"\na="<<a<<"\nb="<<b;
        cout<<"\nSum="<<a+b;
        }
        complex add(complex c){
            complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
        void show(){
            cout<<"a :"<<a<<"\tb: "<<b<<endl;
        }
};
int main(){
    complex c1,c2,c3;
    c1.input(2,3);
    c2.input(4,5);
    c3=c1.add(c2);
    c1.show();
    c2.show();
    c3.show();
    return 0;
}