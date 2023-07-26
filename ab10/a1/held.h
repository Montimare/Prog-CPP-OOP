#ifndef HELD_H
#define HELD_H
#include <string>
#include <iostream>

class Held{
protected:
std::string name;
double groesse;
int alter;
bool status;
int LP;
int currentLP;

public:
void set_name(std::string name);
void set_groesse(double groesse);
void set_alter(int alter);
void setStatus(bool status);
std::string get_name() const;
int get_groesse() const;
int get_alter() const;
bool getStatus() const;
int getLP() const;
int getCurrentLP() const;
virtual std::string getRasse() const; //soll so
virtual int getSchaden() const; //soll so

//für spicker
friend std::ostream& operator<<(std::ostream& os, const Held& obj); //ist kaputt
friend bool operator==(const Held& obj1, const Held& obj2);
friend bool operator!=(const Held& obj1, const Held& obj2);

void changeCurrentLP(int x);
virtual double lebenspunkteBerechnen()const; // soll so
Held();
Held(int LP);
Held(std::string name);
Held(std::string name, int LP);
Held(std::string name, double groesse, int alter);
Held(std::string name, double groesse, int alter, int LP);
~Held();
};

#endif