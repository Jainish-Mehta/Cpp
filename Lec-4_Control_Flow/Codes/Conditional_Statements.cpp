#include <iostream>
using namespace std;

// if statement
void If(int number) {
    if (number > 0) {
        cout << "Number is positive" << endl;
    }
}

// if-else statement
void IfElse(int number) {
    if (number % 2 == 0) {
        cout << "Number is even" << endl;
    } else {
        cout << "Number is odd" << endl;
    }
}

// if-else if-else chain
void IfElseIfElse(int number) {
    if (number < 0) {
        cout << "Number is negative" << endl;
    } else if (number == 0) {
        cout << "Number is zero" << endl;
    } else {
        cout << "Number is positive" << endl;
    }
}

// switch statement
void checkSwitch(int day) {
    switch(day) {
        case 1: cout << "Monday" << endl; break;
        case 2: cout << "Tuesday" << endl; break;
        case 3: cout << "Wednesday" << endl; break;
        case 4: cout << "Thursday" << endl; break;
        case 5: cout << "Friday" << endl; break;
        case 6: cout << "Saturday" << endl; break;
        case 7: cout << "Sunday" << endl; break;
        default: cout << "Invalid day number!" << endl;
    }
}

int main() {
    int number, day;

    cout << "Enter a number: ";
    cin >> number;

    checkIf(number);
    checkIfElse(number);
    checkIfElseIfElse(number);

    cout << "\nEnter a day number (1-7): ";
    cin >> day;
    checkSwitch(day);

    return 0;
}
