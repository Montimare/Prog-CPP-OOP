class Viereck{

    private:

    double laenge;
    double breite;

    public:

    double circumfrence(){
        return (2*this->laenge+2*this->breite);
    }
    double flaeche(){
        return (this->laenge*this->breite);
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
    Viereck(){
        this->laenge = 10;
        this->breite = 10;
    }
};