#include <string>
#include <iostream>
//#include "Person.h"
//#include "Student.h"
//#include "Adresse.h"
#include "StudiDaten.h"

using namespace std;

int main(){
    StudiDaten a;
    a.print_alles();
    Student b;
    b.print_name();
    b.print_mat();
}

/*
WICHTIG:
ALLE klassen in den compiler schreiben
The warning you're seeing is due to the order in which the base classes are initialized in the StudiDaten constructor. In C++, base classes are initialized in the order they are declared in the class definition, not in the order they are listed in the constructor's initializer list.
etwas ist 'redefined' oder 'previous definition', dann headerguards vergessen oder falsch
*/