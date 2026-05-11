#pragma once

#include <string>

class Montadito
{
private:
    int id;

public:
    std::string name;
    std::string category;
    bool favorite;
    bool tried;

    void setFavorite(bool val);
    void setTried(bool val);

    bool getFavorite();
    bool getTried();

    Montadito(std::string name, std::string category, bool favorite, bool tried);
    Montadito(std::string name, std::string category);
    ~Montadito() {}
};