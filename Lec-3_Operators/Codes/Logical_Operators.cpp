#include <iostream>
using namespace std;

void Equal(int a, int b)
{
    cout << boolalpha;
    cout << a << " == " << b << " is " << (a == b) << endl; // true if a equals b
}

void NotEqual(int a, int b)
{
    cout << boolalpha;
    cout << a << " != " << b << " is " << (a != b) << endl; // true if a not equal b
}

void Greater(int a, int b)
{
    cout << boolalpha;
    cout << a << " > " << b << " is " << (a > b) << endl; // true if a greater than b
}

void Less(int a, int b)
{
    cout << boolalpha;
    cout << a << " < " << b << " is " << (a < b) << endl; // true if a less than b
}

void GreaterEqual(int a, int b)
{
    cout << boolalpha;
    cout << a << " >= " << b << " is " << (a >= b) << endl; // true if a greater or equal
}

void LessEqual(int a, int b)
{
    cout << boolalpha;
    cout << a << " <= " << b << " is " << (a <= b) << endl; // true if a less or equal
}

int main()
{
    int a = 5;
    int b = 10;

    Equal(a, b);
    NotEqual(a, b);
    Greater(a, b);
    Less(a, b);
    GreaterEqual(a, b);
    LessEqual(a, b);

    return 0;
}
