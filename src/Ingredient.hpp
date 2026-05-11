#pragma once

#include <string>
#include <vector>
#include "Alergens.hpp"

class Ingredient
{
private:
    int id;
    std::vector<Alergens> alergens; // this could probably be public

public:
    std::string name;
    std::vector<Alergens> getAlergens();
    void addAlergen(Alergens a);
    void removeAlergen(Alergens a);
    Ingredient(int id, std::string name);
    ~Ingredient() {}
};