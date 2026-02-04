#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Capacity(vector<int>& v) {
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Empty? " << (v.empty() ? "Yes" : "No") << endl;
}

void Modifiers(vector<int>& v) {
    v.push_back(40);
    v.pop_back();
    v.insert(v.begin() + 1, 15);
    v.erase(v.begin() + 2);
    v.emplace_back(50);
    v.clear();
    v = {5, 2, 9, 1};
}

void Access(vector<int>& v) {
    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;
    cout << "At(2): " << v.at(2) << endl;
    cout << "Data[1]: " << v.data()[1] << endl;
}

void Iterator(vector<int>& v) {
    cout << "Forward iteration: ";
    for (auto it = v.begin(); it != v.end(); ++it) cout << *it << " ";
    cout << endl;
    cout << "Reverse iteration: ";
    for (auto rit = v.rbegin(); rit != v.rend(); ++rit) cout << *rit << " ";
    cout << endl;
}

void Operations(vector<int>& v) {
    sort(v.begin(), v.end());
    auto it = find(v.begin(), v.end(), 9);
    if (it != v.end()) cout << "Found 9 at index: " << (it - v.begin()) << endl;
    vector<int> v2 = {100, 200};
    v.swap(v2);
    cout << "After swap, v contains: ";
    for (int x : v) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> v = {10, 20, 30};
    Capacity(v);
    Modifiers(v);
    Access(v);
    Iterator(v);
    Operations(v);
    return 0;
}
