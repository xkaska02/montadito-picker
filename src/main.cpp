#include <iostream>
#include "Ingredient.hpp"
#include "Montadito.hpp"


int main(int argc, char const *argv[])
{
    Ingredient a(0,"aceitunas de la abuela");
    std::cout << a.name << std::endl;
    Montadito m("Test Monty", "De la casa");

    std::cout << m.name << " " << m.category << " " << m.favorite << std::endl;
    return 0;
}
