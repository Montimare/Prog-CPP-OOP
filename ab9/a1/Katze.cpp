#include <iostream>
#include <string>
#include "Katze.h"

using namespace std;

Katze::Katze(): Tier(){
    this->type = "Katze";
    this->beine = 4;
}

Katze::Katze(std::string name, int alter, string type, int beine): Tier(name, alter){
    this->type = type;
    this->beine = beine;
}

std::string Katze::getType(){
    return this->type;
}

int Katze::getBeine(){
    return this->beine;
}

std::string Katze::getName(){
    return this->name;
}

int Katze::getAlter(){
    return this->alter;
}