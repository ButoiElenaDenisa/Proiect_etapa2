#include <iostream>
#include <fstream>

#include "Carte.h"
#include "Autor.h"
#include "Imprumut.h"
#include "Cititor.h"

#include "DBMS.h"

#include "Apreciere.h"
#include "ApreciereScurta.h"
#include "ApreciereCompusa.h"

using namespace std;

int main()
{
    // DBMS app;
    // app.run();

    // Autor a;
    // a.setNume("George");
    // a.setAutorId(1000);
    // Carte c1("O minte clara", "Betterself", a.getAutorId()),
    //     c2("Clasa se construieste", "Stelara", a.getAutorId()),
    //     c3, c4, c5;
    // a.adaugaCarte(c1);
    // a.adaugaCarte(c2);
    // cout << a;

    // c1 = c2;
    // cout << " >> Introduceti o noua carte pentru autorul " << a.getNume() << " (id=" << a.getAutorId() << ")\n";
    // cin >> c3;
    // // cout << "*";
    // a.adaugaCarte(c3);
    // cout << " >> Ati introdus cartea:\n"
    //      << c3 << endl;
    // a.eliminaCarte(2);

    // Cititor ana("Ana");
    // Data data = {3, 3, 2020};
    // if (!c3.getEsteImprumutata())
    // {
    //     Imprumut imprumut;
    //     imprumut = ana.imprumutaCarte(c3, data);
    //     c3.aFostImprumutata();
    //     cout << " >> " << ana << " .. a imprumutat" << c3;
    //     cout << " .. iar obiectul Imprumut creat este " << imprumut << endl;

    //     imprumut.prelungesteImprumut(3);
    //     cout << " >> Prelungim imprumutul cu 3 zile." << imprumut << endl;
    // }

    Apreciere* aprecieri[2];


    aprecieri[0] = new ApreciereScurta("Un carte electornica excelenta", 4.3);
    aprecieri[1] = new ApreciereCompusa("Jose este un jurnalist de toi care cauta adevarul", 8, 10, 9.2);

    cout << "Prima apreciere are valoarea " << aprecieri[0]->getValoareApreciere() << endl;
    cout << "A doua apreciere are valoarea " << aprecieri[1]->getValoareApreciere() << endl;

    return 0;
}
