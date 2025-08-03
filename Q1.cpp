#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the array's size: ";
    cin >> size;

    int a[size];
    cout << "Enter array's elements" << endl;

    for(int i = 0; i < size; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    int count = 0; // Counter for negative elements
    cout << "\nNegative elements from an Array: ";

    for(int i = 0; i < size; i++) {
        if(a[i] < 0) {
            cout << a[i];
            count++;
            if (i != size - 1) cout << ", ";
        }
    }

    if (count == 0) {
        cout << "None";
    }

    cout << endl;
    return 0;
}