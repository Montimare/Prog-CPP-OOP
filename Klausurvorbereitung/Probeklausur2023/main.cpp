#include <iostream>
#include <string>
#include <iomanip>
#include <memory>
#include <vector>

//2b pruefen
#include "Uhrzeit.h"
#include "Uhrzeit.h"

using namespace std;






class Wetter{
private:
int temperatur = 0;
Uhrzeit zeitpunkt;
public:
int get_temperatur(){
	return temperatur;
}
Uhrzeit get_zeitpunkt(){
	return zeitpunkt;
}
virtual string get_type(){
	return "Wetter";
}
virtual void info(){
	cout << "Temperatur: " << temperatur << "°C um ";
	zeitpunkt.print_uhrzeit();
	cout << get_type() << endl;
}
Wetter(): temperatur(0), zeitpunkt(Uhrzeit(0, 0)){}
Wetter(int temperatur, Uhrzeit a): temperatur(temperatur), zeitpunkt(a){}
};

class Sonnig: public Wetter{
private:
int sonnencreme = 0;
public:
string get_type() override{
	return "Sonnig";
}
void info(){
	//Wetter::info();
	cout << "Temperatur: " << get_temperatur() << "°C um ";
	get_zeitpunkt().print_uhrzeit();
	cout << "Wir empfehlen Sonnencreme mit Lichtschutzfaktor: " << sonnencreme << endl;
	cout << get_type() << endl;
}
Sonnig(): Wetter(), sonnencreme(0){
	cout << "Sonnig wurde erstellt" << endl;
}
Sonnig(int temperatur, Uhrzeit a, int sonnencreme): Wetter(temperatur, a), sonnencreme(sonnencreme){}
};

class Bewoelkt: public Wetter{
private:
double regen = 0.0;
public:
string get_type(){
	return "Bewoelkt";
}
void info(){
	//Wetter::info();
	cout << "Temperatur: " << get_temperatur() << "°C um ";
	get_zeitpunkt().print_uhrzeit();
  cout << fixed << setprecision(2);
	cout << "Regenwahscheinlichkeit: " << regen << "%." << endl;
	cout << get_type() << endl;
}
Bewoelkt(): Wetter(), regen(0){}
Bewoelkt(int temperatur, Uhrzeit a, double regen): Wetter(temperatur, a), regen(regen){}
};
   //3b pruefen
  void wettervorhersage(vector<Wetter*> heute){
    cout << " Wettervorhersage f�r Heute: " << endl;
    auto find_it = heute.begin(); 
    for(; find_it!=heute.end(); find_it++ ) {   
    (*find_it)->info();
    cout << (*find_it)->get_type() << endl;
    }
  }  
int main(){
    
     //2a) pruefen
    Uhrzeit a,b;
    const Uhrzeit c;
    a.set_uhrzeit(-12,77);
    b.set_uhrzeit(5,17);
    cout << "Uhrzeit a: ";
    a.print_uhrzeit();
    cout << "Uhrzeit b: ";
    b.print_uhrzeit();
    cout << "Uhrzeit c: ";
    c.print_uhrzeit();
    
    
    
     //2d pruefen
    Uhrzeit d(59,59); 
    cout << "Uhrzeit d: ";
    d.print_uhrzeit();
    
    
    
     //2e pruefen
    ++d;
    d++;
    cout << "Uhrzeit d plus eine Minute: ";
    d.print_uhrzeit();
    
    
    
    //3a pruefen
    Sonnig s;
    s.info();
    Bewoelkt t;
    t.info();
    
    
      
    //3b pruefen - globale Funktion wettervorhersage bitte auch entsperren
    vector<Wetter*> daten;
    
    Sonnig s2(29,a,20);
    daten.push_back(&s2);
    Uhrzeit einuhr(1,0);
    Bewoelkt t2(15,einuhr,7.3);
    daten.push_back(&t2);
    
    int i =2;
    Uhrzeit jetzt(i,0);
    Wetter now(i+7,jetzt);
    daten.push_back(&now);
    
    wettervorhersage(daten);
     
    
    
    return 0;
  }