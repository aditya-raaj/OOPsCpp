#include<iostream>

using namespace std;

// OVERLOADING USING EXTRACTION AND INSERTION OPERATOR


class Complex{
    private:
        int a,b;
    public:
        void set_data(int x,int y){
            a=x;
            b=y;
        }
        void show_data(){
            cout<<"a: "<<a<<"\tb:"<<b<<endl;
        }

        friend ostream& operator<<(ostream&,Complex);
        friend istream& operator>>(istream&,Complex&);
};

istream& operator>>(istream &din,Complex &c){
    din>>c.a>>c.b;
    return(din);

}
ostream& operator<<(ostream &dout,Complex c){
    dout<<"a :"<<c.a<<"\tb :"<<c.b<<endl;
    cout<<"a :"<<c.a<<"\tb :"<<c.b<<endl;
    return(dout);
}

int main(){

    Complex c1,c2;
    cout<<"Enter a complex number:";
    cin>>c1; 
    c2=c1;
    // cin.operator>>(c1);
    //     cin is an object and >> member function of that class also k/a Extraction Operator.
    // cin jis class ka object hai us class mei extraction operator ke ek se jyada version bane ho aur unke versions mei arguement mei fark ho
    // aur ye arguements primitive type ke honge , inme koi bhi argument mei complex type ki value as an argument nahi hogi

    cout<<endl<<"You entered:";
    cout<<c1<<c2;   
    // operator<<(cout,c1);

    return 0;
}