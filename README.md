# Buțoi Elena Denisa, grupa 211



# Etapa 2

1. Clasa abstracta folosita este Apreciere, mostenita atat de ApreciereScurta cat si de ApreciereCompusa
2. Interfata folosita este IClasificabil, cu doua metode virtuale adaugaApreciere() si apreciereMedie(), dar si un vector STL de aprecieri, implementata atat in Jurnalist cat si in EBook.
3. Clasa abstracta folosita este Apreciere
4. Am demonstrat metodele virtuale prin a declara doua Aprecieri (o apreciere de tip ApreciereScurta si o apreciere de tip ApreciereCompusa) in main. Pentru ambele am apelat getValoareApreciere(), functie care difera pentru fiecare tip de Apreciere (relatie ISA)
5. Clasele din etapa 1 pe care le-am extins sunt Autor (extinsa ca Jurnalist) si Carte (extinsa ca EBook)
6. Pentru a exemplifica HAS A avem atat clasa Autor de la etapa 1, care contine un sir de obiecte Carte, cat si noile clase care implementeaza IClasifiabil, deoarece ambele contin un vector de pointeri la obiecte de tip Apreciere.


## Mai jos am pastrat descrierea celei de a doua etape, pentru a putea verifica usor noile clase:



## Descrierea generala a temei alese

Am ales sa implementam o aplicatie care sa gestioneze cartile dintr-o biblioteca.

## Etapa 1

### Clasele si implementarea lor

In prima etapa, am implementat urmatoarele clase:

1. Carte
2. Autor
3. Cititor
4. Imprumut

Pentru a folosi standardele C++ am scris clasele sub forma de fisiere sursa si fisiere header
In toate clasele am implementat atat constructorii ceruti, cat si . Singurul tip de membru static l-am folosit in clasele Carte, Cititor si Autor pentru a avea carteId, cititorId si autorId diferite pentru fiecare obiect instantiat.

Ordinea in care am implementat metodele este aceiasi pentru fiecare clasa: constructori, cunstructor de copiere, gettere, setters, operatorul =, operatorii de flux, ceilalti operatori de la pasul 7, destructorul si la sfarsit functionalitatile.

Legat de operatorii de la pasul 7 ([], ++, --, <, ==) pot spune ca doar operatorul== l-am implementat cu un scop, si anume testarea egalitatii intre obiecte. Pe restul i-am implementat, deoarece asa ni s-a cerut, dar nu au un rol bine definit.

### Functionalitatile

Pentru fiecare clasa am implementat o functionalitate:

1. Carte - metoda aFostImprumutata, care are rolul de a actualiza in obiect ca aceasta care este deja imprumutata, prin setarea false a variabilei __esteImprumutata__. In etapele urmatoare ne vom folosi de acest lucru pentru gestionarea imprumuturilor.
2. Autor - metodele **adaugaCarte(Carte&)** si **eliminaCarte(int)**. Prima adauga o noua carte autorului, iar cea de-a doua elimina carte de pe un anume indice in obiectul autor.
3. Cititor - metoda **Imprumut imprumutaCarte(Carte&, Data)**. Rolul metodei este de a copia obiectul Carte in sirul **listaCartiImprumutate** din obiectul Cititor. Metoda returneaza obiectul de tip Imprumut rezultat din datele cartii, autorului si a datei.
4. Imprumut - metoda **prelungesteImprumut(int)**. Aceasta prelungeste date de returnare a cartii cu un numar de zile.

### Clasa extra 

In plus, am adaugat si o clasa DBMS (Database Management System) care va fi aplicatia finala, cu rolul de a gestiona intreaga biblioteca. Aceasta este in plus, pentru aceasta etapa, si nu este inca functionala.

### testarea claselor

**Mentionez** ca in main() am declarat obiecte din fiecare clasa si am apelat toate functionalitatile implementate, pentru a simplifica evaluarea primei etape.
