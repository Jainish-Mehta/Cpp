#include <iostream>
using namespace std;

void Assign(int a)
{
    cout << "Initial assignment: a = " << a << endl;
}

void AddAssign(int a)
{
    int b = a;
    b += 5;
    cout << "After " << a << " += 5 → " << b << endl;
}

void SubAssign(int a)
{
    int b = a;
    b -= 3;
    cout << "After " << a << " -= 3 → " << b << endl;
}

void MulAssign(int a)
{
    int b = a;
    b *= 2;
    cout << "After " << a << " *= 2 → " << b << endl;
}

void DivAssign(int a)
{
    float b = a;
    b /= 4;
    cout << "After " << a << " /= 4 → " << b << endl;
}

void ModAssign(int a)
{
    int b = a;
    b %= 3;
    cout << "After " << a << " %= 3 → " << a << endl;
}

int main()
{
    int a = 10;

    Assign(a);
    AddAssign(a);
    SubAssign(a);
    MulAssign(a);
    DivAssign(a);
    ModAssign(a);

    return 0;
}
