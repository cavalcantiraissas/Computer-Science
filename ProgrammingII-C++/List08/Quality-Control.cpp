/*
Federal University of Mato Grosso
Subject: Programming II || List 09
Student: Raissa C. Cavalcanti

Second Exercise
*/

#include <iostream>
#include <vector>

using namespace std;

enum ProductType { TypeA, TypeB, TypeC, TotalProductTypes };
enum QualityLevel { High, Medium, Low, TotalQualityLevels };

int main() {
    int products[TotalProductTypes][TotalQualityLevels] = {};

    cout << "Enter the quantities of products for each type and quality level:\n";
    for (int type = 0; type < TotalProductTypes; ++type) {
        for (int quality = 0; quality < TotalQualityLevels; ++quality) {
            cout << "Type " << type << ", Quality " << quality << ": ";
            cin >> products[type][quality];
        }
    }

    cout << "\nTotal products of high quality for each type:\n";
    for (int type = 0; type < TotalProductTypes; ++type) {
        cout << "Type " << type << ": " << products[type][High] << endl;
    }

    return 0;
}
