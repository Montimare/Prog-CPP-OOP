#ifndef KATZE_H
#define KATZE_H
#include "Tier.h"
#include <string>

class Katze:public Tier{
protected:
    std::string type;
    int beine;
public:
    Katze();
    Katze(std::string name, int alter, std::string type, int beine);
    std::string getType();
    int getBeine();
    std::string getName();
    int getAlter();
};

#endif
