#include <iostream>
#include "Administrare.cpp"
#include "Angajati.cpp"
#include "Bar.cpp"
#include "Bucatarie.cpp"
#include "Functii.cpp"
#include "Kalean.cpp"
#include "Livrare.cpp"
#include "Manager.cpp"
#include "Meniu.cpp"
#include "Rezervari.cpp"

using namespace std;

int main() {
    Administrare admin;
    Bar bmeniu;
    Bucatarie buc;
    Functii func;
    Kalean kmeniu;
    Livrare livrare;
    Manager man("Ion");
    Meniu meniu;
    Rezervari rez;
    int x;
    do {
        cout << "\nIntrodu 1 pentru a vedea Lista Chelnerilor";
        cout << "\nIntrodu 2 pentru a vedea Meniul din Bucatarie";
        cout << "\nIntrodu 3 pentru a vedea Meniul Kaleanelor";
        cout << "\nIntrodu 4 pentru a vedea Meniu din Bar";
        cout << "\nIntrodu 5 pentru a vedea Meniul pentru livrare";
        cout << "\nIntrodu 6 pentru a vedea Lista angajatilor din Bucatarie";
        cout << "\nIntrodu 7 pentru a vedea Lista Functiilor";
        cout << "\nIntrodu 8 pentru a vedea Lista Rezervarilor";
        cout << "\nIntrodu 9 pentru a suna un Manager";
        cout << "\nIntrodu 0 pentru a iesi";
        cout << "\nIntrodu Optiune: " << endl;
        cin >> x;
        switch (x) {
            case 1: admin.listChelneri(); break;
            case 2: meniu.showMeniu(); break;
            case 3: kmeniu.showKalean(); break;
            case 4: bmeniu.showBar(); break;
            case 5: livrare.showMeniuLivrare(); break;
            case 6: buc.showBucatarie(); break;
            case 7: func.showFunctii(); break;
            case 8: rez.listaRezervare(); break;
            case 9: man.sunaManager(); break;
            case 0: return 0;
            default: cout << "\nOptiune Gresita\n" << endl;
            break;
        }
    } while (x != 0);
    return 1;
}