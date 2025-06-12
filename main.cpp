// main menu lgoic and all

#include <iostream>
#include "pokemon.h"
#include "data.h"

void loadPokemonData();

int main(){

    Pokemon pikachu("Pikachu", "Electric", 25, 1, 2, 3, 4, 5, 6, 7);


    
    std::cout << allPokemon[0].species << std::endl;





    return 0;
}