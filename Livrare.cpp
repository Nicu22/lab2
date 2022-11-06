#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Livrare {
    private:
        string articol;
        vector <Livrare *> meniuLivrare;

    public:
        Livrare(string articol){
            this->articol = articol;
        };

    Livrare(){
        meniuLivrare.push_back(new Livrare("Burgher"));
        meniuLivrare.push_back(new Livrare("Zeama"));
        meniuLivrare.push_back(new Livrare("Pasta Bolognese"));
        meniuLivrare.push_back(new Livrare("Salata Greceasca"));
    }

    string getArticol() {
        return articol;
    }
    

    void showMeniuLivrare() {
        cout << "\nLivrare: " << endl;
        for (int i = 0; i < meniuLivrare.size(); i++) {
          cout << meniuLivrare[i]->getArticol() << endl;
        }
    }
};