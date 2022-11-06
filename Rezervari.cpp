#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Rezervari {
    private:
        string client;
        int timp;
        int masa;
        vector<Rezervari *> rezervare;

    public:
        Rezervari(string client, int timp, int masa){
            this->client = client;
            this->timp = timp;
            this->masa = masa;
    }
    Rezervari(){
        rezervare.push_back(new Rezervari("Blindu Diana", 15, 1));
        rezervare.push_back(new Rezervari("Ciprian Albot", 18, 2));
        rezervare.push_back(new Rezervari("Sisman Iulian", 11, 1));
    }

    string getClient(){
        return client;
    }

    int getTimp(){
        return timp;
    }

    int getMasa(){
        return masa;
    }

    void listaRezervare(){
        cout << "\nLista Rezervare" << endl;
        for (int i = 0; i < rezervare.size(); i++)
        {
            cout << "Masa "  << rezervare[i]->getMasa() <<  " este rezervata pentru " << rezervare[i]->getClient() << " la ora " << rezervare[i]->getTimp() << endl;
        }
        
        
    }

   
};  