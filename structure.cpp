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



int main(){

    // Array is use to store similar items or values together .

    // Structure is use to store dissimilar values together.

    cout<<"Structure";

    // struct is optional

    struct book b1;
    // Local Declaration
    book b2;
    // Local Declaration of structure
    struct book{
        int book_id;
        string book_name;
        float price;
    };
    //

    return 0;
}