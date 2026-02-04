#include <iostream>
using namespace std;

void PointerArithematic()
{
    int arr[3] = {10, 20, 30};
    cout << "Array ELements are: ";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    int *p = arr;
    cout << endl
         << "Before increment: " << "*p: " << (*p) << " & p: " << p << endl;
    p++;
    cout << "After increment: " << "*p: " << (*p) << " & p: " << p << endl;
    cout << "<-------------------------------------->" << endl;
}

void NullPointer()
{
    int *p = nullptr;
    if (p == nullptr)
    {
        cout << "Pointer is null" << endl;
        cout << "<-------------------------------------->" << endl;
    }
}

void PointerToPointer()
{
    int x = 5;
    int *p = &x;
    int **pp = &p;
    cout << **pp << endl;
    cout << "<-------------------------------------->" << endl;
}

void PointerToArray()
{
    int arr[4] = {1, 2, 3, 4};
    int (*p)[4] = &arr;
    for (int i = 0; i < 4; i++)
    {
        cout << "Value at index " << i << ": " << (*p)[i] << endl;
        cout << "Address of index " << i << ": " << (p + i) << endl;
    }
    cout << "<-------------------------------------->" << endl;
}

int main()
{
    int x = 10;
    int *ptr;
    ptr = &x;

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Address of x: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;
    cout << "<-------------------------------------->" << endl;
    PointerArithematic();
    NullPointer();
    PointerToPointer();
    PointerToArray();
    return 0;
}