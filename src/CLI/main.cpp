#include <iostream>
#include "Core/Ingredient.hpp"
#include "Core/Montadito.hpp"
#include "Core/DataManipulator.hpp"

int main(int argc, char const *argv[])
{
    Ingredient a(0,"aceitunas de la abuela");
    std::cout << a.name << std::endl;
    Montadito m("Test Monty", "De la casa");

    std::cout << m << std::endl;

    DataManipulator dm("data/sampleMontadito.json");
    dm.loadMontaditosInfo();
    dm.createMontaditos();
    for(Montadito * m : dm.montaditos){
        std::cout << m->name << std::endl;
    }

    Ingredient b(1, "Bacon tiras");
    Alergen alg(CRUSTACEANS, AlergenNames_eng[CRUSTACEANS]);
    b.addAlergen(alg);
    std::cout << b << std::endl;    
    dm.loadIngredients();
    dm.createIngredients();

    

    return 0;
}
