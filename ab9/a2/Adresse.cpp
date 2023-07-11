#include "Adresse.h"
#include <iostream>
#include <string>

using namespace std;

void Adresse::print_adresse()
{
    cout << "Adresse: " << str << " " << plz << " " << ort << endl;
}
void Adresse::set_str(string str)
{
    this->str = str;
}
void Adresse::set_plz(int plz)
{
    this->plz = plz;
}
void Adresse::set_ort(string ort)
{
    this-> ort = ort;
}
Adresse::Adresse():Person()
{
    cout << "Gib strasse: ";
    getline(cin, str);
    cout << "Gib plz: ";
    cin >> plz;
    cin.get();
    cout << "Gib ort: ";
    getline(cin, ort);
}