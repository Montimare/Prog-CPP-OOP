#include <iostream>
#include <string>

using namespace std;

/*
    TODO:
    d) Ergänzen Sie, wenn nicht bereits vorhanden, geeignete Konstruktoren und einen Destruktor und versehen Sie diese mit einem Indikatorsatz.
    e) Stellen Sie zwei Kopien von ihrem Programm her (raum2.cpp und raum3.cpp)!
    Überlegen Sie wie Sie die Unterschiede von public Vererbung, protected Vererbung und private Vererbung anhand ihrer Klassen zeigen können.
    f) Überladen Sie < und >  für die Klasse Schraege.
*/

////////////////////////////////////////
class Boden_I
{
private:
    double breite;
    double laenge;
    string bodenbelag;

public:
    Boden_I(/* args */);
    ~Boden_I();
    double get_breite();
    double get_laenge();
    string get_bodenbelag();
    void einlesen();
};

Boden_I::Boden_I(/* args */)
{
    breite = 5;
    laenge = 4;
    bodenbelag = "Laminat";
}

Boden_I::~Boden_I()
{
}

double Boden_I::get_breite()
{
    return breite;
}

double Boden_I::get_laenge()
{
    return laenge;
}

string Boden_I::get_bodenbelag()
{
}

void Boden_I::einlesen()
{
}

////////////////////////////////////////
class Raum_I : public Boden_I
{
private:
    double hoehe;

public:
    Raum_I();
    double get_hoehe();
    void einlesen();
};

Raum_I::Raum_I() : Boden_I()
{
    hoehe = 2;
}

double Raum_I::get_hoehe()
{
    return hoehe;
}

void Raum_I::einlesen()
{
    Boden_I::einlesen();
}

////////////////////////////////////////
class Quader_I : public Raum_I
{
private:
public:
    Quader_I();
    double get_volumen();
    double get_wohnflaeche();
};

Quader_I::Quader_I() : Raum_I()
{
}

double Quader_I::get_volumen()
{
    return get_breite() * get_laenge() * get_hoehe();
}

double Quader_I::get_wohnflaeche()
{
}

////////////////////////////////////////
class Schraege_I : public Raum_I
{
private:
public:
    Schraege_I();
    double get_volumen();
    double get_wohnflaeche();
};

Schraege_I::Schraege_I() : Raum_I()
{
}

double Schraege_I::get_volumen() //V = h*b*l*1/2
{
    /*
    Da sich bei der Schräge die Höhe des Raumes ändert, hier folgenden Hinweis.
    Die Länge des Raumes für die gilt, dass die Höhe >=2 ist berechnet sich durch: Länge -2*(Länge/Höhe)
    Die Länge des Raumes für die gilt, dass die Höhe >=1 ist berechnet sich durch: Länge -(Länge/Höhe)
    (Hinweis: Um die Länge des Raumes zu berrechnen für die gilt, dass die Höhe >=1, aber <2 ist, muss noch etwas abgezogen werden).
    */
}

double Schraege_I::get_wohnflaeche()
{
}

////////////////////////////////////////
int main()
{
    Quader_I quader;
    cout << "Quader Volumen: " << quader.get_volumen() << endl;
}