#include<iostream>

using namespace std;

class Car{

    private:
        int vehicle_id;
    public:
        void SetID(int ID){
            vehicle_id=ID;
        }
        void getID(){
            cout<<"ID:"<<vehicle_id<<endl;
        }

};

class SportsCar : public Car{

    private:
        int maxSpeed;
    public:
        void setSpeed(int speed){
            maxSpeed=speed;
        }
        void getSpeed(){
            cout<<"Max Speed:"<<maxSpeed<<endl;
        }

};

int main(){
    Car c1;
    // c1.setSpeed(112);
    SportsCar s1;
    s1.SetID(123);
    s1.getID();
    s1.setSpeed(100);
    s1.getSpeed();
    return 0;
}