#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input row and column size
    cout << "Enter the array's row size: ";
    cin >> rows;
    cout << "Enter the array's column size: ";
    cin >> cols;

    int a[rows][cols];

    // Input elements
    cout << "Enter array's elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    // Initialize max with first element
    int maxElement = a[0][0];

    // Find largest element
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] > maxElement) {
                maxElement = a[i][j];
            }
        }
    }

    // Output the result
    cout << "\nThe largest element is: " << maxElement << endl;

    return 0;
}
