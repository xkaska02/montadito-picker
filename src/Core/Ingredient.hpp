#pragma once

#include <string>
#include <vector>
#include "Alergen.hpp"

class Ingredient
{
private:
    int id;
    std::vector<Alergen> alergens; // this could probably be public

public:
    std::string name;
    std::vector<Alergen> getAlergens();
    void addAlergen(Alergen a);
    void removeAlergen(Alergens_order order);

    friend std::ostream& operator<<(std::ostream& os, const Ingredient& obj);


    Ingredient(int id, std::string name);
    ~Ingredient() {}
};