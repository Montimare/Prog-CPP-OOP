#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "Person.h"

class Student : public virtual Person
{
private:
    int matrikelnummer;
public:
    void print_mat();
    Student();
};

#endif