#include<iostream>
using namespace std;
 

// Object Pointer : A pointer contains address of an object is called Object pointer.

class Box{
    private:
        int l,b,h;
    public:
        void setDim(int x,int y,int z){
            l=x;b=y;h=z;
        }

        void setDimension(int l,int b,int h){
            this->l=l;this->b=b;this->h=h;
            // l=l;b=b;z=z;
            // pehle preference member variable ke arguements ko milta hai then it searches for instance member variables
        }
        void getDim(){
            cout<<"l:"<<l<<"\tb:"<<b<<"\th:"<<h<<endl;
        }
        void vol(){
            cout<<"The Volume is:"<<this->l*this->b*this->h;

        }
};

/*
    This pointer:
        It is is a keyword.
        this is a local object pointer in every instance member function containing address of the caller object.
        this pointer can not be modified
        It is used to refer caller object in member function.
        hume banane ki zaroorat nahi hai automatic bana rehta hai
*/

int main(){
    
    Box *p,smallbox,bigbox,ubox,*u;

    smallbox.setDim(10,5,8);
    smallbox.getDim();

    p=&bigbox;

    p->setDim(20,15,10);
    p->getDim();

    u=&ubox;

    u->setDim(12,6,3);
    u->setDimension(20,20,20);
    u->getDim();
    u->vol();


    return 0;
}