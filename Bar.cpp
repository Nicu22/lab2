#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Bar {
    private:
        string articol; 
        vector <Bar *> bar;

    public:
        Bar(string articol){
            this->articol = articol; 
    };

    Bar(){
        bar.push_back(new Bar("Pina Colada"));
        bar.push_back(new Bar("Margarita"));
        bar.push_back(new Bar("Sex on the Beach"));
        bar.push_back(new Bar("Hurricane"));
    }

    string getArticol(){
        return articol;
    }
    

    void showBar()
    {
        cout << "\nBar Meniu: " << endl;
        for (int i = 0; i < bar.size(); i++)
        {
          cout << bar[i]->getArticol() << endl;
        }
    }
};