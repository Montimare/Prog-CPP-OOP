#include "iostream"

using namespace std;

namespace fragenspace
{

    bool fragen()
    {
        int tmp = 0;
        char tmp2;
        cout << "Bist du glücklich?" << endl;
        cin >> tmp2;
        cin.get();
        if (tmp2 == 'y' || tmp2 == 'Y')
        {
            tmp++;
            tmp2 = 'n';
        }
        cout << "Ist heute Montag?" << endl;
        cin >> tmp2;
        cin.get();
        if (tmp2 == 'y' || tmp2 == 'Y')
        {
            tmp++;
        }
        cout << "Lebst du in Deutschland?" << endl;
        cin >> tmp2;
        cin.get();
        if (tmp2 == 'y' || tmp2 == 'Y')
        {
            tmp++;
        }
        cout << "Ist der Koala ein Bär?" << endl;
        cin >> tmp2;
        cin.get();
        if (tmp2 == 'y' || tmp2 == 'Y')
        {
            tmp++;
        }
        if (tmp >= 3)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
} // namespace fragenspace

int cast(double a)
{
    return a * 10;
}

double cast(int a)
{
    return float(a) / 4;
}

void cast(float a)
{
    cout << "ZEIT UND LUST" << endl;
}

char hello;

int main()
{
    int true_var = 0;
    double false_var = 0;
    float zul;
    cast(zul);
    bool ergebnis = fragenspace::fragen();

    if (ergebnis)
    {
        true_var = 10;
    }
    else
    {
        false_var = 0.31;
    }

    if (true_var)
    {
        false_var = cast(true_var);
    }
    else
    {
        true_var = cast(false_var);
    }

    cout << "BOOLEAN: " << ergebnis << endl
         << true_var << endl
         << false_var << endl;
}