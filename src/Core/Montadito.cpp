#include "Montadito.hpp"
#include <iostream>

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

std::ostream &operator<<(std::ostream &os, const Montadito &obj)
{
    std::cout << "name:\"" << obj.name << "\", category:\"" << obj.category << "\", favorite:" << obj.favorite << ", tried:" << obj.tried << std::endl;
    return os;
}
