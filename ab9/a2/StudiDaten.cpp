#include "StudiDaten.h"
#include <iostream>
#include <string>

using namespace std;

void StudiDaten::print_alles(){
    cout << "Alles:" << endl;
    print_name();
    print_mat();
    print_adresse();
}

StudiDaten::StudiDaten(): Student(), Adresse() //order has to be same as #included in StudiDaten.h
{

}