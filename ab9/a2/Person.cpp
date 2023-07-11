#include <string>
#include <iostream>
#include "Person.h"

using namespace std;


string Person::get_nachname(){
    return nachname;
}

string Person::get_vorname(){
    return vorname;
}

void Person::print_name(){
    cout << "Name: " << vorname << " " << nachname << endl;
}

void Person::set_nachname(string nachname){
    this->nachname = nachname;
}

Person::Person(){
    cout << "Gib Vorname: ";
    getline(cin, vorname);
    cout << "Gib Nachname: ";
    getline(cin, nachname);
}