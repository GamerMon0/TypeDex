// class declaration for pokemon
#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>

class Pokemon{
    public:
        std::string species;
        std::string type;
        int number;
        int hp;
        int attack;
        int defense;
        int specialattack;
        int specialdefense;
        int speed;
        int total;

     Pokemon(std::string species, std::string type, int number,
            int hp, int attack, int defense, int specialattack,
            int specialdefense, int speed, int total){

            this->species = species; this->type = type; this->number = number;
            this->hp = hp; this->attack = attack; this->defense = defense;
            this->specialattack = specialattack; this-> specialdefense = specialdefense;
            this->speed = speed; this ->total = total;
    }

        void weak(); // for example: weak bulbasaur = grass poison type : weak to: fire flying ice psychic, resistant to: figthing water grass electric fairy, neutral to: normal poison ground rock bug ghjost steel dragon dark.
        void stats(); // for example stats bulbasaur = hp: 45, attack: 49, defense: 49, sp. attack: 65, sp. defense: 65, speed: 45 
};


#endif