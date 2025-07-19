#include<iostream>

using namespace std;

// MEMBER FUNCTION OF ONE CLASS BECOMES THE FRIEND OF ANOTHER CLASS

class A{
    public:
    void fun(){
        cout<<"Inside Class A";
    }
    void food(){

    }
};
class C{
    void apple(){}
    void mango(){}
    void banana(){}
    void pineapple(){}
};

class B{
    friend void A:: fun(); // konsa fun use karna hai yaha
    // do fun function hai hum konsa fun use kar rhe hai
    friend void A:: food();
    
    
    // Agar we want to create friend function all the functions of class A
    // We can directly do by  
    friend class C;
};

void fun(){
    cout<<"Global Function";
}



int main(){
    
    return 0;
}

