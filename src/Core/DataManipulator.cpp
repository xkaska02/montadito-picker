#include "DataManipulator.hpp"

void DataManipulator::loadMontaditosInfo()
{
    std::cout << "loading..." << std::endl;
    std::fstream f(filename);
    data = json::parse(f);
    std::cout << "loaded" << std::endl;
}

void DataManipulator::createMontaditos()
{
    for(auto& elem : data)
    {
        // Montadito *m = (Montadito *) malloc(sizeof(Montadito *));
        Montadito* m = new Montadito(elem["name"], elem["category"], elem["favorite"], elem["tried"]);
        
        montaditos.push_back(m);
    }
    
    
    
}

void DataManipulator::storeMontaditos()
{
}

void DataManipulator::loadIngredients()
{
    std::cout << "loading ingredients..." << std::endl;
    std::fstream f("data/ingredients.json");
    ingredients = json::parse(f);
    std::cout << "ingeredients loaded" << std::endl;
}

void DataManipulator::createIngredients()
{
    for(auto &elem : ingredients){
        std::cout << elem << std::endl;
    }
}

void DataManipulator::storeIngredient(Ingredient i)
{
    
}

DataManipulator::DataManipulator(std::string filename) : filename(filename) {}