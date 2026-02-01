#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    cout << "Sum of elements: " << sum << endl;
}

void maxArray(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    cout << "Maximum element: " << maxVal << endl;
}

void reverseArray(int arr[], int size) {
    cout << "Reversed array: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void print2DArray(int arr[][3], int rows) {
    cout << "2D Array elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    sumArray(arr, size);
    maxArray(arr, size);
    reverseArray(arr, size);

    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    print2DArray(matrix, 2);

    return 0;
}
