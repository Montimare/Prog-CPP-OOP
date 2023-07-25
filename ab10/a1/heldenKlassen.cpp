#include "heldenKlassen.h"
#include <string>
#include <cmath>

std::string Zwerg::getRasse() const
{
    return "Ich bin ein Zwerg.";
}
int Zwerg::getSchaden() const
{
    return 100;
}
double Zwerg::lebenspunkteBerechnen()
{
    if (get_alter() >= 0 && get_alter() <= 3)
    {
        return round(get_groesse() * 0.1);
    }
    else if (get_alter() >= 4 && get_alter() <= 15)
    {
        return get_groesse();
    }
    else if (get_alter() >= 16 && get_alter() <= 60)
    {
        return round(get_groesse() * 2);
    }
    else
    {
        return round(get_groesse() * 3);
    }
}
Zwerg::Zwerg() : Held(static_cast<int>(lebenspunkteBerechnen()))
{
}
Zwerg::Zwerg(std::string name) : Held(name, static_cast<int>(lebenspunkteBerechnen()))
{
}
Zwerg::Zwerg(std::string name, double groesse, int alter) : Held(name, groesse, alter)
{
    LP = lebenspunkteBerechnen();
    currentLP = LP;
}
Zwerg::~Zwerg()
{
}

std::string Mensch::getRasse() const
{
    return "Ich bin ein Mensch.";
}
int Mensch::getSchaden() const
{
    return 120;
}
double Mensch::lebenspunkteBerechnen()
{
    return (Held::lebenspunkteBerechnen() + 30);
}
Mensch::Mensch() : Held(static_cast<int>(lebenspunkteBerechnen()))
{
}
Mensch::Mensch(std::string name) : Held(name, static_cast<int>(lebenspunkteBerechnen()))
{
}
Mensch::Mensch(std::string name, double groesse, int alter) : Held(name, groesse, alter, static_cast<int>(lebenspunkteBerechnen()))
{
}
Mensch::~Mensch()
{
}

std::string Elf::getRasse() const
{
    return "Ich bin ein Elf.";
}
int Elf::getSchaden() const
{
    return 150;
}
double Elf::lebenspunkteBerechnen()
{
    return Held::lebenspunkteBerechnen();
}
Elf::Elf() : Held(static_cast<int>(lebenspunkteBerechnen()))
{
}
Elf::Elf(std::string name) : Held(name, static_cast<int>(lebenspunkteBerechnen()))
{
}
Elf::Elf(std::string name, double groesse, int alter) : Held(name, groesse, alter, static_cast<int>(lebenspunkteBerechnen()))
{
}
Elf::~Elf()
{
}