#include "ApreciereScurta.h"
#include <cstring>
#include <iostream>

using namespace std;

ApreciereScurta::ApreciereScurta() : valoareApreciere(-1)
{
strcpy(mesaj, "");
}
ApreciereScurta::ApreciereScurta(char *m, double v)
{
    if (m)
    {
        strcpy(mesaj, m);
    }
    valoareApreciere = v;
}
ostream& operator<<(ostream& out, const ApreciereScurta& a)
{
    if (a.mesaj)
            out << "Mesaj: " << a.mesaj << endl;
    out << "Valoare apreciere: " << a.valoareApreciere << endl;
    return out;
}
// metodele abstracte din baza:
void ApreciereScurta::editeaza()
{
    cout << "Apreciere in prezent:" << endl;
    cout << *this << endl;
    cout << "Introduceti noul mesaj:";
    cin.getline(mesaj, 250);
    cout << "Introduceti noua valoare (din [0-5])";
    cin >> valoareApreciere;
}
double ApreciereScurta::getValoareApreciere() const
{
    return valoareApreciere;
}
