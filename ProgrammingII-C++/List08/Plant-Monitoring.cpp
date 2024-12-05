/*
Federal University of Mato Grosso
Subject: Programming II || List 09
Student: Raissa C. Cavalcanti

First Exercise
*/

#include <iostream>
using namespace std;

enum PlantType { Cacti, Ferns, Orchids, TotalPlants };

int main() {
    int moistureLevels[TotalPlants] = {0};
    int totalMoisture = 0;
    
    cout << "Enter the soil moisture levels for different types of plants:" << endl;
    
    for(int i = 0; i < TotalPlants; ++i) {
        cout << "Enter the moisture level for ";
        switch(i) {
            case Cacti: cout << "Cacti: "; break;
            case Ferns: cout << "Ferns: "; break;
            case Orchids: cout << "Orchids: "; break;
        }
        cin >> moistureLevels[i];
        totalMoisture += moistureLevels[i];
    }
    
    double averageMoisture = static_cast<double>(totalMoisture) / TotalPlants;
    cout << "Average moisture of all monitored plants: " << averageMoisture << endl;
    
    return 0;
}
