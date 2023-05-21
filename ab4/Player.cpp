#include "Player.h"
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;
using PLAYER_H::Player;

    string Player::getName() const{
        return this->name;
    }
    int getLeben(){
        return this->leben;
    }
    double getEnergie(){
        return this->energie;
    }
    void setEnergie(double energie){
        this->energie = energie;
    }
    void printStatus(){
        cout << setfill('-') << setw(100);
        cout << "PLAYER STATUS:\n";

}
