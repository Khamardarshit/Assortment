#include <iostream>
using namespace std;

int main() {
    int size;

    // Input for square matrix
    cout << "Enter the array's row & column size: ";
    cin >> size;

    int a[size][size], transpose[size][size];

    // Input elements
    cout << "Enter array's elements:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    // Calculate transpose
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    // Output with space between elements
    cout << "\nThe transpose matrix of an array:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << transpose[i][j] << " ";  // Add space between columns
        }
        cout << endl;  // New line after each row
    }

    return 0;
}
