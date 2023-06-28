#include <string>
#include "Tier.h"
#include <iostream>


Tier::Tier(){
    std::cout << "Gib Tier Name: ";
    std::getline(std::cin, this->name);
    std::cout << "Gib Tier Alter: ";
    std::cin >> this->alter;
    std::cin.get();
}

Tier::Tier(std::string name, int alter){
    this->name = name;
    this->alter = alter;
}
