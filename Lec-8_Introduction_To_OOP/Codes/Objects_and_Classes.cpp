#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int age;

    void Display()
    {
        cout << "Name: " << name << "\tAge: " << age << endl;
    }
}; 

int main()
{
    Student s1;
    s1.name="Alice";
    s1.age=21;
    s1.Display();

    s1.name="Bob";
    s1.age=22;
    s1.Display();
}