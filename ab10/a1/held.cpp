#include <string>
#include "held.h"
#include <cmath>
#include <iostream>

void Held::set_name(std::string name)
{
    this->name = name;
}
void Held::set_groesse(double groesse)
{
    this->groesse = groesse*100;
    LP = lebenspunkteBerechnen();
    if (currentLP > LP)
    {
        currentLP = LP;
        std::stoi("123");
    }
}
void Held::set_alter(int alter)
{
    this->alter = alter;
    LP = lebenspunkteBerechnen();
    if (currentLP > LP)
    {
        currentLP = LP;
    }
}
void Held::setStatus(bool status)
{
    this->status = status;
}
std::string Held::get_name() const
{
    return name;
}
int Held::get_groesse() const
{
    return groesse;
}
int Held::get_alter() const
{
    return alter;
}
bool Held::getStatus() const
{
    return status;
}
int Held::getLP() const
{
    return LP;
}
int Held::getCurrentLP() const
{
    return currentLP;
}

std::string Held::getRasse() const
{
    return "Super-Duper Held";
}

int Held::getSchaden() const
{
    return 0;
}

std::ostream &operator<<(std::ostream &os, const Held &obj)
{
    os << obj.name << ", Alter: ";
    os << obj.alter;
    os << ", Groesse: ";
    os << obj.groesse;
    os << ", Lebenspunkte: ";
    os << obj.currentLP;
    os << "/";
    os << obj.LP;
    return os;
}


bool operator==(const Held &obj1, const Held &obj2)
{
    if (obj1.name == obj2.name && obj1.alter == obj2.alter && obj1.groesse == obj2.groesse && obj1.LP == obj2.LP)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator!=(const Held &obj1, const Held &obj2)
{
    return !(obj1 == obj2);
}

void Held::changeCurrentLP(int x)
{
    currentLP += x;
    if (currentLP > LP)
    {
        currentLP = LP;
    }
    if (currentLP < 0)
    {
        currentLP = 0;
        // HIER KOMMT BESTIMMT NOCH WAS
    }
}

double Held::lebenspunkteBerechnen()const
{
    if (alter >= 0 && alter <= 3)
    {
        return round(groesse * 0.1);
    }
    else if (alter >= 4 && alter <= 15)
    {
        return groesse;
    }
    else if (alter >= 16 && alter <= 60)
    {
        return round(groesse * 2);
    }
    else
    {
        return round(groesse * 1.5);
    }
}
Held::Held() : name("defaultHeld"), groesse(170.3), alter(20), status(1)
{
    LP = lebenspunkteBerechnen();
    currentLP = LP;
}

Held::Held(int LP) : name("defaultHeld"), groesse(170.3), alter(20), status(1), LP(LP), currentLP(LP)
{
}

Held::Held(std::string name) : name(name), groesse(170.3), alter(20), status(1)
{
    LP = lebenspunkteBerechnen();
    currentLP = LP;
}

Held::Held(std::string name, int LP) : name(name), groesse(170.3), alter(20), status(1), LP(LP), currentLP(LP)
{
}

Held::Held(std::string name, double groesse, int alter) : name(name), groesse(groesse*100), alter(alter), status(1)
{
    LP = lebenspunkteBerechnen();
    currentLP = LP;
}

Held::Held(std::string name, double groesse, int alter, int LP) : name(name), groesse(groesse*100), alter(alter), status(1), LP(LP), currentLP(LP)
{
}

Held::~Held()
{
}