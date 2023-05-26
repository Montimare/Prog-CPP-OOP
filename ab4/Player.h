#include <string>

// using namespace std; dont do this, causes namespace to be added multiple times to program when used in header

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
private:
    std::string name;
    int leben;
    double energie;
    Player();

public:
    std::string getName() const;
    int getLeben();
    double getEnergie();
    void setEnergie(double energie);
    void printStatus();
    int add_life();
    int lost_life();
    void change_energy(double energieChange);
    void watch_energy();
};

#endif