#include <iostream>
#include "Player.h"

using namespace std;

int main(){
    Player player;
    player.printStatus();
    player.lost_life();
    player.lost_life();
    player.lost_life();
    player.printStatus();
}
