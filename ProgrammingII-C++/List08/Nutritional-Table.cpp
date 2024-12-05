/*
Federal University of Mato Grosso
Subject: Programming II || List 09
Student: Raissa C. Cavalcanti

Fourth Exercise
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum class Nutrient {
    Calories,
    Proteins,
    Carbohydrates,
    TotalNutrients 
};

enum class Food {
    Apple,
    Banana,
    ChickenBreast,
    TotalFoods 
};

string getNutrientName(Nutrient nutrient) {
    switch (nutrient) {
        case Nutrient::Calories: return "Calories";
        case Nutrient::Proteins: return "Proteins";
        case Nutrient::Carbohydrates: return "Carbohydrates";
        default: return "Unknown";
    }
}

string getFoodName(Food food) {
    switch (food) {
        case Food::Apple: return "Apple";
        case Food::Banana: return "Banana";
        case Food::ChickenBreast: return "Chicken Breast";
        default: return "Unknown";
    }
}

int main() {
    vector<vector<int>> nutritionalInfo(static_cast<int>(Food::TotalFoods), vector<int>(static_cast<int>(Nutrient::TotalNutrients)));

    nutritionalInfo[static_cast<int>(Food::Apple)] = {95, 0, 25};         
    nutritionalInfo[static_cast<int>(Food::Banana)] = {105, 1, 27};     
    nutritionalInfo[static_cast<int>(Food::ChickenBreast)] = {165, 31, 0}; 

    int foodChoice;
    cout << "Choose a food to check (0 - Apple, 1 - Banana, 2 - Chicken Breast): ";
    cin >> foodChoice;

    if (foodChoice < 0 || foodChoice >= static_cast<int>(Food::TotalFoods)) {
        cout << "Invalid food!" << endl;
        return 1;
    }

    Food selectedFood = static_cast<Food>(foodChoice);

    cout << "Nutritional information for " << getFoodName(selectedFood) << ":" << endl;
    for (int i = 0; i < static_cast<int>(Nutrient::TotalNutrients); ++i) {
        cout << getNutrientName(static_cast<Nutrient>(i)) << ": " << nutritionalInfo[foodChoice][i] << endl;
    }

    int totalCalories = 0;
    char moreFoods;
    do {
        cout << "Do you want to add more foods to the meal? (Y/N): ";
        cin >> moreFoods;
        if (moreFoods == 'Y' || moreFoods == 'y') {
            cout << "Choose another food (0 - Apple, 1 - Banana, 2 - Chicken Breast): ";
            cin >> foodChoice;

            if (foodChoice >= 0 && foodChoice < static_cast<int>(Food::TotalFoods)) {
                totalCalories += nutritionalInfo[foodChoice][static_cast<int>(Nutrient::Calories)];
            } else {
                cout << "Invalid food!" << endl;
            }
        }
    } while (moreFoods == 'Y' || moreFoods == 'y');

    cout << "Total calories consumed in the meal: " << totalCalories << " calories." << endl;

    return 0;
}
