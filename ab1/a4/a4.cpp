#include "iostream"
#include "iomanip"
#include "string"
using namespace std;

int main() {
    int input;
    cout << "Wie viele Kapitel möchten Sie eingeben? ";
    cin >> input;
    cin.get();
    string inhaltsvereichnis[input];
    int seitenZahlen[input];
    
    for (int i = 0; i < input; i++)
    {
        cout << "Geben Sie die Überschrift für Kapitel Nr." << i+1 << " ein: ";
        getline(cin , inhaltsvereichnis[i]);
        cout << "Geben Sie die Seitenzahl ein: ";
        cin >> seitenZahlen[i];
        cin.get();
    }

    cout << setfill(' ');

    for (int i = 0; i < input; i++)
    {
        cout << inhaltsvereichnis[i] << setw (100 - inhaltsvereichnis[i].length()) << seitenZahlen[i] << endl;
    }
    
    

    //cout << "abc" << setfill('_') << setw(100) << "ende" << endl;

}

