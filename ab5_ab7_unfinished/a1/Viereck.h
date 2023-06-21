#ifndef VIERECK_H
#define VIERECK_H
class Viereck{

    private:

    double laenge;
    double breite;
    static int anzahlVierecke;

    public:

    double circumfrence();
    double flaeche();

    double GetLaenge();
    double GetBreite();
    void SetLaengeBreite(double breite,double laenge);
    double UserInput();
    void input();
    void printLB();
    Viereck();
    Viereck(double laenge, double breite);
    bool operator<(const Viereck& viereck);
    bool operator>(const Viereck& viereck);
    bool operator ==(const Viereck& viereck);
    bool operator >=(const Viereck& viereck);
    bool operator <=(const Viereck& viereck);

};

#endif