#include<iostream>

using namespace std;

/*
    The main Difference between Structure and Class is
    1. Structure -> public (by default)
    2. Class -> private (by default)

*/ 

struct complex{
    private:
        int a;int b;
    public:
        void input(int x,int y){
            a=x;b=y;
        }
        void output(){
            cout<<"\na="<<a<<"\nb="<<b;
        }

};

class complexity{
    //By default its
    // private:
        int a;int b;
    public:
        void input(int x,int y){
            a=x;b=y;
        }
        void output(){
            cout<<"\na="<<a<<"\nb="<<b;
        }
        
        void sum(int,int);

};

void complexity::sum(int x,int y){
    a=x;b=y;
    cout<<"\na="<<a<<"\nb="<<b;
    cout<<"\nSum="<<a+b;
}

int main(){
    cout<<"Hello";
    complex c1;
    c1.input(3,4);
    c1.output();

    complexity o1;
    o1.input(2,3);
    o1.output();

    complexity o2;
    o2.sum(5,7);
    o2.output();

    return 0;
}