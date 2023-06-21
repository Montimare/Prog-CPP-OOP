#include <iostream>
#include <string>
#include <new>

using namespace std;

class Person
{

public:
    Person();
    ~Person();
    Person(const Person &p);
    void n_ausgabe() const;
    Person& operator= (const Person& p);

private:
    char *vorname;
    int vlaenge;
    char *nachname;
    int nlaenge;

    friend class Kunde;
};

Person::Person()
{

    string v;
    string n;
    cout << "Vorname: ";
    getline(cin, v);
    cout << "Nachname: ";
    getline(cin, n);
    int i;

    vlaenge = v.length() + 1;
    nlaenge = n.length() + 1;

    vorname = new char[vlaenge];

    for (i = 0; i < v.length(); i++)
    {
        vorname[i] = v[i];
    }

    vorname[i] = '\0';

    nachname = new char[nlaenge];

    for (i = 0; i < n.length(); i++)
    {

        nachname[i] = n[i];
    }

    nachname[i] = '\0';
    cout << "Personen Objekt " << vorname << " " << nachname << " erstellt." << endl;
}

Person::~Person()
{
    delete[] vorname;
    delete[] nachname;
    cout << "Personen Objekt " << vorname << " " << nachname << " zerstört." << endl;
}

Person::Person(const Person &p)
{
    vlaenge = p.vlaenge;
    nlaenge = p.nlaenge;

    vorname = new char[vlaenge];
    for (int i = 0; i < vlaenge; i++)
    {
        vorname[i] = p.vorname[i];
    }
    
    nachname = new char[nlaenge];
    for (int i = 0; i < nlaenge; i++)
    {
        nachname[i] = p.nachname[i];
    }

    cout << "Personen Objekt " << vorname << " " << nachname << " kopiert." << endl;
}

void Person::n_ausgabe() const
{
    cout << "Name: " << vorname << " " << nachname << endl;
}

Person& Person::operator= (const Person& p)
{
    if (this == &p){
        return *this;
    }
    delete[] vorname;
    delete[] nachname;

    vlaenge = p.vlaenge;
    nlaenge = p.nlaenge;

    vorname = new char[vlaenge];
    for (int i = 0; i < vlaenge; i++)
    {
        vorname[i] = p.vorname[i];
    }
    
    nachname = new char[nlaenge];
    for (int i = 0; i < nlaenge; i++)
    {
        nachname[i] = p.nachname[i];
    }

    cout << "Personen Objekt " << vorname << " " << nachname << " kopiert." << endl;

    //Person(p);
    return *this;
}


class Kunde
{
    Person kunde;
    long kundennummer;

public:
    Kunde(long nummer);
    Kunde(const Person& neukunde, long nummer);
    Kunde(const Kunde& k);
    Kunde& operator=(const Kunde& k);
    void print() const;
};

Kunde::Kunde(long nummer) : kundennummer(nummer) {}                                            // Initialisierungsliste mit leerem Körper (leer, da keine weiteren Attribute) und Initialisierung der Kundennummer
Kunde::Kunde(const Person& neukunde, const long nummer) : kunde(neukunde), kundennummer(nummer) // Initialisierungsliste mit leerem Körper (leer, da keine weiteren Attribute) und Initialisierung der Kundennummer und des Kunden (Person) mit dem übergebenen Objekt neukunde (Kopie) und der Kundennummer nummer (Kopie)
{
}
Kunde::Kunde(const Kunde& k):kunde(k.kunde), kundennummer(k.kundennummer){}

Kunde& Kunde::operator=(const Kunde& k)
{
    if (this == &k) {
        return *this;
    }

    kunde = k.kunde;
    kundennummer = k.kundennummer;

    return *this;
}

void Kunde::print() const
{

    cout << "Die Kundennummer des Kunden " << kunde.vorname << " " << kunde.nachname << " lautet: " << kundennummer << endl;
}

Kunde kunde_anlegen()
{
    long nr;
    cout << "Neuen Kunden anlegen!" << endl;
    Person neu;
    cout << "Bitte geben Sie die Kundennummer ein: ";
    cin >> nr;
    cin.ignore();

    Kunde k{neu, nr};

    return k;
}

//Kunde kunde_anlegen()
//{
//    long nr;
//    cout << "Neuen Kunden anlegen!" << endl;
//    Person neu;
//    cout << "Bitte geben Sie die Kundennummer ein: ";
//    cin >> nr;
//    cin.ignore();
//
//    Kunde k{neu, nr};
//
//    return k;
//}

int main()
{

    Kunde neuer{kunde_anlegen()};
    Kunde dagobert{9999};

    neuer.print();
    dagobert.print();

    dagobert = neuer;

    neuer.print();
    dagobert.print();

    int a[] = {1,2,3,4,5,6,7};
}


/////////////////////////////
//Das Problem in Ihrem Code ist, dass Sie mehrmals Kopien von Objekten erstellen und diese dann löschen. Dies führt dazu, dass der Speicher für einige Objekte mehrmals freigegeben wird, was zu undefiniertem Verhalten und fehlerhafter Ausgabe führt.
//
//Um das Problem zu beheben, sollten Sie den Kopierkonstruktor und den Zuweisungsoperator für die Kunde-Klasse verwenden. Da Sie bereits den Kopierkonstruktor und den Zuweisungsoperator für die Person-Klasse definiert haben, können Sie diese auch in der Kunde-Klasse verwenden.
//
//Hier ist die geänderte Kunde-Klasse mit dem Kopierkonstruktor und dem Zuweisungsoperator:
//
//class Kunde
//{
//    Person kunde;
//    long kundennummer;
//
//public:
//    Kunde(long nummer);
//    Kunde(const Person& neukunde, long nummer);
//    Kunde(const Kunde& k); // Kopierkonstruktor
//    Kunde& operator=(const Kunde& k); // Zuweisungsoperator
//    void print() const;
//};
//
//Kunde::Kunde(long nummer) : kundennummer(nummer) {}
//Kunde::Kunde(const Person& neukunde, long nummer) : kunde(neukunde), kundennummer(nummer) {}
//
//// Kopierkonstruktor
//Kunde::Kunde(const Kunde& k) : kunde(k.kunde), kundennummer(k.kundennummer) {}
//
//// Zuweisungsoperator
//Kunde& Kunde::operator=(const Kunde& k)
//{
//    if (this == &k) {
//        return *this;
//    }
//
//    kunde = k.kunde;
//    kundennummer = k.kundennummer;
//
//    return *this;
//}
//Dann ändern Sie die Funktion kunde_anlegen(), um eine Referenz auf das Person-Objekt an den Kunde-Konstruktor zu übergeben:
//
//Kunde kunde_anlegen()
//{
//    long nr;
//    cout << "Neuen Kunden anlegen!" << endl;
//    Person neu;
//    cout << "Bitte geben Sie die Kundennummer ein: ";
//    cin >> nr;
//    cin.ignore();
//
//    Kunde k{neu, nr};
//
//    return k;
//}
//Mit diesen Änderungen sollte Ihr Code korrekt funktionieren, ohne unerwünschte Kopien und Speicherfreigaben.