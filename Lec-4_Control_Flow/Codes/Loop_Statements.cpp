#include <iostream>
using namespace std;

// for loop
void ForLoop(int n) {
    cout << "For loop: ";
    for (int i = 0; i < n; i++) {
        cout << i << " ";
    }
    cout << endl;
}

// while loop
void WhileLoop(int n) {
    cout << "While loop: ";
    int i = 0;
    while (i < n) {
        cout << i << " ";
        i++;
    }
    cout << endl;
}

// do-while loop
void DoWhileLoop(int n) {
    cout << "Do-While loop: ";
    int i = 0;
    do {
        cout << i << " ";
        i++;
    } while (i < n);
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    ForLoop(n);
    WhileLoop(n);
    DoWhileLoop(n);

    return 0;
}
