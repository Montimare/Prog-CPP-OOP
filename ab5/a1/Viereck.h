#ifndef VIERECK_H
#define VIERECK_H
class Viereck{

    private:

    double laenge;
    double breite;

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
};

#endif