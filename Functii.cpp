#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Functii {
    private:
        string articol;
        vector <Functii *> func;
 

    public:
        Functii(string articol){
            this->articol = articol;
    };

    Functii(){
        func.push_back(new Functii("Calin Mircea, Director General"));
        func.push_back(new Functii("Crina Sava, Director Executiv"));
        func.push_back(new Functii("Mihail Cernea, Asistent de Director"));
        func.push_back(new Functii("Irina Mihaila, Asistent de Director"));
        func.push_back(new Functii("Alexandru Moldovan, VIP"));
        func.push_back(new Functii("Samira Ioan, VIP"));
        func.push_back(new Functii("Timur Opvadenco, VIP"));
    }

    string getArticol(){
        return articol;
    }
    

    void showFunctii()
    {
        cout << "\nLista Functiilor :" << endl;
        for (int i = 0; i < func.size(); i++)
        {
          cout << func[i]->getArticol() << endl;
     
        }
    }
};