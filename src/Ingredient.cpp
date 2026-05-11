#include "Ingredient.hpp"
#include <algorithm>

Ingredient::Ingredient(int id_, std::string name_) : id(id_), name(name_){}  

std::vector<Alergens> Ingredient::getAlergens()
{
    return alergens;
}

void Ingredient::addAlergen(Alergens a)
{
    alergens.push_back(a);
}

void Ingredient::removeAlergen(Alergens a)
{
    alergens.erase(std::remove(alergens.begin(), alergens.end(), a), alergens.end()); // erase remove idiom based on google search to remove by value and not position
}
