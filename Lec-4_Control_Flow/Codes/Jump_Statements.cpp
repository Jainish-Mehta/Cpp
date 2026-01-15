#include <iostream>
using namespace std;

// break statement
void Break(int a) {
    cout << "Break demo: ";
    for (int i = 0; i < a; i++) {
        if (i == 5) break; // exits loop when i == 5
        cout << i << " ";
    }
    cout << endl;
}

// continue statement
void Continue(int b) {
    cout << "Continue demo: ";
    for (int i = 0; i < b; i++) {
        if (i % 2 == 0) continue; // skips even numbers
        cout << i << " ";
    }
    cout << endl;
}

// return statement
int Numbers(int a, int b) {
    return a + b; // exits function immediately with result
}

// goto statement (discouraged, but shown for completeness)
void Goto(int a) {
    cout << "Goto demo: ";
    int i = 0;
start: // label
    cout << i << " ";
    i++;
    if (i < a) goto start; // jumps back to label
    cout << endl;
}

int main() {
    int a=6;
    int b=12;
    Break(a);
    Continue(b);

    cout << "Return demo: "<<a<<" + "<<b<<" = " << Numbers(a, b) << endl;

    Goto(a);

    return 0;
}
