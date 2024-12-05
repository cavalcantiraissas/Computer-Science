/*
Federal University of Mato Grosso
Subject: Programming II || List 09
Student: Raissa C. Cavalcanti

Third Exercise
*/

#include <iostream>
#include <algorithm>
using namespace std;

enum class DayPeriod {
    Morning,
    Afternoon,
    Night
};

string dayPeriodToString(DayPeriod period) {
    switch (period) {
        case DayPeriod::Morning: return "Morning";
        case DayPeriod::Afternoon: return "Afternoon";
        case DayPeriod::Night: return "Night";
        default: return "Unknown";
    }
}

int main() {
    float temperatures[3];

    cout << "Enter the temperature readings for Morning, Afternoon, and Night:\n";
    for (int i = 0; i < 3; ++i) {
        cout << dayPeriodToString(static_cast<DayPeriod>(i)) << ": ";
        cin >> temperatures[i];
    }

    float maxTemp = *max_element(temperatures, temperatures + 3);
    float minTemp = *min_element(temperatures, temperatures + 3);
    float variation = maxTemp - minTemp;

    cout << "Temperature variation throughout the day: " << variation << " degrees.\n";

    return 0;
}
