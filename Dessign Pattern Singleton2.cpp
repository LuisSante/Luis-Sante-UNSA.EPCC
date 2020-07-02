#include<iostream>

using namespace std;

class Arbol{		
	public:
		static Arbol* Instancia();
};
Arbol* Arbol :: Instancia(){
	static Arbol arbol;
	return &arbol;
}

int main(){	
	Arbol *arboles = Arbol :: Instancia();
	Arbol *arboles1 = Arbol :: Instancia();
	Arbol *arboles2 = Arbol :: Instancia();
	Arbol *arboles3 = Arbol :: Instancia();
	Arbol *arboles4 = Arbol :: Instancia();
	return 0;
}
