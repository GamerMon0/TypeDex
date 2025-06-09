#ifndef TYPE_CHART_H
#define TYPE_CHART_H

#include <vector>
#include <iostream>
#include <string>

extern std::vector <std::string> allTypes;

class Types{
    public:
    std::string Type;
    std::string Resistances;
    std::string Weaknesses; 
    std::string Immune;
    std::string Neutral;
};

void loadTypeData();
#endif

