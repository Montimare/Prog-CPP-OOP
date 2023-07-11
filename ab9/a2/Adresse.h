#ifndef ADRESSE_H
#define ADRESSE_H
#include <string>
#include <iostream>
#include "Person.h"

class Adresse: public virtual Person{
private:
    std::string str;
    int plz;
    std::string ort;
public:
    void print_adresse();
    void set_str(std::string str);
    void set_plz(int plz);
    void set_ort(std::string ort);
    Adresse();
};

#endif