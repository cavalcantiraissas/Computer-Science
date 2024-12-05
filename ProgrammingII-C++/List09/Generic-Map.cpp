#include <iostream>
#include <map>
#include <string>
using namespace std;

template<typename K, typename V>
class Map {
private:
    map<K, V> map;

public:
    void addPair(const K& key, const V& value) {
        map[key] = value;
    }

    V findValue(const K& key) {
        if (map.find(key) != map.end()) {
            return map[key];
        } else {
            throw runtime_error("Key not found!");
        }
    }

    void listKeys() const {
        for (const auto& pair : map) {
            cout << "Key: " << pair.first << endl;
        }
    }
};

int main() {
    Map<string, int> map;
    map.addPair("João", 85);
    map.addPair("Maria", 90);

    map.listKeys();

    try {
        cout << "João's grade: " << map.findValue("João") << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
