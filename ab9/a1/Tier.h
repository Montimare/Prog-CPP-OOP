#ifndef TIER_H
#define TIER_H

#include <string>

class Tier{
protected:
    std::string name;
    int alter;
public:
    Tier();
    //~Tier();
    //Tier(Tier&);
    Tier(std::string name, int alter);
    virtual std::string getType() = 0;
    virtual int getBeine() = 0;
    virtual std::string getName() = 0;
    virtual int getAlter() = 0;
};

#endif
