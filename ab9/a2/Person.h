#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
private:
    std::string nachname;
    std::string vorname;
public:
    std::string get_nachname();
    std::string get_vorname();
    void print_name();
    void set_nachname(std::string);
    Person();
};

#endif