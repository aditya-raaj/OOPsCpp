#include<iostream>
#include<conio.h>

using namespace std;

// Global Declaration of structure

struct book{
    int book_id;
    string book_name;
    float price;
}b3;
book b4;

// Global Declaration of variable of data structure book i.e a user defined data structure

book input(){
    book b0;
    float price;
    cout<<"Enter the id:";
    cin>>b0.book_id;
    cout<<"Enter the name";
    cin>>b0.book_name;
    cout<<"Enter the price";
    cin>>b0.price;
    return b0;
}

void display(book b){
    cout<<endl;
    cout<<"Book Id:"<<b.book_id<<"\t";
    cout<<"Book Name:"<<b.book_name<<"\t";
    cout<<"Price:"<<b.price<<"\t";
    cout<<endl;
    return;
}


int main(){

    // Array is use to store similar items or values together .

    // Structure is use to store dissimilar values together.

    cout<<"Structure"<<endl;

    // writing struct is optional

    struct book b1={ 1,"Nairobi", 2500 };
    // Local Declaration
    cout<<b1.book_name<<endl;
    book b2;
    b2.book_id=2;
    b2.book_name="Tokyo";
    b2.price=2400;
    // Local Declaration of structure
    struct fruit{
        string fruit_name;
        float price;
    };
    //
    b3=b2;
    b4=input();
    display(b1);
    display(b2);
    display(b3);
    display(b4);

    return 0;
}