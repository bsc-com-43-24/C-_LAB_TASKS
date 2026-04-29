#include <iostream>
using namespace std;

int main() {
    int numberOfElements;

    cout << "Enter number of elements: ";
    cin >> numberOfElements;

    int* dynamicArray = new int[numberOfElements];

    for (int i = 0; i < numberOfElements; i++) {
        cout << "Enter number: ";
        cin >> dynamicArray[i];
    }

    cout << "You have entered: ";
    for (int j = 0; j < numberOfElements; j++) {
        cout << dynamicArray[j] << ", ";
    }

    delete[] dynamicArray;

    return 0;
}
