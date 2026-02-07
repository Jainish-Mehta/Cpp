#include <iostream>
using namespace std;

class Demo
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void SetValues()
    {
        a = 10;
        b = 20;
        c = 30;
    }
    void Display()
    {
        cout << "a: " << a << "\tb: " << b << "\tc: " << c << endl;
    }
};

class AccessDemo : public Demo
{
public:
    void ChangeValues()
    {
        // a=100; //Cannot change a as it is private in base class.
        b = 200; // Can change b as it is protected in base class.
        c = 300; // Can change c as it is public in base class.
    }
};

int main()
{
    Demo d;
    d.SetValues();
    cout << "Before changing: " << endl;
    d.Display();
    AccessDemo ad;
    ad.ChangeValues();
    cout << "After changing from AccessDemo: " << endl;
    ad.Display(); // Cannot change a from AccessDemo as it is private in base class.
    d.c = 40;
    cout << "After changing from Main: " << endl;
    d.Display(); // Cannot change a and b from main as they are private and protected respectively.
}