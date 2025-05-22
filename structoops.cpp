#include<iostream>

// Functions group mei hona chahiye
struct book{
    // 3 variable
    private:
        int id;
        string name;
        float price;
    // 2 functions
    public:
        void input(){
            cout<<"Enter book id,name and price:";
            cin>>id>>name>>price;
            if(id<0)    id=-id;
        }
    void display(){
    cout << endl << id << " " << name << " " << price << endl;
}

};
using namespace std;

int main(){
    cout<<"Object Oriented Programming using Structure"<<endl;
    book b1;
    b1.input();
    b1.display();


    return 0;
}