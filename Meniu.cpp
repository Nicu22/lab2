#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Meniu {
    private:
        string articol;
        vector <Meniu *> meniu;

    public:
        Meniu(string articol){
        this->articol = articol;
    };

    Meniu(){
        meniu.push_back(new Meniu("Burgher"));
        meniu.push_back(new Meniu("Zeama"));
        meniu.push_back(new Meniu("Pasta Bolognese"));
        meniu.push_back(new Meniu("Salata Greceasca"));
    }

    string getArticol(){
        return articol;
    }
    

    void showMeniu()
    {
        cout << "\nMeniu Bucatarie: " << endl;
        for (int i = 0; i < meniu.size(); i++)
        {
            cout << meniu[i]->getArticol() << endl;
        }
    }
};