#include "Viereck.h"
#include <string>
#include <iostream>

double Viereck::circumfrence()
{
    return (2 * this->laenge + 2 * this->breite);
}
double Viereck::flaeche()
{
    return (this->laenge * this->breite);
}
double Viereck::GetLaenge()
{
    return laenge;
}
double Viereck::GetBreite()
{
    return breite;
}
void Viereck::SetLaengeBreite(double breite, double laenge)
{
    if (laenge > 0 && breite > 0)
    {
        this->breite = breite;
        this->laenge = laenge;
    }
    else
    {
        std::cout << "Fehler: falsche Werte angegeben" << std::endl;
    }
}
double Viereck::UserInput()
{
    double input;
    std::string dump;
    while (1)
    {
        std::cin >> input;
        if (input > 0)
        {
            break;
        }
        std::cin.clear();
        std::getline(std::cin, dump);
    }
    return input;
}
void Viereck::input()
{
    std::cout << "Gib laenge groesser 0\n";
    this->laenge = UserInput();
    //hier noch breite
}
void Viereck::printLB()
{
    std::cout << "Länge: " << this->laenge << std::endl
              << "Breite: " << this->breite << std::endl;
}
Viereck::Viereck()
{
    this->laenge = 10;
    this->breite = 10;
}
Viereck::Viereck(double laenge, double breite)
{
    //SetLaengeBreite(); auf 1 setzen
    //set laenge breite nochmal mit richtigen werten (soll nicht machen wenn es nicht geht)
}

//bei den dinger inst das linke this und das rechte die übergebene variable
bool Viereck::operator <(const Viereck& viereck){
    if (laenge*breite < viereck.laenge*viereck.breite)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Viereck::operator >(const Viereck& viereck){
    if (laenge*breite > viereck.laenge*viereck.breite)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Viereck::operator ==(const Viereck& viereck){
    if (laenge*breite == viereck.laenge*viereck.breite)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Viereck::operator >=(const Viereck& viereck){
    if (laenge*breite >= viereck.laenge*viereck.breite)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Viereck::operator <=(const Viereck& viereck){
    if (laenge*breite <= viereck.laenge*viereck.breite)
    {
        return true;
    }
    else
    {
        return false;
    }
}