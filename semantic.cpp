#include<iostream>

using namespace std;

class Wallet {
	
public:
    int nrOfDollars;
    
    Wallet() = default; //default ctor

    Wallet(Wallet &&other) {
        this->nrOfDollars = other.nrOfDollars;
        other.nrOfDollars = 0;
    }
};

//Como las semánticas de movimiento están diseñadas 
//para permitir el estado de "robo" de la instancia original
int main(){
	
	Wallet a;
	a.nrOfDollars = 1;
	Wallet b (std::move(a)); //calling B(B&& other);
	cout << a.nrOfDollars << endl; //0
	cout << b.nrOfDollars << endl; //1
		
	return 0;
}
