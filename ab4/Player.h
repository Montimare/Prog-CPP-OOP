#include <string>

using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

    class Player
    {
    private:
        string name = "Xaviette Morgentau";
        int leben = 3;
        double energie = 1;
    public:
        string getName() const;
        int getLeben();
        double getEnergie();
        void setEnergie(double energie);
        void printStatus();
    };

#endif