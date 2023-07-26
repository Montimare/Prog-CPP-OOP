#ifndef UHRZEIT_H
#define UHRZEIT_H
#include <string>

class Uhrzeit{
private:
int stunde;
int minute;
public:
void set_uhrzeit(int stunde, int minute);
void print_uhrzeit() const;
void control();
Uhrzeit();
Uhrzeit(int stunde, int minute);
Uhrzeit& operator++ ();
Uhrzeit operator++ (int);
};

#endif