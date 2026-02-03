#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size for static array: ";
    cin >> n;
    int staticArr[n];
    for (int i = 0; i < n; i++) {
        cout << "Static Arr[" << i << "]: ";
        cin >> staticArr[i];
    }
    cout << "Static array values: ";
    for (int i = 0; i < n; i++) {
        cout << staticArr[i] << " ";
    }
    cout << endl;
    return 0;
}
