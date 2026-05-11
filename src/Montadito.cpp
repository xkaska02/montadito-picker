#include "Montadito.hpp"

Montadito::Montadito(std::string name, std::string category, bool favorite, bool tried) : name(name), category(category), favorite(favorite), tried(tried) {}
Montadito::Montadito(std::string name, std::string category) : name(name), category(category), favorite(false), tried(false) {}


void Montadito::setFavorite(bool val)
{
    favorite = val;
}

void Montadito::setTried(bool val)
{
    tried = val;
}

bool Montadito::getFavorite()
{
    return favorite;
}

bool Montadito::getTried()
{
    return tried;
}
