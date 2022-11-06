#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Angajati 
{
    private:
        string nume;
        int varsta;
        int masa;
    public:
        Angajati(string nume, int varsta, int masa) {
            this->nume = nume;
            this->varsta = varsta;
            this->masa = masa;
    };

    string getNume(){
        return this->nume;
    };

    int getVarsta(){
        return this->varsta;
    };

    int getMasa() {
        return this->masa;
    };
};
