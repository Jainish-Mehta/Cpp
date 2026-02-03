#include <iostream>
using namespace std;

void callByValue(int x)
{
    x++;
    cout << "Inside callByValue: " << x << endl;
}

void callByReference(int &x)
{
    x++;
    cout << "Inside callByReference: " << x << endl;
}

void swapByValue(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside swapByValue: x=" << x << " y=" << y << endl;
}

void swapByReference(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside swapByReference: x=" << x << " y=" << y << endl;
}

void usingPointer(int *x, int *y)
{
    *x = *x + 1;
    *y *= 2;
    cout << "Inside usingPointer: *x=" << *x << " *y=" << *y << endl;
}

int main()
{
    int a = 5;
    callByValue(a);
    cout << "After callByValue: " << a << endl;

    callByReference(a);
    cout << "After callByReference: " << a << endl;

    int b = 10, c = 20;
    swapByValue(b, c);
    cout << "After swapByValue: b=" << b << " c=" << c << endl;

    swapByReference(b, c);
    cout << "After swapByReference: b=" << b << " c=" << c << endl;

    usingPointer(&a, &b);

    return 0;
}
