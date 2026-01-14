#include <iostream>
using namespace std;

void Equal(int a, int b)
{
    cout << boolalpha;
    cout << a << " == " << b << " is " << (a == b) << endl;
}

void NotEqual(int a, int b)
{
    cout << boolalpha;
    cout << a << " != " << b << " is " << (a != b) << endl;
}

void Greater(int a, int b)
{
    cout << boolalpha;
    cout << a << " > " << b << " is " << (a > b) << endl;
}

void Less(int a, int b)
{
    cout << boolalpha;
    cout << a << " < " << b << " is " << (a < b) << endl;
}

void GreaterEqual(int a, int b)
{
    cout << boolalpha;
    cout << a << " >= " << b << " is " << (a >= b) << endl;
}

void LessEqual(int a, int b)
{
    cout << boolalpha;
    cout << a << " <= " << b << " is " << (a <= b) << endl;
}

int main()
{
    int x = 5, y = 10;

    Equal(x, y);
    NotEqual(x, y);
    Greater(x, y);
    Less(x, y);
    GreaterEqual(x, y);
    LessEqual(x, y);

    return 0;
}
