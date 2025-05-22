#include<iostream>

// Functions group mei hona chahiye
struct book{
    int id;
    string name;
    float price;
    void input(){
        cout<<"Enter book id,name and price:";
        cin>>id>>name>>price;
    }
    void display(book b){
        cout<<endl<<b.id<<b.name<<b.price<<endl;
    }
};
using namespace std;

int main(){
    cout<<"Object Oriented Programming using Structure"<<endl;

    return 0;
}