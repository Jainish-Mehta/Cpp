#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;
    int *marks;

public:
    // Default Constructor
    Student()
    {
        name = "Unknown";
        age = 0;
        marks = new int(0);
        cout << "Default Constructor Activated\n";
    }

    // Parameterized Constructor
    Student(string n, int a, int m)
    {
        name = n;
        age = a;
        marks = new int(m);
        cout << "Parameterized Constructor Activated\n";
    }

    // Copy Constructor
    Student(const Student &s)
    {
        name = s.name;
        age = s.age;
        marks = new int(*(s.marks));
        cout << "Copy Constructor Activated\n";
    }

    void display()
    {
        cout << name << " is " << age << " years old with marks " << *marks << endl;
    }

    ~Student()
    {
        delete marks;
    }
};

int main()
{
    Student s1;
    Student s2("Alice", 21, 90);
    Student s3("Bob", 21, 98);
    cout << "\nDefault Constructor:\n";
    s1.display();

    cout << "\nParameterized Constructor:\n";
    s2.display();

    cout << "\nCopy Constructor:\n";
    s3.display();

    return 0;
}
