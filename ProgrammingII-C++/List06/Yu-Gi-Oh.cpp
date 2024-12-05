/*
Federal University of Mato Grosso
Course: Programming II
Student: Raissa Cavalcanti
*/

// First Exercise: "Yu-Gi-Oh!" Simulation

#include <iostream>
#include <string>
#include <map>

using namespace std;

class Card {
protected: 
    string name;
    string type;
public:
    Card(string n = "", string t = "") : name(n), type(t) {}
    string getName() const { return name; }
    string getType() const { return type; }

    friend Card operator+(const Card &c1, const Card &c2);
};

class MonsterCard : public Card {
public:
    MonsterCard(string n) : Card(n, "Monster") {}
};

class SpellCard : public Card {
public:
    SpellCard(string n) : Card(n, "Spell") {}
};

class EquipCard : public Card {
public:
    EquipCard(string n) : Card(n, "Equipment") {}
};

// Map defining the fusions
map<pair<string, string>, Card> fusionMap;

void initializeFusionMap() {
    fusionMap[make_pair("Koumori Dragon", "Saggi the Dark Clown")] = Card("Reaper of the Cards", "Monster");
    fusionMap[make_pair("Beast Fangs", "Beast Fangs")] = Card("Eatgaboon", "Trap");
    fusionMap[make_pair("Dark Magic", "Dragon")] = Card("Blackland Fire Dragon", "Monster");
    fusionMap[make_pair("Dragon", "Machine")] = Card("Metal Dragon", "Monster");
    fusionMap[make_pair("Dark Spellcaster", "Ryu-Kishin")] = Card("Ryu-Kishin Powered", "Monster");
    fusionMap[make_pair("Dragon Capture Jar", "Mooyan Curry")] = Card("Dragon Capture Jar", "Spell");
    fusionMap[make_pair("Hinotama", "Hinotama")] = Card("Final Flame", "Spell");
    fusionMap[make_pair("Dark Energy", "Acid Trap Hole")] = Card("Dark Hole", "Spell");
    fusionMap[make_pair("Electro-whip", "Metalmorph")] = Card("Raigeki", "Spell");
    fusionMap[make_pair("Goblin’s Secret Remedy", "Goblin’s Secret Remedy")] = Card("Soul of the Pure", "Trap");
    fusionMap[make_pair("Legendary Sword", "Sword of Dark Destruction")] = Card("Kunai with Chain", "Equipment");
    fusionMap[make_pair("Legendary Sword", "Sparks")] = Card("Salamandra", "Equipment");
    fusionMap[make_pair("Machine Conversion Factory", "Silver Bow & Arrow")] = Card("Winged Trumpeter", "Equipment");
    fusionMap[make_pair("Castle of Dark Illusions", "Dark-Piercing Light")] = Card("Bright Castle", "Equipment");
    fusionMap[make_pair("Elegant Egotist", "Horn of the Unicorn")] = Card("Curse of Tri-Horned Dragon", "Monster");
}

// Operator overloading for +
Card operator+(const Card &c1, const Card &c2) {
    pair<string, string> combo1 = make_pair(c1.getName(), c2.getName());
    pair<string, string> combo2 = make_pair(c2.getName(), c1.getName());

    if (fusionMap.find(combo1) != fusionMap.end()) {
        return fusionMap[combo1];
    } else if (fusionMap.find(combo2) != fusionMap.end()) {
        return fusionMap[combo2];
    } else {
        return Card("Invalid Fusion", "Unknown");
    }
}

int main() {
    // Initialize the fusion map
    initializeFusionMap();

    // Example of fusions
    MonsterCard monster1("Koumori Dragon");
    MonsterCard monster2("Saggi the Dark Clown");
    SpellCard spell1("Dragon Capture Jar");
    SpellCard spell2("Mooyan Curry");
    EquipCard equip1("Legendary Sword");
    EquipCard equip2("Sword of Dark Destruction");

    Card fusion1 = monster1 + monster2;
    Card fusion2 = spell1 + spell2;
    Card fusion3 = equip1 + equip2;

    cout << "Fusion Result 1: " << fusion1.getName() << " (" << fusion1.getType() << ")\n";
    cout << "Fusion Result 2: " << fusion2.getName() << " (" << fusion2.getType() << ")\n";
    cout << "Fusion Result 3: " << fusion3.getName() << " (" << fusion3.getType() << ")\n";

    return 0;
}
