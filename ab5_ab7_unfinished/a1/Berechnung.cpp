#include "iostream"
#include "Viereck.h"
using namespace std;

/*
Klassen splitten
default constructor
*/


int main(){

    double laenge, breite;
    Viereck viereck;

    cout << "Gib laenge groesser 0\n";
    laenge = viereck.UserInput();
    cout << "Gib breite groesser 0\n";
    breite = viereck.UserInput();

    viereck.SetLaengeBreite(breite, laenge);

    cout << "Gib laenge groesser 0\n";
    laenge = viereck.UserInput();
    cout << "Gib breite groesser 0\n";
    breite = viereck.UserInput();

    Viereck viereck2(laenge, breite);

    viereck.printLB();
    viereck2.printLB();

    //cout << viereck.GetBreite() << " " << viereck.GetLaenge();

}