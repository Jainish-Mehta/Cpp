#include <iostream>
using namespace std;

void PreIncrement(int a)
{
    int a1 = a;
    int b = ++a1; // increment is done before assigning the value
    cout << "Pre Increment of " << a << " is " << b << endl;
}

void PostIncrement(int a)
{
    int a2 = a;
    int b = a2++; // increment is done after assigning the value
    cout << "Post Increment of " << a << " is " << b << endl;
}

void PreDecrement(int a)
{
    int a3 = a;
    int b = --a3; // decrement is done before assigning the value
    cout << "Pre Decrement of " << a << " is " << b << endl;
}

void PostDecrement(int a)
{
    int a4 = a;
    int b = a4--; // decrement is done after assigning the value
    cout << "Post Decrement of " << a << " is " << b << endl;
}
int main()
{
    int a = 5;
    PreIncrement(a);
    PostIncrement(a);
    PreDecrement(a);
    PostDecrement(a);
    return 0;
}