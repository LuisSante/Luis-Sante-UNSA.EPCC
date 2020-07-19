#include<iostream>

using namespace std;
class Inner{
	public:
		Inner(){
			cout<<"constructor de la clase inner - ";
		}
		
		Inner(Inner &rhs){
			cout<<"constructor de copia de la clase inner - ";
		}
		
		Inner &operator=(const Inner &rhs){
			if(this != &rhs)
				cout<<"operador del constructor de copia la clase inner - ";
			return *this;	
		}
		
		Inner(Inner &&ref){
			cout<<"constructor de movimiento de la clase inner - ";
		}
		
		Inner &operator=(Inner &&rhsref){
			if(this != &rhsref)
				cout<<"operador del constructor de movimiento la clase inner -";
			return *this;	
		}
		
		~Inner(){
			cout<<"destructor de la clase inner - ";
		}
};

class Outer{
	private:
		Inner inner;
	public:
		Outer() : inner(){
			cout<<"constructor de la clase outer"<<endl;
		}
		
		Outer(Outer &ref):inner(ref.inner){
			cout<<"constructor de copia de la clase outer"<<endl;
		}		
		
		Outer &operator=(const Outer &ref){
			if(this != &ref){
				inner = ref.inner;
				cout<<"operador del constructor de copia clase outer"<<endl;
			}
			return *this;
		}
		
		/*Outer(Outer &&rhsref):inner(rhsref.inner){ 
			cout<<"constructor de movimiento de outer"<<endl; // de este modo solo se esta copiando el primerp
		}*/ 												// y se usa ctor de mov de outer
		
		//solucion
		Outer(Outer &&rhsref):inner(move(rhsref.inner)){ 
			cout<<"constructor de movimiento de outer"<<endl; // de este modo solo se esta copiando el primerp
		}
		
		Outer &operator=(Outer &&rhsref){
			if(this != &rhsref){
				inner = rhsref.inner;
				cout<<"operador del constructor de movimiento de outer"<<endl;
			}
			return *this;
		}
		
		~Outer(){
			cout<<"destructor de la clase outer"<<endl;
		}

};

int main(){
	
	//si no se usaria el move
	Outer o;
	Outer o2=move(o); //ctr
	//o = move(o2); //opr
	/*
	Outer o;
	Outer o2=o; // se estaria copiando y se notaria en el momento de la compilacion
	*/
	return 0;
}
