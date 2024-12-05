#include <iostream>
#include <string>
#include <functional>
using namespace std;

template<typename T>
class Item {
private:
    string name;
    T value;

public:
    Item(const string& name, T value) : name(name), value(value) {}

    bool operator<(const Item& other) const {
        return std::less<T>()(this->value, other.value);
    }

    void displayItem() const {
        cout << "Item: " << name << ", Value: " << value << endl;
    }
};

int main() {
    Item<int> item1("Item A", 10);
    Item<int> item2("Item B", 20);

    item1.displayItem();
    item2.displayItem();

    if (item1 < item2) {
        cout << "Item A is smaller than Item B." << endl;
    } else {
        cout << "Item A is not smaller than Item B." << endl;
    }

    return 0;
}
