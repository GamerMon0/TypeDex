// type compatibility
#include <iostream>
#include "type_chart.h"

std::vector<Types> allTypes;

void loadTypeData(){
    Types normal;
    normal.Type        = "Normal";
    normal.Resistances = "None";
    normal.Weaknesses  = "Fighting";
    normal.Immune      = "Ghost";
    normal.Neutral     = "Normal, Flying, Poison, Ground, Rock, Bug, Steel, Fire, Water, Grass, Electric, Psychic, Ice, Dragon, Dark, Fairy";  

    allTypes.push_back(normal);

    Types fighting;
    fighting.Type = "Fighting";
    fighting.Resistances = "Rock, Bug, Dark";
    fighting.Weaknesses  = "Flying, Psychic, Fairy";
    fighting.Immune      = "None";
    fighting.Neutral     = "Normal, Fighting, Poison, Ground, Ghost, Steel, Fire, Water, Grass, Electric, Ice, Dragon";

    Types flying;
    flying.Type = "Flying";
    flying.Resistances = "Fighting, Bug, Grass";
    flying.Weaknesses = "Rock, Electric, Ice";
    flying.Immune = "Ground";
    flying.Neutral = "Normal, Flying, Poison, Ghost, Steel, Fire, Water, Psychic, Dragon, Dark, Fairy";

    allTypes.push_back(flying);

    Types poison;
    poison.Type = "Poison";
    poison.Resistances = "Fighting, Poison, Bug, Grass, Fairy";
    poison.Weaknesses = "Ground, Psychic";
    poison.Immune = "None";
    poison.Neutral = "Normal, Flying, Rock, Ghost, Steel, Fire, Water, Electric, Ice, Dragon, Dark";

    allTypes.push_back(poison);

    Types ground;
    ground.Type = "Ground";
    ground.Resistances = "Poison, Rock";
    ground.Weaknesses = "Water, Grass, Ice";
    ground.Immune = "Electric";
    ground.Neutral = "Normal, Fighting, Flying, Ground, Bug, Ghost, Steel, Fire, Psychic, Dragon, Dark, Fairy";

    allTypes.push_back(ground);

    Types rock;
    rock.Type = "Rock";
    rock.Resistances = "Normal, Flying, Poison, Fire";
    rock.Weaknesses = "Fighting, Ground, Steel, Water, Grass";
    rock.Immune = "None";
    rock.Neutral = "Rock, Bug, Ghost, Electric, Psychic, Ice, Dragon, Dark, Fairy";

    allTypes.push_back(rock);

    Types bug;
    bug.Type = "Bug";
    bug.Resistances = "Fighting, Ground, Grass";
    bug.Weaknesses = "Flying, Rock, Fire";
    bug.Immune = "None";
    bug.Neutral = "Normal, Poison, Bug, Ghost, Steel, Water, Electric, Psychic, Ice, Dragon, Dark, Fairy";

    allTypes.push_back(bug);

    Types ghost;
    ghost.Type = "Ghost";
    ghost.Resistances = "Poison, Bug";
    ghost.Weaknesses = "Ghost, Dark";
    ghost.Immune = "Normal, Fighting";
    ghost.Neutral = "Flying, Ground, Rock, Steel, Fire, Water, Grass, Electric, Psychic, Ice, Dragon, Fairy";
    allTypes.push_back(ghost);

    Types steel;
    steel.Type = "Steel";
    steel.Resistances = "Normal, Flying, Rock, Bug, Steel, Grass, Psychic, Ice, Dragon, Fairy";
    steel.Weaknesses = "Fighting, Ground, Fire";
    steel.Immune = "Poison";
    steel.Neutral = "Ghost, Water, Electric, Dark";
    allTypes.push_back(steel);

    Types fire;
    fire.Type = "Fire";
    fire.Resistances = "Bug, Steel, Fire, Grass, Ice, Fairy";
    fire.Weaknesses = "Ground, Rock, Water";
    fire.Immune = "None";
    fire.Neutral = "Normal, Flying, Poison, Ghost, Electric, Psychic, Dragon, Dark";
    allTypes.push_back(fire);

    Types water;
    water.Type = "Water";
    water.Resistances = "Steel, Fire, Water, Ice";
    water.Weaknesses = "Grass, Electric";
    water.Immune = "None";
    water.Neutral = "Normal, Fighting, Flying, Poison, Ground, Rock, Bug, Ghost, Psychic, Dragon, Dark, Fairy";
    allTypes.push_back(water);

    Types grass;
    grass.Type = "Grass";
    grass.Resistances = "Ground, Water, Grass, Electric";
    grass.Weaknesses = "Flying, Poison, Bug, Fire, Ice";
    grass.Immune = "None";
    grass.Neutral = "Normal, Fighting, Rock, Ghost, Steel, Psychic, Dragon, Dark, Fairy";
    allTypes.push_back(grass);

    Types electric;
    electric.Type = "Electric";
    electric.Resistances = "Flying, Steel, Electric";
    electric.Weaknesses = "Ground";
    electric.Immune = "None";
    electric.Neutral = "Normal, Fighting, Poison, Rock, Bug, Ghost, Fire, Water, Grass, Psychic, Ice, Dragon, Dark, Fairy";
    allTypes.push_back(electric);

    Types psychic;
    psychic.Type = "Psychic";
    psychic.Resistances = "Fighting, Psychic";
    psychic.Weaknesses = "Bug, Ghost, Dark";
    psychic.Immune = "None";
    psychic.Neutral = "Normal, Flying, Poison, Ground, Rock, Steel, Fire, Water, Grass, Electric, Ice, Dragon, Fairy";
    allTypes.push_back(psychic);

    Types ice;
    ice.Type = "Ice";
    ice.Resistances = "Ice";
    ice.Weaknesses = "Fighting, Rock, Steel, Fire";
    ice.Immune = "None";
    ice.Neutral = "Normal, Flying, Poison, Ground, Bug, Ghost, Water, Grass, Electric, Psychic, Dragon, Dark, Fairy";
    allTypes.push_back(ice);

    Types dragon;
    dragon.Type = "Dragon";
    dragon.Resistances = "Fire, Water, Grass, Electric";
    dragon.Weaknesses = "Ice, Dragon, Fairy";
    dragon.Immune = "None";
    dragon.Neutral = "Normal, Fighting, Flying, Poison, Ground, Rock, Bug, Ghost, Steel, Psychic, Dark";
    allTypes.push_back(dragon);

    Types dark;
    dark.Type = "Dark";
    dark.Resistances = "Ghost, Dark";
    dark.Weaknesses = "Fighting, Bug, Fairy";
    dark.Immune = "Psychic";
    dark.Neutral = "Normal, Flying, Poison, Ground, Rock, Steel, Fire, Water, Grass, Electric, Ice, Dragon";
    allTypes.push_back(dark);

    Types fairy;
    fairy.Type = "Fairy";
    fairy.Resistances = "Fighting, Bug, Dark";
    fairy.Weaknesses = "Poison, Steel";
    fairy.Immune = "Dragon";
    fairy.Neutral = "Normal, Flying, Ground, Rock, Ghost, Fire, Water, Grass, Electric, Psychic, Ice";
    allTypes.push_back(fairy);
};