#include "iostream"
using namespace std;

/*



*/


int main(){
    double laenge;
    double breite;
    Viereck viereck;

    while (1)
    {
        cout << "Gib laenge groesser 0\n";
        cin >> laenge;
        if (laenge > 0)
        {
            break;
        }
        
    }
    while (1)
    {
        cout << "Gib breite groesser 0\n";
        cin >> breite;
        if (breite > 0)
        {
            break;
        }
        
    }
    viereck.SetLaengeBreite(breite, laenge);






    cout << viereck.GetBreite() << " " << viereck.GetLaenge();

}