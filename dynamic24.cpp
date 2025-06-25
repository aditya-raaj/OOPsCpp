#include <iostream>
using namespace std;

int main() {
    int size;

    // Ask user for size of array
    cout << "Enter the number of elements: ";
    cin >> size;

    // Dynamically allocate memory for an array using new
    int* arr = new int[size];

    // Input elements
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Output elements
    cout << "You entered:\n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate memory using delete[]
    delete[] arr;

    return 0;
}
