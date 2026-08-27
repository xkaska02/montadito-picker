#pragma once

#include <string>
#include <fstream>
#include <iostream>

#include "Montadito.hpp"
#include "Ingredient.hpp"
#include "nlohmann/json.hpp"

using json = nlohmann::json;

class DataManipulator
{
private:
    std::string filename;
    std::ifstream file;
    
public:
    json data;
    json ingredients;
    std::vector<Montadito *> montaditos;
    void loadMontaditosInfo();
    void createMontaditos();
    void storeMontaditos();
    void loadIngredients();
    void createIngredients();
    void storeIngredient(Ingredient i);
    DataManipulator(std::string filename);
    ~DataManipulator() {}
};