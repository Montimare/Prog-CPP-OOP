#ifndef HELDENKLASSEN_H
#define HELDENKLASSEN_H
#include "held.h"
#include <string>

class Zwerg : public Held
{
private:
public:
    std::string getRasse() const;
    int getSchaden() const;
    double lebenspunkteBerechnen();
    Zwerg();
    Zwerg(std::string name);
    Zwerg(std::string name, double groesse, int alter);
    ~Zwerg();
};

class Mensch : public Held
{
private:
public:
    std::string getRasse() const;
    int getSchaden() const;
    double lebenspunkteBerechnen();
    Mensch();
    Mensch(std::string name);
    Mensch(std::string name, double groesse, int alter);
    ~Mensch();
};

class Elf : public Held
{
private:
public:
    std::string getRasse() const;
    int getSchaden() const;
    double lebenspunkteBerechnen();
    Elf();
    Elf(std::string name);
    Elf(std::string name, double groesse, int alter);
    ~Elf();
};

#endif