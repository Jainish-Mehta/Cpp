#include <iostream>
using namespace std;

int main() {
    int m;
    cout << "Enter size for dynamic array: ";
    cin >> m;
    int* dynamicArr = new int[m];
    for (int i = 0; i < m; i++) {
        cout << "Dynamic Arr[" << i << "]: ";
        cin >> dynamicArr[i];
    }
    cout << "Dynamic array values: ";
    for (int i = 0; i < m; i++) {
        cout << dynamicArr[i] << " ";
    }
    cout << endl;
    delete[] dynamicArr;
    return 0;
}
