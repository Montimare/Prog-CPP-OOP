#include "Viereck.h"

double Viereck::circumfrence(){
    return (2*this->laenge+2*this->breite);
}
double Viereck::flaeche(){
    return (this->laenge*this->breite);
}
double Viereck::GetLaenge(){
    return laenge;
}
double Viereck::GetBreite(){
    return breite;
}
void Viereck::SetLaengeBreite(double breite,double laenge){
    this->breite = breite;
    this->laenge = laenge;
}
Viereck::Viereck(){
    this->laenge = 10;
    this->breite = 10;
}