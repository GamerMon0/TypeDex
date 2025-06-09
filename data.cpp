// list of all pokemon data and future loading csv function

#include "data.h"

std::vector<Pokemon> allPokemon;

void loadPokemonData(){
    Pokemon bulbasaur;
    bulbasaur.species = "Bulbasaur";
    bulbasaur.type = "Grass Poison";
    bulbasaur.number = 1;
    bulbasaur.hp = 45;
    bulbasaur.attack = 49;
    bulbasaur.defense = 49;
    bulbasaur.specialattack = 65;
    bulbasaur.specialdefense = 65;
    bulbasaur.speed = 45;
    bulbasaur.total = 318;

    allPokemon.push_back(bulbasaur);

    Pokemon ivysaur;
    ivysaur.species = "Ivysaur";
    ivysaur.type = "Grass Poison";
    ivysaur.number = 2;
    ivysaur.hp = 60;
    ivysaur.attack = 62;
    ivysaur.defense = 63;
    ivysaur.specialattack = 80;
    ivysaur.specialdefense = 80;
    ivysaur.speed = 60;
    ivysaur.total = 405;

    allPokemon.push_back(ivysaur);

}