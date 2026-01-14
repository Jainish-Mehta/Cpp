#include <iostream>
using namespace std;

void BitwiseAnd(int a, int b)
{
    cout << a << " & " << b << " = " << (a & b) << endl; // bitwise AND 1&1 is 1 else 0
}

void BitwiseOr(int a, int b)
{
    cout << a << " | " << b << " = " << (a | b) << endl; // bitwise OR 0&0 is 0 else 1
}

void BitwiseXor(int a, int b)
{
    cout << a << " ^ " << b << " = " << (a ^ b) << endl; // bitwise XOR if both are 1
}

void BitwiseNot(int a)
{
    cout << "~" << a << " = " << (~a) << endl; // bitwise NOT
}

void BitwiseLeftShift(int a)
{
    cout << a << " << 1 = " << (a << 1) << endl; // shift left by 1
}

void BitwiseRightShift(int a)
{
    cout << a << " >> 1 = " << (a >> 1) << endl; // shift right by 1
}

int main()
{
    int a = 5; // binary: 0101
    int b = 3; // binary: 0011

    BitwiseAnd(a, b);
    BitwiseOr(a, b);
    BitwiseXor(a, b);
    BitwiseNot(a);
    BitwiseLeftShift(a);
    BitwiseRightShift(a);

    return 0;
}
