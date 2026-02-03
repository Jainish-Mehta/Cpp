#include <iostream>
using namespace std;

void leakExample(int n) {
    int* leak = new int[n];
    for (int i = 0; i < n; i++) {
        leak[i] = i;
    }
    cout << "Leak array executed with size " << n << endl;
}

int main() {
    int leakSize;
    cout << "Enter size for leak array: ";
    cin >> leakSize;
    leakExample(leakSize);

    return 0;
}
