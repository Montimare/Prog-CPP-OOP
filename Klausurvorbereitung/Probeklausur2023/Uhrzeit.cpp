#include "Uhrzeit.h"
#include <iostream>

using namespace std;

void Uhrzeit::set_uhrzeit(int stunde, int minute){
    this->stunde = stunde;
    this->minute = minute;
    control();
}
void Uhrzeit::print_uhrzeit() const{
    cout << "Es ist: " << stunde << ":" << minute << " Uhr" << endl;
}
void Uhrzeit::control(){
    if (stunde > 23 || stunde < 0){
        stunde = 0;
        cout << "u dumb?" << endl;
    }
    if (minute > 59 || minute < 0){
        minute = 0;
        cout << "u dumb?" << endl;
    }
}
Uhrzeit::Uhrzeit(){
    stunde = 0;
    minute = 0;
}
Uhrzeit::Uhrzeit(int stunde, int minute){
    this-> stunde = stunde;
    this-> minute = minute;
    control();
}

Uhrzeit& Uhrzeit::operator++ (){
    if (minute == 59){
        stunde++;
        minute = 0;
    } else {
        minute++;
    }
    return *this;
}

Uhrzeit Uhrzeit::operator++ (int){
    Uhrzeit temp = *this;
    if (minute == 59){
        stunde++;
        minute = 0;
    } else {
        minute++;
    }
    return temp;
}   