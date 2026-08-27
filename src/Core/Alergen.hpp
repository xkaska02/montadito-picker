#pragma once
#include <string_view>

enum Alergens_order
{
    CEREALS,
    CRUSTACEANS,
    EGGS,
    FISH,
    PEANUTS,
    SOYBEANS,
    MILK,
    NUTS,
    CELERY,
    MUSTARD,
    SESAME_SEEDS,
    SULPHUR_DIOXIDE,
    LUPIN,
    MOLLUSCS    
};

constexpr std::string_view AlergenNames_eng[] = 
{
    "CEREALS",
    "CRUSTACEANS",
    "EGGS",
    "FISH",
    "PEANUTS",
    "SOYBEANS",
    "MILK",
    "NUTS",
    "CELERY",
    "MUSTARD",
    "SESAME_SEEDS",
    "SULPHUR_DIOXIDE",
    "LUPIN",
    "MOLLUSCS"    
};
class Alergen
{
private:
    /* data */
public:
    Alergens_order order;
    std::string_view name;
    Alergen(Alergens_order order, std::string_view name);
    ~Alergen(){};
};
