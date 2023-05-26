#include "Player.h"
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

Player::Player(){
    this->energie = 0.2;
    this->leben = 4;
    this->name = "Xaviette Dosenkohl";
}

string Player::getName() const
{
    return this->name;
}
int Player::getLeben()
{
    return this->leben;
}
double Player::getEnergie()
{
    return this->energie;
}
void Player::setEnergie(double energie)
{
    this->energie = energie;
    watch_energy();
}
void Player::printStatus()
{
    cout << setfill(' ') << setprecision(2) << fixed;
    cout << setw(20) << "PLAYER STATUS: " << endl;

    cout << setfill('-') << setw(50) << "\n";

    cout << setfill(' ');
    cout << setw(20) << "Name: " << getName() << endl;
    cout << setw(20) << "Leben: " << getLeben() << endl;
    cout << setw(20) << "Energie: " << getEnergie() * 100 << "%" << endl;

    cout << setfill('-') << setw(50) << "\n";
}
int Player::add_life()
{
    this->leben++;
    return leben;
}
int Player::lost_life()
{
    this->leben--;
    if (leben == 0)
    {
        cout << "Game Over!" << endl;
    }
    else
    {
        cout << "Leben verloren!" << endl;
    }
    return leben;
}
void Player::change_energy(double energieChange)
{
    this->energie += energieChange;
    watch_energy();
}
void Player::watch_energy()
{
    if (this->energie > 1)
    {
        this->energie = 1;
    }
    else if (this->energie <= 0)
    {
        lost_life();
        this->energie = 1;
    }
    return;
}