#include<iostream>
using namespace std;
// Overloading of unary operator
// e.g. ++ (pre and Post)

class Integer{
    private:
        int a;
    public:
        void setData(int x){
            a=x;
        }
        void showData(){
            cout<<"a: "<<a<<endl;
        }
        Integer(){
            cout<<"Object created."<<endl;
        }
        Integer operator++(){       // Pre Increment
            Integer i;
            i.a=++a;
            return i;
        }
        Integer operator++(int){       // POST Increment
            // the parameter int is used just to differentiate between the two pre increment or post increment
            // there is no need to pass any parameter to the operator function
            Integer i;
            i.a=a++;
            return i;
        }
};


int main(){
    Integer i1,i2;
    i1.setData(5);
    i1.showData();
    i2=i1++;
    i1.showData();
    i2.showData();

    return 0;
}