#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Bucatarie {
    private:
        string articol;
        vector <Bucatarie *> buc;
 

    public:
        Bucatarie(string articol){
            this->articol = articol;
        };

    Bucatarie(){
        buc.push_back(new Bucatarie("Macari Ecaterina, Chef"));
        buc.push_back(new Bucatarie("Suvac Cristina, Chef Executiv"));
        buc.push_back(new Bucatarie("Popescu Ion, Sectia Carne"));
        buc.push_back(new Bucatarie("Irina Mihaila, Sectia Bauturi"));
        buc.push_back(new Bucatarie("Bulgaru Alexandru, Sectia Salate"));
        buc.push_back(new Bucatarie("Rusnac Dan, Ajutor de Bucatar"));
        buc.push_back(new Bucatarie("Dovgani Irina, Sectia Carne"));
        buc.push_back(new Bucatarie("Ginju Ion, Ajutor de Bucatar"));
        buc.push_back(new Bucatarie("Tutunaru Dumitru, Ajutor de Bucatar"));
    }

    string getArticol(){
        return articol;
    }
    

    void showBucatarie()
    {
        cout << "\nLista Bucatarie: " << endl;
        for (int i = 0; i < buc.size(); i++)
        {
          cout << buc[i]->getArticol() << endl;
        }
    }
};