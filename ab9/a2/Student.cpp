#include "Student.h"
#include <iostream>

using namespace std;

void Student::print_mat(){
    cout << "Matrikelnummer: " << matrikelnummer << endl;
}

Student::Student(): Person(){
    cout << "Gib Matrikelnummer: ";
    cin >> matrikelnummer;
    cin.get();
}