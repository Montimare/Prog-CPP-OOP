#ifndef STUDIDATEN_H
#define STUDIDATEN_H
#include "Student.h"
#include "Adresse.h"
#include <string>

class StudiDaten: public Student, public Adresse{
private:

public:
    void print_alles();
    StudiDaten();
};

#endif