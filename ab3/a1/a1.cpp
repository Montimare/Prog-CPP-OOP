#include "iostream"
using namespace std;
class Viereck{

    private:

    double laenge;
    double breite;

    public:

    double circumfrence(){
        return (2*laenge+2*breite);
    }
    double flaeche(){
        
    }

    double GetLaenge(){
        return laenge;
    }
    double GetBreite(){
        return breite;
    }
    void SetLaengeBreite(double breite,double laenge){
        this->breite = breite;
        this->laenge = laenge;
    }
};

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