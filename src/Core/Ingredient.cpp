#include "Ingredient.hpp"
#include <algorithm>
#include <iostream>


Ingredient::Ingredient(int id, std::string name) : id(id), name(name){}  

std::vector<Alergen> Ingredient::getAlergens()
{
    return alergens;
}

void Ingredient::addAlergen(Alergen a)
{
    alergens.push_back(a);
}

void Ingredient::removeAlergen(Alergens_order order)
{
    // alergens.erase(std::remove(alergens.begin(), alergens.end(), [&](Alergen a){return a.order == order;}), alergens.end()); // erase remove idiom based on google search to remove by value and not position
    // todo
}

std::ostream &operator<<(std::ostream &os, const Ingredient &obj)
{
    std::cout << obj.id << " " << obj.name << std::endl;
    for (size_t i = 0; i < obj.alergens.size(); i++)
    {
        std::cout << obj.alergens[i].name << std::endl;
    }
    return os;   
}
