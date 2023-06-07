#include <iostream>
#include <string>
#include <new>



using namespace std;

class Person {
 
public: 
  Person();
  void n_ausgabe();
  
  
private:  
  char* vorname;
  int vlaenge;
  char* nachname;
  int nlaenge;
  
  friend class Kunde;
};


Person::Person() {
 
  string v;
  string n;
  cout << "Vorname: ";
  getline(cin,v);
  cout << "Nachname: ";
  getline(cin,n);
  int i;
  
  vlaenge = v.length()+1; 
  nlaenge = n.length()+1;
  
  vorname = new char [vlaenge]; 
  
  for(i=0; i<v.length();i++){
   
    vorname[i] = v[i];
    
  }
  
  vorname[i]='\0';
  
  nachname = new char [nlaenge];
  
  for(i=0; i<n.length();i++){
   
    nachname[i] = n[i];
    
  }
  
  nachname[i]='\0';
  
}


void Person::n_ausgabe(){
 cout << "Name: " << vorname << " " << nachname << endl; 
}


class Kunde{
  
  Person kunde;
 
  long kundennummer;
  
  
public:
  
  Kunde(long nummer);
  Kunde(Person neukunde, long nummer);
  void print();
  
};

Kunde::Kunde(long nummer) : kundennummer(nummer) {}
Kunde::Kunde(Person neukunde, long nummer) : kunde(neukunde), kundennummer(nummer) { 
}

void Kunde::print() {
 
  cout << "Die Kundennummer des Kunden " << kunde.vorname << " " << kunde.nachname << " lautet: " << kundennummer << endl;
  
}

Kunde kunde_anlegen(){
 
  long nr;
  cout << "Neuen Kunden anlegen!" << endl;
  Person neu;
  cout << "Bitte geben Sie die Kundennummer ein: ";
  cin >> nr;
  cin.ignore();
  
  Kunde k{neu,nr};
  
  
  
  
  return k;
  
}

int main() {
  
 
  
 Kunde neuer{kunde_anlegen()}; 
 
 Kunde dagobert{9999};
 
 neuer.print();
 dagobert.print();
 
 dagobert=neuer;
 
 neuer.print();
 dagobert.print();
  
}