#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the array's row size: ";
    cin >> rows;
    cout << "Enter the array's column size: ";
    cin >> cols;

    int a[rows][cols];

    cout << "Enter array's elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    int rowNumber;
    cout << "\nEnter row number: ";
    cin >> rowNumber;

    int rowSum = 0;
    cout << "Elements of row " << rowNumber << ": ";
    for (int j = 0; j < cols; j++) {
        cout << a[rowNumber][j];
        rowSum += a[rowNumber][j];
        if (j != cols - 1) cout << ", ";
    }
    cout << "\nThe sum of row " << rowNumber << ": " << rowSum << endl;

    int colNumber;
    cout << "\nEnter column number: ";
    cin >> colNumber;

    int colSum = 0;
    cout << "Elements of column " << colNumber << ": ";
    for (int i = 0; i < rows; i++) {
        cout << a[i][colNumber];
        colSum += a[i][colNumber];
        if (i != rows - 1) cout << ", ";
    }
    cout << "\nThe sum of column " << colNumber << ": " << colSum << endl;

    return 0;
}
