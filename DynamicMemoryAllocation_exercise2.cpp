#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input with validation
    do {
        cout << "Enter number of rows (max 3): ";
        cin >> rows;
    } while (rows > 3 || rows <= 0);

    do {
        cout << "Enter number of columns (max 3): ";
        cin >> cols;
    } while (cols > 3 || cols <= 0);

    // Dynamic allocation
    double** array = new double*[rows];

    for (int i = 0; i < rows; i++) {
        array[i] = new double[cols];
    }

    // Input values
    cout << "\nEnter values:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    // Output values
    cout << "\nArray values:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}