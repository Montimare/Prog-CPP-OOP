#include <iostream>
#include <string>
#include "Tier.h"
#include "Katze.h"

using namespace std;

void identify(Tier& tier){
    cout << tier.getName() << " ist eine " << tier.getType() << ", hat " << tier.getBeine() << " Beine und ist " << tier.getAlter() << " Jahre alt" << endl;
}

int main() {
    Katze katze1;
    Katze katze2 = Katze("Mizie", 12, "Glueckskatze", 5);
    identify(katze1);
    identify(katze2);
}

//[Name] ist eine [Art], hat [Anzahl Beine] Beine und ist [Alter] Jahre alt"