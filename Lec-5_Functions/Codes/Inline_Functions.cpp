#include <iostream>
using namespace std;

inline int Sum(int x)
{
    return x + x;
}

inline int Square(int x)
{
    return x * x;
}

inline int Cube(int x)
{
    return x * x * x;
}

int main()
{
    cout << "Sum of 5 is " << Sum(5) << endl;
    cout << "Square of 5 is " << Square(5) << endl;
    cout << "Cube of 5 is " << Cube(5) << endl;
    return 0;
}
