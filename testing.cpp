#include <iostream>
#include <string>

/*Task 1: Define and Print Enums
Goal: Get comfortable declaring and using enums.

Instructions:

Create an enum class Type with types like Fire, Water, Electric, Grass, Normal.

Write a function std::string typeToString(Type type) that converts a Type to a readable string.

Print all types in a loop.

// Output example:

Fire
Water
Electric
Grass
Normal

*/

enum Type {
    FIRE,
    WATER,
    ELECTRIC,
    GRASS,
    NORMAL,
    LAST
};

std::string typeToString(Type type){
    switch (type){
        case FIRE: return "Fire";
        case WATER: return "Water";
        case ELECTRIC: return "Electric";
        case GRASS: return "Grass";
        case NORMAL: return "Normal";
    }
    return "Uknown";
}

void printAllTypes(){
    for (int i = 0; LAST > i; i++){
        Type type = static_cast<Type>(i);
        std::cout << typeToString(type) << std::endl;
    }
}









/*Task 2: Use Enums in a Struct
Goal: Store enum values in a custom object.

Instructions:

Make a struct called Move that has a std::string name, Type type, and int power.

Create a few Move objects (e.g., "Thunderbolt", type Electric, power 90).

Print them out using your typeToString function.*/


struct {
    std::string name;
    Type type;
    int power;
} Move;

void printThunderbolt(){
    Move.name  = "Thunderbolt";
    Move.type  = ELECTRIC;
    Move.power = 90;

    std::cout << Move.name << " | " << typeToString(Move.type) << " Type" << " | " << "Power:" << Move.power << std::endl;

};

void printFlamethrower(){
    Move.name  = "Thunderbolt";
    Move.type  = FIRE;
    Move.power = 100;

    std::cout << Move.name << " | " << typeToString(Move.type) << " Type" << " | " << "Power:" << Move.power << std::endl;
}

void printHydrocannon(){
    Move.name  = "Hydrocannon";
    Move.type  = WATER;
    Move.power = 100;

    std::cout << Move.name << " | " << typeToString(Move.type) << " Type" << " | " << "Power:" << Move.power << std::endl;
}


/*Task 3: Matchups
Goal: Practice using enums with logic.

Instructions:

Create a function bool isSuperEffective(Type attack, Type defend) with basic logic:

Fire > Grass

Water > Fire

Electric > Water

Grass > Water

etc.

Print test results like:
Thunderbolt (Electric) vs Squirtle (Water): Super effective!
*/

void printWaterName(){
    Move.name = "Hydrocannon";
};

void printFireName(){
    Move.name = "Flamethrower";
};

void printElectricName(){
    Move.name = "Thunderbolt";
}

bool isSuperEffective(Type attack, Type defend){
    if (attack == WATER && defend == FIRE){
        printWaterName();
        std::cout << Move.name << " (" << typeToString(attack) << ") " << "vs. Charmander " << "(" << typeToString(defend) << "): Super effective!" << std::endl; 
    } else if (attack == FIRE && defend == GRASS) {
        printFireName();
        std::cout << Move.name << " (" << typeToString(attack) << ") " << "vs. Bulbasaur " << "(" << typeToString(defend) << "): Super effective!" << std::endl;
    } else if (attack == ELECTRIC && defend == WATER) {
        printElectricName();
        std::cout << Move.name << " (" << typeToString(attack) << ") " << "vs. Squirtle " << "(" << typeToString(defend) << "): Super effective!" << std::endl;
    } else return false;

return false;
}





int main(){
    std::cout << "Task 1: Define and print enums:" << "\n" << std::endl;
    printAllTypes();
    std::cout << std::endl;
    std::cout << "Task 2: Use enums in a struct" << "\n" << std::endl;
    printFlamethrower();
    printHydrocannon();
    printThunderbolt();
    std::cout << std::endl;
    std::cout << "Task 3: Matchups logic" << "\n" << std::endl;
    isSuperEffective (WATER, FIRE);
    isSuperEffective (ELECTRIC, WATER);
    isSuperEffective (FIRE, GRASS);
    return 0;
}