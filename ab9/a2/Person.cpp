#include <string>
#include <iostream>
#include "Person.h"

using namespace std;

string Person::get_nachname()
{
    return nachname;
}

string Person::get_vorname()
{
    return vorname;
}

void Person::print_name()
{
    cout << "Name: " << vorname << " " << nachname << endl;
}

void Person::set_nachname(string nachname)
{
    this->nachname = nachname;
}

Person::Person()
{
    cout << "Gib Vorname: ";
    getline(cin, vorname);
    cout << "Gib Nachname: ";
    getline(cin, nachname);
}

Person::Person(Person &p)
{
    this->nachname = p.nachname;
    this->vorname = p.vorname;
}

Person &Person::operator=(Person &p)
{
    if (this != &p) // protect against invalid self-assignment
    {
        this->vorname = p.vorname;
        this->nachname = p.nachname;
    }
    return *this;
}