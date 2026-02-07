#include <iostream>
using namespace std;

class Box
{
private:
    int length;
    int breadth;
    int height;

protected:
    string label;

public:
    Box(int l, int b, int h, string lbl)
    {
        length = l;
        breadth = b;
        height = h;
        label = lbl;
    }

    void showLabel()
    {
        cout << "Box Label: " << label << endl;
    }

    friend class Inspector;
};

class Inspector
{
public:
    void showDetails(Box &b)
    {
        cout << "Inspector accessing private members:" << endl;
        cout << "Length: " << b.length << endl;
        cout << "Breadth: " << b.breadth << endl;
        cout << "Height: " << b.height << endl;

        cout << "Inspector accessing protected member:" << endl;
        cout << "Label: " << b.label << endl;
    }
};

class DerivedBox : public Box
{
public:
    DerivedBox(int l, int b, int h, string lbl) : Box(l, b, h, lbl) {}

    void changeLabel(string newLabel)
    {
        label = newLabel;
    }
};

int main()
{
    Box b1(10, 5, 3, "GiftBox");

    b1.showLabel();

    Inspector insp;
    insp.showDetails(b1);

    DerivedBox db(20, 10, 5, "StorageBox");
    db.showLabel();
    db.changeLabel("UpdatedStorageBox");
    db.showLabel();

    return 0;
}
