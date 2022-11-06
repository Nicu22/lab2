#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Kalean {
    private:
        string articol; 
        vector <Kalean *> kalean;

    public:
        Kalean(string articol){
            this->articol = articol;
    };

    Kalean(){
        kalean.push_back(new Kalean("Serbetli Ice Peach"));
        kalean.push_back(new Kalean("Serbetli Green Mix"));
        kalean.push_back(new Kalean("Darkside Fructe de Padure"));
        kalean.push_back(new Kalean("Darkside Fresh"));
    }

    string getArticol(){
        return articol;
    }
    

    void showKalean()
    {
        cout << "\nKalean Menu: " << endl;
        for (int i = 0; i < kalean.size(); i++)
        {
          cout << kalean[i]->getArticol() << endl;
        }
    }
};