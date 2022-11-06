#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Manager {
    private:
        string nume;
    public:
        Manager(string nume){
            this->nume = nume;
        };

    string getNume() {
        return nume;
    }
    

    void sunaManager(){
        cout << "\nNumele meu este " << this->getNume() << ". Cu ce te pot ajuta?" << endl;
    }
};