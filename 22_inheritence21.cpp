#include <iostream>
using namespace std;

class Array {
public:
    int data[10];
    int size;

    Array() : size(0) {}

    void add(int value) {
        if (size < 10) {
            data[size++] = value;
        }
    }
};

class Stack : private Array {
public:
    void push(int value) {
        add(value);
    }

    void printTop() {
        if (size > 0) {
            cout << data[size - 1] << endl;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);

    // ❌ Not allowed: add and data are private to Stack now
    // s.add(30);
    // cout << s.data[0];

    s.printTop(); // 20
}
