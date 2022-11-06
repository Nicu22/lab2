#pragma once
#include <iostream>
#include <vector>
#include "Angajati.cpp"

using namespace std;

class Administrare 
{
    private:
        vector<Angajati *> chelneri;

    public:
        Administrare()
        {
            chelneri.push_back(new Angajati("Sorin ", 25, 1));
            chelneri.push_back(new Angajati("Andrei ", 35, 2));
            chelneri.push_back(new Angajati("Daniela ", 22, 3));
            chelneri.push_back(new Angajati("Mihaela ", 20, 4));
        };

    void listChelneri() {
        cout << "Lista chelnerilor: " << endl;
        for (int i = 0; i < chelneri.size(); i++) {
          cout << chelneri[i]->getNume() << "are " << chelneri[i]->getVarsta() << " ani si are masa cu numarul " << chelneri[i]->getMasa() << endl;
        }
        
    }
};
