// list of all pokemon data and future loading csv function

#include "data.h"

std::vector<Pokemon> allPokemon;

void loadPokemonData(){
    Pokemon bulbasaur("Bulbasaur", "Grass Poison", 1, 45, 49, 49, 65, 65, 45, 318);
    
    allPokemon.push_back(bulbasaur);

    Pokemon ivysaur("Ivysaur", "Grass Poison", 2, 60, 62, 63, 80, 80, 60, 405);

    allPokemon.push_back(ivysaur);

}