#include<iostream>

using namespace std;

class Conexion{		
	public:
		static Conexion* Instancia();
};
Conexion* Conexion :: Instancia(){
	static Conexion conexion1;
	
	return &conexion1;
}

int main(){	
	Conexion *conexiones = Conexion :: Instancia();
	Conexion *conexiones1 = Conexion :: Instancia();
	Conexion *conexiones2 = Conexion :: Instancia();
	Conexion *conexiones3 = Conexion :: Instancia();

	return 0;
}
